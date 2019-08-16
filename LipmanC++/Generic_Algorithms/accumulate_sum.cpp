#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>

int main()
{
	std::vector<int> ivec;
	int num;

	while(std::cin>>num)
	{
		if(num == 0)
			break;
		else
			ivec.push_back(num);
	}

	int total = accumulate(ivec.begin(), ivec.end(), 0);

	std::cout<<"sum of total elements in given vector is : "<<total<<std::endl;
	return(EXIT_SUCCESS);
}
