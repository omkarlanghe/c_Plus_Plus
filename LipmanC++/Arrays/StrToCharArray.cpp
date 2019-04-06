#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	char *array = NULL;
	cout<<"Enter elements in an array"<<endl;
	cin>>array;

	while(*array != '\0')
	{
		cout<<*array<<endl;
		array++;
	}

}
