#include<iostream>

int main()
{
	//Reference variables are variables who don't have their own memory, they are just another name(alisases) for a variable(variable with memory). 
	//Rererence variables are replacement to pointers in C++.
	int i=10;
	int &iRef = i;
	
	std::cout<<i<<" : "<<iRef<<std::endl; 	//same value in iRef as iRef is another name for i referencing i's memory and do not have its own memory.
	std::cout<<&i<<" : "<<&iRef<<std::endl;		//it will prove both has same addresses
	
	iRef = 20; //By doing this we are giving another value to i using its reference variable, so value 10 will be override on memory and will now be 20 to print.
	std::cout<<i<<" : "<<&i<<std::endl;
	
	//Reference variables must be initialized when declared
	int &ref; //This thing will not work and result into error telling "ref declared as reference but not initialized."
	ref = i; 
	std::cout<<ref<<std::endl;
	
	//Reference variables onces initialized, cannot be re initialized.
	int k = 100;
	iRef = k;
	std::cout<<k<<" : "<<&iRef<<std::endl;

	//If we try to create reference to reference, it will be reference(another name) to original memory
	
	int &refRef = iRef;
	std::cout<<refRef<<" : "<<&refRef<<std::endl;
	
	//you cannot create reference to a literal
	int &iRefc = 10; //compiler will throw an error telling error: cannot bind non-const lvalue reference of type ‘int&’ to an rvalue of type ‘int’

	//But you can create constant reference
	const int &iRefc  = 10; // compiler allocates memory to this Reference variable because of its constant nature. It cannot be changed/modified 
	
	//NOTE: like storage classes in C we can change const value using pointer variable, But in C++ we cannot do that because Unlike C,C++ is a strict compiler.
	
	//We can create Reference to a pointer in C++;
	int *ptr = &i;
	int *&j = ptr; // valid 
	int &j = ptr //invalid
	 
}
