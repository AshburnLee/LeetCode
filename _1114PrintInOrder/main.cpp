#include <iostream>
#include <mutex>
#include <functional>
#include <thread>
using namespace std;

class Foo{
private:
	mutex m1, m2;
public:
	Foo(){
		m1.lock();
		m2.lock();
	}
	void first(function<void()> printFirst){
		
		printFirst();
		m1.unlock();
	}

	void second(function<void()> printSecond){
		m1.lock();
		printSecond();
		m1.unlock();
		m2.unlock();
	}

	void third(function<void()> printThird){
		m2.lock();
		printThird();
		m2.unlock();
	}
};
void printFirst(){
	cout<<"print first"<<endl;
}
void printSecond(){
	cout<<"print second"<<endl;
}
void printThird(){
	cout<<"print third"<<endl;
}

int main(int argc, char** argv){
	Foo foo;

	auto func = [&foo](void (Foo::*fp)(function<void()>), function<void()> p) -> void {
        (foo.*fp)(p);
    };

	thread t1(func, &Foo::first, printFirst);
	thread t2(func, &Foo::second, printSecond);
	thread t3(func, &Foo::third, printThird);
	t1.join();
	t2.join();
	t3.join();
	return 0;	
}
