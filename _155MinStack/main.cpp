#include "MinStack.h"
void printStack(MinStack ms){
	while(!ms.empty()){
		cout<<ms.top()<<" ";
		ms.pop();
	}	
	cout<<endl;
}
int main(){
	MinStack* ms = new MinStack();
	ms->push(3);
	ms->push(2);
	ms->push(1);
	ms->push(4);
	ms->push(5);

	printStack(*ms);
	cout<<"min: "<<ms->getMin()<<endl;
	ms->pop();

	printStack(*ms);
	cout<<"min: "<<ms->getMin()<<endl;
	ms->pop();
	
	printStack(*ms);
	cout<<"min: "<<ms->getMin()<<endl;
	ms->pop();
	
	printStack(*ms);
	cout<<"min: "<<ms->getMin()<<endl;
	ms->pop();
	return 0;

}
