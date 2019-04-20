#include<iostream>

using namespace std;
int main()
{
	int i;
	int *pi = new int;
	cout<<sizeof(i)<<endl;
	cout<<sizeof(*pi)<<endl;
	cout<<"###############################"<<endl;
	cout<<"Initializing dynamically allocated objects"<<endl;

	int i_obj(1024); //value of i is 1024
	cout<<i_obj<<endl;
	int *pi_obj = new int(1024); //object to which pi points is 1024;
	cout<<*pi_obj<<endl;
	string s(10, '9'); //value of s is '9999999999'
	cout<<s<<endl;
	cout<<"size of string: "<<sizeof(s)<<endl;
	string *ps = new string(10, '9'); //*ps is '9999999999'
	cout<<*ps<<endl;

	cout<<"############### Value initialize a dynamic allocated object ###############"<<endl;
	string *pi_vals = new string(); //initialized to empty string()
	cout<<"value initialized string: "<<*pi_vals<<endl;
	int *pi_val = new int(); //pi_val points to an int value-initialized to 0
	cout<<"value initialized int: "<<*pi_val<<endl;
	int *obj = new int(10);
	cout<<"custom value initialized int: "<<*obj<<endl;

	delete pi;
	pi = 0;
	delete pi_obj;
	pi_obj = 0;
	delete ps;
	ps = NULL;
	delete pi_vals;
	pi_vals = NULL;
	delete pi_val;
	pi_val = 0;
	delete obj;
	obj = 0;

	return(0);
}
