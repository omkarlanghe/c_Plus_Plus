/*
 * WAP to count number of words in sentence and identifies the largest and smallest words. If several words have the largest or smallest length, report all of them 
 */

#include<iostream>
#include<string>
int CountNoOfWords(std::string);

int main()
{
	std::string line1 = "we were her pride of 10 she named us:";
	std::string line2 = "Bengamin, Phoenix, the Prodigal";
	std::string line3 = "and perspicacious pacific suzname";
	std::string sentence = line1 + ' ' + line2 + ' ' + line3;

	int count = CountNoOfWords(sentence);
	std::cout<<"total words in sentence are: "<<count<<std::endl;
	
	return(0);
}

int CountNoOfWords(std::string sentence)
{
	int count = 1;
	for(auto iter = sentence.begin() ; iter != sentence.end() ; ++iter)
	{
		if(*iter == ' ')
		{
			count++;
		}
	}
	return(count);
}


