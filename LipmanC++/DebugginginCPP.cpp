#include<iostream>
#define NDEBUG

using namespace std;

int main()
{
	int size = 10, userSize = 0;
	cout<<"Enter the size"<<endl;
	cin>>userSize;

	if(userSize < 10)
	{
		cerr<<"Error: "<<__FILE__<<" at line: "<<__LINE__<<endl<<" Compiled on: "<<__DATE__<<" at "<<__TIME__<<endl<<" you have enter too less size"<<endl;
	}
	else
	{
		cout<<"Welcome to the world of C++"<<endl;
	}
	return(0);
}

/*
 Error: DebugginginCPP.cpp at line: 14
 Compiled on: Apr 22 2019 at 02:16:47
 you have enter too less size
*/
