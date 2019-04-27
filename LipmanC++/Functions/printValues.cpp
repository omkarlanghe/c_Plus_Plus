#include<iostream>
void printValues(const int *, const int *);
using namespace std;
int main(void)
{
	int j[2] = {0,1};
	//ok: j is converted to pointer to 0th element in j
	//j + 2 refers one past the end of j
	printValues(j,j+2);
	return(0);
}

void printValues(const int *begin, const int *end)
{
	while(begin != end)
	{
		cout<<*begin++<<endl;
	}
}
