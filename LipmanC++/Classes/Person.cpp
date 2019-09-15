#include<iostream>

class Person {
	public:
		Person();
		Person(std::string name, std::string address);
		std::string getName() const;
		void setName(std::string name);
		std::string getAddr() const;
		void setAddr(std::string addr);
		void print() const;
	private:
		std::string name;
		std::string address;
};

Person::Person()
{
	name = "";
	address = "";
}

Person::Person(std::string pName, std::string pAddress)
{
	name = pName;
	address = pAddress;
}

std::string Person::getName() const
{
	return name;
}

void Person::setName(std::string pName)
{
	this->name = pName;
}

std::string Person::getAddr() const
{
	return address;
}

void Person::setAddr(std::string pAddress)
{
	this->address = pAddress;
}

void Person::print() const
{
	std::cout<<"Name of the person -> "<<name<<std::endl;
	std::cout<<"Address of the person ->"<<address<<std::endl;
}

int main()
{
	Person person;

	std::string name;
	std::string address;

	std::cout<<"Enter the name of the person:"<<std::endl;
	std::cin>>name;
	person.setName(name);

	std::cout<<"Enter the address of the person:"<<std::endl;
	std::cin>>address;
	person.setAddr(address);

	std::string retPerson = person.getName();
	std::string retAddr = person.getAddr();
	
	std::cout<<"Person ->"<<retPerson<<std::endl;
	std::cout<<"Address ->"<<retAddr<<std::endl;

	person.print();
	return 0;

}

