//fstream class to both read/write from/to files
#include<iostream>
#include<fstream>
#include<string>
int main(void)
{
	std::fstream infile;
	std::string line;
	infile.open("example.txt");
	//check if open succeeded
	if(!infile)
	{
		std::cerr<<"error: unable to open file."<<std::endl<<std::flush;
		return(EXIT_FAILURE);
	}
	else
	{
		std::cout<<"success: open succeeded."<<std::endl<<std::flush;
		while(getline(infile,line))
		{
			std::cout<<line<<'\n';
		}
		infile.close();
		return(EXIT_SUCCESS);
	}
}
