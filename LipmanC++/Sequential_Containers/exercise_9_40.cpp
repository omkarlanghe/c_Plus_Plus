#include<iostream>

int main()
{
	std::string q1("When lilacs last in the dooryard bloom'd");
	std::string q2("The child is father of the man");
	
	std::string sentence;
	/*
	sentence.assign(q1,16); //in the dooryard bloom'd
	sentence.erase(sentence.size() - 7, 7); //in the dooryard
	sentence.insert(sentence.begin(), q2.begin(), q2.end());
	sentence.erase(13, 18); //The child is in the dooryard
	std::cout<<sentence<<std::endl;
	*/
	std::string substr1 = q2.substr(0, 13);
	//std::cout<<substr1<<std::endl;

	std::string substr2 = q1.substr(17, 15);
	//std::cout<<substr2<<std::endl;

	sentence = substr1.append(substr2);

	std::cout<<sentence<<std::endl;

	return(0);
}
