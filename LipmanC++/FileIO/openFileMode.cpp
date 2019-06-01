#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream myfile;
	myfile.open("example.bin", ios::out | ios::app | ios::binary);
	if(myfile.is_open())
	{
		//cout<<"Success"<<endl;
		myfile<<"Writing to this file.\n";
		myfile.close();
	}
	else
	{
		cout<<"Failure"<<endl;
	}
	return(EXIT_SUCCESS);
}
