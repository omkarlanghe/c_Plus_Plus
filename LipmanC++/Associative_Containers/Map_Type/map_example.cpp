#include<iostream>
#include<map>
#include<utility>

int main()
{
	std::map<int, std::string> mapObj;
	std::map<int, std::string>::iterator iter;

	mapObj.insert(std::pair<int, std::string>(01, "omkarlanghe"));
	mapObj.insert(std::pair<int, std::string>(02, "prafullajoshi"));
	mapObj.insert(std::pair<int, std::string>(03, "amitmhaske"));

	mapObj[01] = "jai shree ram";

	for(iter = mapObj.begin() ; iter != mapObj.end() ; ++iter)
	{
		std::cout<<iter->first<<" : "<<iter->second<<std::endl;
	}

	mapObj[01] = "shri ganesha";

	for(iter = mapObj.begin() ; iter != mapObj.end() ; ++iter)
        {
                std::cout<<iter->first<<" : "<<iter->second<<std::endl;
        }


	return(0);
}
