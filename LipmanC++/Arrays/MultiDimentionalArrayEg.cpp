#include<iostream>
#include<stdlib.h>
#define ROW 3
#define COL 4

using namespace std;

int main()
{
	int array[ROW][COL] = {0,1,2,3,4,5,6,7,8,9,10,11}; //initialization
	int arr[ROW][COL] = {{0}, {4}, {8}}; //explicit initialization
	cout<<"printing the multi dimentional array"<<endl;
	//for each row
	for(size_t i = 0 ; i != ROW ; i++)
	{
		//for each col within row
		for(size_t j = 0 ; j != COL ; j++)
		{
			cout<<array[i][j]<<endl;
		}
	}
	cout<<"printing explicitly initialized array"<<endl;
	for(size_t i = 0 ; i != ROW ; i++)
	{
		for(size_t j = 0 ; j != COL ; j++)
		{
			cout<<arr[i][j]<<endl;
		}
	}
	cout<<"printing explicit row from the multi dimensional array"<<endl;
	cout<<array[2]<<endl;
	return(0);
}
