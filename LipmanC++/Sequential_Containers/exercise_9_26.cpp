#include<iostream>
#include<list>
#include<vector>
void SimulateContainers(std::vector<int>, std::list<int>);
int main()
{
	int ia[] = {0,1,1,2,3,5,8,13,21,55,89};
	std::vector<int> ivec;
	std::list<int> ilist;

	std::cout<<"copying array into a vector and list container"<<std::endl;
	for(int i = 0 ; i < 11 ; i++)
	{
		ivec.push_back(ia[i]);
		ilist.push_back(ia[i]);
	}
	std::cout<<"displaying both containers"<<std::endl;
	for(auto i = ivec.begin() ; i != ivec.end() ; i++)
	{
		std::cout<<"vector->"<<*i<<std::endl;
	}
	for(auto iter = ilist.begin() ; iter != ilist.end() ; iter++)
	{
		std::cout<<"list->"<<*iter<<std::endl;
	}
	SimulateContainers(ivec, ilist);
	return(0);
}

void SimulateContainers(std::vector<int> ivec, std::list<int> ilist)
{
	for(auto iter = ivec.begin() ; iter != ivec.end() ; ++iter)
	{
		if((*iter&1)==0)
		{
			ivec.erase(iter);
		}
	}
	for(auto iter = ilist.begin() ; iter != ilist.end() ; ++iter)
        {
                if((*iter&1)!=0)
                {
                        //ilist.erase(iter);
                }
        }

	std::cout<<"displaying containers with removed elements"<<std::endl;
	for(auto iter = ilist.begin() ; iter != ilist.end() ; ++iter)
	{
		std::cout<<"list->"<<*iter<<std::endl;
	}
	for(auto iter = ivec.begin() ; iter != ivec.end() ; ++iter)
	{
		std::cout<<"vector->"<<*iter<<std::endl;
	}
}
