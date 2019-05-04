#include<iostream>
#include<stdlib.h>

using namespace std;
class Sample
{
	public:
		string name;
	void printName()
	{
		cout<<"name: "<<name<<endl;
	}
};

int main()
{
	Sample s1;
	s1.name = "C++ Primer";
	s1.printName();
	exit(0);
}
