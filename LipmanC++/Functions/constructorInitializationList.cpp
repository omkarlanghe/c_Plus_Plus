#include<iostream>
using namespace std;
class Sales_item {
	public:
		//double avg_price() const;
		bool same_isbn(const Sales_item &rhs) const {
			return isbn == rhs.isbn;
		}
		
		//Initialization list
		Sales_item() : isbn("C++ Primer"), units_sold(10), revenue(110.0) { }
		
		void PrintValues()
		{
			cout<<"string: "<<isbn<<endl<<"units_sold: "<<units_sold<<endl<<"revenue: "<<revenue<<endl;
		}

	private:
		string isbn;
		unsigned units_sold;
		double revenue;
};
int main(void)
{
        Sales_item si;
        si.PrintValues();
	si.PrintValues();
        return(0);
}

