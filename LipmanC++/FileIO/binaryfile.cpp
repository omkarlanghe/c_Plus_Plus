#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	streampos size;
	char *memblock;

	ifstream file("example.bin", ios::in | ios::binary | ios::ate);

	if(file.is_open())
	{
		size = file.tellg();
		//tellg() member functions with no parameters returns value of the member type streampos, 		     which is a type representing the current get position.
		memblock = new char[size];
		file.seekg(0, ios::beg);
		//seekg() allows to change get position.
		file.read(memblock, size);
		file.close();

		cout<<"The entire file content is in memory"<<endl;
		delete[] memblock;
	}
	else
	{
		cout<<"Unable to open file";
		return(0);
	}
}
