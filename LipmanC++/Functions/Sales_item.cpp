#include<iostream>
using namespace std;

class Sales_item
{
	private:
		int age, salary;
	public:
		Sales_item(): age(0), salary(0) { }
		
		void ReadData()
		{
			cout<<"age: "<<age<<endl<<"salary: "<<salary<<endl;
		}
		void WriteData()
		{
			cin>>age;
			cin>>salary;
		}
};
int main(void)
{
	Sales_item s1;
	Sales_item s2;

	cout<<"Read Data obj1: "<<endl;
	s1.ReadData();
	cout<<"Read Data obj2: "<<endl;
	s2.ReadData();

	cout<<"Write Data obj1: "<<endl;
	s1.WriteData();
	cout<<"Read Data obj1: "<<endl;
	s1.ReadData();
	
	cout<<"Write Data obj2: "<<endl;	
	s2.ReadData();

	return(EXIT_SUCCESS);
}
