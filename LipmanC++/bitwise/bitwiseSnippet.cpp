#include<iostream>
using namespace std;

int main()
{
	unsigned char ibits = 0227;
	unsigned char bits = 1;
	unsigned int b1 = 0145;
	unsigned int b2 = 0257;
	unsigned int result = b1 & b2; //bitwise AND operator
	cout<<"before bit inversion ->"<<ibits<<endl;
	ibits = ~ibits; //bitwise NOT also known as bit inversion operatior
	cout<<"after bit inversion ->"<<ibits<<endl;

	int temp1 = bits<<1;
	cout<<"left shift ->"<<temp1<<endl; //left shift by 1
	temp1 = bits<<2;
	cout<<"left shift ->"<<temp1<<endl; //left shift by 2
	temp1 = bits>>3;
	cout<<"right shift ->"<<temp1<<endl; //right shift by 3
	
	cout<<"b1 ->"<<b1<<" "<<"b2->"<<b2<<endl;
	cout<<"b1 & b2 is ->"<<result<<endl;
	
	result = b1 ^ b2; //bitwise XOR i.e exclusive OR
	cout<<"b1 ^ b2 is ->"<<result<<endl;

	result = b1 | b2; //bitwise OR
	cout<<"b1 | b2 is ->"<<result<<endl;

	return(0);
}
