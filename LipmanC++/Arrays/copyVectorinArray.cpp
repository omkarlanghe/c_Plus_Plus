#include<iostream>
#include<vector>
#define SIZE 10
using namespace std;

int main()
{
	vector<int> ivec(SIZE);
	int array[SIZE];

	cout<<"Enter the elements in a vector:"<<endl;
	for(int i = 0 ; i < SIZE ; i++)
	{
		cin>>ivec[i];
	}
	cout<<"Elements in a vector are:"<<endl;
	for(int i = 0 ; i < SIZE ; i++)
	{
		cout<<"ivec ->"<<ivec[i]<<endl;
		array[i] = ivec[i];
	}
	cout<<"Elements in an array after copying from vector are:"<<endl;
	for(int i = 0 ; i < SIZE ; i++)
	{
		cout<<"array ->"<<array[i]<<endl;
	}	
	return(0);
}
