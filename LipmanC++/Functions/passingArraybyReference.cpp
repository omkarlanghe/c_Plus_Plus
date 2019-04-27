#include<iostream>
void ArrayByReference(int (&arr)[10]);
using namespace std;

int main()
{
	int i = 0, j[2] = {0, 1};
	int k[10] = {0,1,2,3,4,5,6,7,8,9};
	//ArrayByReference(&i);
	//ArrayByReference(j);
	ArrayByReference(k);
	return(0);
}

void ArrayByReference(int (&arr)[10])
{
	for(size_t i = 0 ; i != 10 ; ++i)
	{
		cout<<arr[i]<<endl;
	}
}
//In the above case, the array size is part of the parameter and argument types. The compiler will check that the size of the array arguments matches the size of the parameters.
