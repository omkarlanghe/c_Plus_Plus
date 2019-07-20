#include<iostream>
int main()
{
	std::string s = "some string";
	std::string s2 = "some other string";
	s.insert(s.begin(), s2.begin(), s2.end()); //insert iterator range before s.begin()
	std::cout<<"s => "<<s<<std::endl;

	s.insert(0, s2); //insert copy of s2 before position 0 in s
	std::cout<<"s => "<<s<<std::endl;

	s.insert(0, s2, 0, s2.size()); //insert s2.size() characters from s2 starting at s2[0] before s[0]
	std::cout<<"s => "<<s<<std::endl;
	return(0);
}
