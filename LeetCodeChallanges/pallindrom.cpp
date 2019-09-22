#include<iostream>
#include<string>
#include<stdbool.h>
#include<sstream>

using namespace std;
bool pallindrome(string&);
int main()
{
	int num;
	bool status;
	stringstream ss;
	cout<<"enter number"<<endl;
	cin>>num;
	ss<<num;
	string val;
       	ss>>val;
	status = pallindrome(val);
	if(status) {
		cout<<"true"<<endl;
	} else {
		cout<<"false"<<endl;
	}
	return 0;
}

bool pallindrome(string &str)
{
	bool status = true;
	for(int i = 0 , j = str.size() - 1 ; i < str.size()/2 ; i++ , j--) {
		if(str[i] != str[j]) {
			status = false;
			break;
		}
	}
	return status;
}
