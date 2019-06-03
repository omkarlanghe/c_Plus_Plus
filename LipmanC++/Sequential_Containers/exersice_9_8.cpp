//Assuming vec_iter is bound to an element in an vector that holds strings, what does this statement do?
#include<iostream>
#include<vector>

int main()
{
	std::string sa[6] = {"Fort Sumter", "Manassas", "Perryville", "Vicksberg", "Meridian", "Chancellorsville"};
	std::vector<std::string> svec(sa, sa+8);
	std::vector<std::string>::iterator vec_iter = svec.begin();

	/*if(vec_iter->empty())
	{
		std::cout<<"empty"<<std::endl;
	}
	else
	{
		std::cout<<"not empty"<<std::endl;
	}*/
	return(0);
}
