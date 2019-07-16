#include <iostream>
#include <functional>
#include <thread>
#include <mutex>

using namespace std;

class FooBar {
private:
    int n;
	mutex m1;
	mutex m2;
public:
    FooBar(int n) {
        this->n = n;
		m1.lock();
    }

    void foo(function<void()> printFoo) {
        
        for (int i = 0; i < n; i++) {
            m2.lock();
        	// printFoo() outputs "foo". Do not change or remove this line.
        	printFoo();
			m1.unlock();
        }
    }

    void bar(function<void()> printBar) {
        
        for (int i = 0; i < n; i++) {
            m1.lock();
        	// printBar() outputs "bar". Do not change or remove this line.
        	printBar();
			m2.unlock();
        }
    }
};

void printFoo(){
	cout<<"foo"<<endl;
}

void printBar(){
	cout<<"bar"<<endl;
}

int main(int argc, char** argv){
	FooBar foobar(5);
	auto func = [&foobar]( void(FooBar::*fb)(function<void()>), function<void()> p )->void{
		(foobar.*fb)(p);
	};
	
	thread t1(func, &FooBar::foo, printFoo);
	thread t2(func, &FooBar::bar, printBar);
	t1.join();
	t2.join();

	return 0;
}
