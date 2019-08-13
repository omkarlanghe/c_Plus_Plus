/*
 * Define a map for which the key is the family surname and the value is a vector of the children's name. Populate the
 * map with atleast six entries. Test it by supporting user queries based on a surname, which should list the names of children
 * in that family*/

#include<iostream>
#include<vector>
#include<map>

int main()
{
	std::string surname, cName;
	std::map<std::string, std::vector<std::string>>::iterator it;
	std::vector<std::string> childrens;
	std::map<std::string, std::vector<std::string>> fMap;
	std::map<std::string, std::vector<std::string>>::iterator retVal;
	int choice;

	do {
		std::cout<<"\n1.Enter Surname\n2.Enter childrens\n3.Display Familiy.\n4.Search Family\n5.Exit"<<std::endl;
		std::cout<<"Enter your choice"<<std::endl;
		std::cin>>choice;
		std::cout<<"############################################"<<std::endl;
		switch(choice)
		{
			case 1:
				std::cout<<"*************Enter the surname************"<<std::endl;
				std::cin>>surname;
				break;
			case 2:
				std::cout<<"*************Enter name of children********"<<std::endl;
				while(std::cin>>cName)
				{
					if(cName == "q" || cName == "Q")
					{
						break;
					} else {
						childrens.push_back(cName);
					}
				}
				
				fMap.insert(std::pair<std::string, std::vector<std::string>>(surname, childrens));
				childrens.clear();
				break;
			case 3:
				std::cout<<"**************Displaying Familiy Members*************"<<std::endl;
				for(it = fMap.begin() ; it != fMap.end() ; ++it)
				{
					//std::cout<<it->first<<std::endl;
					for(auto iter = it->second.begin() ; iter != it->second.end() ; ++iter)
					{
						std::cout<<it->first<<"'s children's are : "<<*iter<<std::endl;
					}
				}
				break;
			case 4:
				std::cout<<"************Enter Surname to search*********"<<std::endl;
				std::cin>>surname;

				retVal = fMap.find(surname);
				for(auto iter = retVal->second.begin() ; iter != retVal->second.end() ; ++iter)
				{
					std::cout<<retVal->first<<" is father of "<<*iter<<std::endl;
				}
				//std::cout<<retVal;
				break;
			case 5:
				exit(0);
				break;
		}
	} while(choice != 5);

	return 0;
}

