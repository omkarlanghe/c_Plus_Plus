#include<iostream>
#include<fstream>
#include<string>
int main(void)
{
	std::ofstream outfile;
	//std::string inputStream;
	outfile.open("example.txt");

	if(!outfile)
	{
		std::cerr<<"error: unable to open file"<<std::endl;
		return(EXIT_FAILURE);
	}
	else
	{
		//std::cin>>inputStream;
		//outfile<<inputStream;
		outfile<<"Jai shree ram!!!";
		std::cout<<"success: inserted successfully"<<std::endl;
		outfile.close();
		return(EXIT_SUCCESS);
	}
}
