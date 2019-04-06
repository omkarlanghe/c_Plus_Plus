#include<iostream>
#include<vector>

using namespace std;

int main()
{
	const size_t arr_size = 6;
	int int_arr[arr_size] = {0, 1, 2, 3, 4, 5};
	
	//ivec has 6 elements: each a copy of the corresponding element in int_arr
	vector<int> ivec(int_arr, int_arr + arr_size);

	cout<<"elements in an array are:"<<endl;
	for(int i = 0 ; i < arr_size; i++)
	{
		cout<<int_arr[i]<<endl;
	}
	cout<<"element in a array initialized vector are:"<<endl;
	for(int i = 0 ; i < ivec.size() ; i++)
	{
		cout<<ivec[i]<<endl;
	}

	return(0);
}
