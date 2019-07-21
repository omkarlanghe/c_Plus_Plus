#include<iostream>
#include<stack>

void simulateOperation();

int main()
{
	simulateOperation();
	return(0);
}

void simulateOperation()
{
	const std::stack<int>::size_type stk_size = 10;
	std::stack<int> intStack; //empty stack
	//fill up the stack
	int ix = 0;
	while(intStack.size() != stk_size)
		intStack.push(ix++);

	std::cout<<intStack.size()<<std::endl;

	int error_cnt = 0;
	//look at each value and pop it off the stack
	while(intStack.empty() == false) {
		int value = intStack.top();
		//read the top element of the stack
		if(value != --ix) {
			std::cerr<<"oops! expected "<<ix<<" recieved "<<value<<std::endl;
			++error_cnt;
		}
		intStack.pop(); //pop the top element, and repeat
	}

	std::cout<<intStack.size()<<std::endl;
	std::cout<<"our program ran with the "<<error_cnt<<" errors!"<<std::endl;
}
