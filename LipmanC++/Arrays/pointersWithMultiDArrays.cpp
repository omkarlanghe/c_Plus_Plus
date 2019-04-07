#include<iostream>
using namespace std;

int main()
{
	int ia[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
	int (*ip)[4] = ia; //ip points to an array of 4 ints
	
	cout<<(*ip)[4]<<endl;
	ip = &ia[2]; //ia[2] is an array of 4 ints
	cout<<ip<<endl;	
	return(0);
}
