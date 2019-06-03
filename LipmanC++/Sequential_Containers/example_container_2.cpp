//Iterators on vectors and deque support additional operations
/*
 * Sequential containers like vectors, deque supports fast and random access to their elements.
 * Because these containers supports random access by position, it is possible for their iterators to efficiently implement the arithmetic and relational operations
 * Below example calculates the midpoint of a vector
 */

#include<iostream>
#include<vector>

int main(void)
{
	int ia[10] = {0, 1, 2, 3, 49, 5, 6, 7, 8, 9};
	std::vector<int> vec(ia, ia+9);
	std::vector<int>::iterator iter = vec.begin() + vec.size() / 2;

	std::cout<<"middle element is: "<<*iter<<std::endl;
	for(auto i = vec.begin() ; i != iter ; ++i)
	{
		std::cout<<"elements-> "<<*i<<std::endl;
	}
	return(0);
}

/*
 * The list iterators does not support the arithmetic operations-addition or subtraction- nor does it support the relational(<=,<,>,>=) operators.
 * It does not support pre- and postfix increment and decrement and the equality operators*/

