#include<iostream>
#include<utility>

using namespace std;

int main()
{
	pair<string, string> StudentName("Omkar", "Langhe");
	pair<string, int> RollNo("ELT", 26);
	string authorName;

	cout<<"Name of the student is: "<<StudentName.first<<endl;
	cout<<"Roll No is: "<<RollNo.second<<endl;

	if(StudentName.first == "Omkar" && RollNo.second == 26)
	{
		authorName = "Stanely Lipman";
		pair<string, string> aName(authorName,"");
		cout<<"Author Name: "<<aName.first<<endl;
	}
	
	//cout<<"Author Name: "<<aName.first<<endl;

	return(0);
}
