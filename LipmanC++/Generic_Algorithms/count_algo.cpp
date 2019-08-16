#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
	std::vector<int> ivec;
	int value, val;

	while(std::cin>>value)
	{
		if(value == 0)
			break;
		else
			ivec.push_back(value);
	}

	std::cout<<"Enter the value to find in vector: "<<std::endl;
	std::cin>>val;

	int result = count(ivec.begin(), ivec.end(), val);
	std::cout<<"The value "<<val<<" is present "<<result<<" times."<<std::endl;

	return(0);
}
