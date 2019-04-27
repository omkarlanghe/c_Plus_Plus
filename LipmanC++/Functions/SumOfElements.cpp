#include<iostream>

int SumOfElementUsingPointer(int*,int);

using namespace std;
int main(void)
{
	int size;
	cout<<"Enter the size of an array:"<<endl;
	cin>>size;
	//allocate memory using new
	int *arr = new int[size];
	cout<<"Enter the elements in an array:"<<endl;
	for(size_t i = 0 ; i != size ; i++)
	{
		cin>>arr[i];
	}

	//function call
	int result = SumOfElementUsingPointer(arr,size);
	cout<<"Sum of elements in an array is: "<<result<<endl;
	//result = SumOfElementUsingArrayOfReferences(arr, size);
	delete[] arr;
	return(0);
}
int SumOfElementUsingPointer(int *arr, int size)
{
	int sum = 0;
	for(size_t i = 0 ; i != size ; i++)
	{
		sum += arr[i];
	}
	return(sum);
}

