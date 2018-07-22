#include<iostream>

void vowelConsonant()
{
	char ch;
	
	std::cout<<"Enter the character to check:\n"<<std::endl;
	std::cin>>ch;
	
	switch(ch)
	{
		case 'A'  :  case 'a' :  case 'E' :  case 'e' :  case 'I' :  case 'i' :   case 'O' :  case 'o' :  case 'U' :  case 'u' :
		std::cout<<"Its a Vowel..\n"<<std::endl;
		break;
		
		default :
		std::cout<<"Its a Consonant..\n"<<std::endl;
		break;
	}
}

int main()
{
	vowelConsonant();
	return 0;
}
