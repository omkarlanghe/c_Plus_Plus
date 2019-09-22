#include<iostream>
#include<vector>
using namespace std;

int reverseNum(int);
int main()
{
	int num;
	cout<<"enter number"<<endl;
	cin>>num;

	int result = reverseNum(num);
	cout<<result<<endl;
	return 0;
}

int reverseNum(int num) {
	int rev = 0;
	int temp = 0;
	while(num != 0) {
		temp = num%10;
		num = num/10;
		rev = rev * 10 + temp;
	}

	return(rev);
}
