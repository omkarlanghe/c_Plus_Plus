#include<iostream>
#include<assert.h>
int **create(const int row, const int col)
{
		int **matrix = NULL;
		matrix = new int*[row];
		assert(matrix != NULL);

		for(int i = 0 ; i < row ; i++)
		{
			matrix[i] = new int[col];
		   	assert(matrix != NULL);
		}
		return matrix;
}

void Display(const int **const matrix, const int row, const int col)
{
		assert(matrix != NULL);
		assert(row > 0);
		assert(col > 0);
		for(int i = 0 ; i < row ; i++)
		{
			std::cout<<"\n";
			for(int j = 0 ; j < col ; j++)
			{
				std::cout<<matrix[i][j]<<std::endl;
			}	
		}
}

void FreeDynamicArray(int **matrix, const int row)
{
	for(int i = 0 ; i < row ; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;
}

int **AdditionOfMatrix(const int **matrix1, const int **matrix2 , const int row, const int col)
{
	assert(matrix1 != NULL);
	assert(matrix2 != NULL);
	assert(row > 0);
	assert(col > 0);
	int **resultMatrix = create(row,col);

	for(int i = 0 ; i < row ; i++)
	{
		for(int j = 0 ; j < col ; j++)
		{
				resultMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
		}
	}
	return resultMatrix;
}

int **SubtractionOfMatrix(const int **matrix1, const int **matrix2 , const int row, const int col)
{
	assert(matrix1 != NULL);
	assert(matrix2 != NULL);
	assert(row > 0);
	assert(col > 0);
	int **resultMatrix = create(row,col);

	for(int i = 0 ; i < row ; i++)
	{
		for(int j = 0 ; j < col ; j++)
		{
				resultMatrix[i][j] = matrix1[i][j] - matrix2[i][j];
		}
	}
	return resultMatrix;
}
int **Multiplication(const int **matrix1, const int **matrix2, const int row, const int col)
{
	assert(matrix1 != NULL);
	assert(matrix2 != NULL);
	assert(row>0);
	assert(col>0);
	int **resultMatrix = create(row,col);

	for(int i = 0 ; i < row ; i++)
	{
		for(int j = 0 ; j < col ; j++)
		{
			resultMatrix[i][j] = matrix1[i][j] * matrix2[i][j]; 
		}
	}
	return resultMatrix;
}

int main()
{
		int **matrix1, **matrix2, **resultMatrixAdd, **resultMatrixMul, **resultMatrixSub, row, col;

		std::cout<<"Enter the size of rows"<<std::endl;
		std::cin>>row;

		std::cout<<"Enter the size of col"<<std::endl;
		std::cin>>col;
		
		std::cout<<"Creating the matrix1"<<std::endl;
		matrix1 = create(row,col);

		std::cout<<"Creating the matrix2"<<std::endl;
		matrix2 = create(row,col);

		std::cout<<"Insert row and col in the matrix1"<<std::endl;
		for(int i = 0 ; i < row ; i++)
		{
			for(int j = 0 ; j < col ; j++)
			{
				std::cin>>matrix1[i][j];
			}
		}
		
		std::cout<<"Insert row and col in the matrix2"<<std::endl;
		for(int i = 0 ; i < row ; i++)
		{
			for(int j = 0 ; j < col ; j++)
			{
				std::cin>>matrix2[i][j];
			}
		}

		std::cout<<"Displaying the matrix1:"<<std::endl;
		Display((const int ** const)(matrix1),row,col);

		std::cout<<"Displaying the matrix2:"<<std::endl;
		Display((const int ** const)(matrix2),row,col);


		std::cout<<"Displaying addition of the matrix"<<std::endl;
		resultMatrixAdd = AdditionOfMatrix((const int ** const)(matrix1), (const int ** const)(matrix2),row,col);
		Display((const int ** const)(resultMatrixAdd),row,col);
		
		std::cout<<"Displaying the Multiplication of the matrix"<<std::endl;
		resultMatrixMul 	= Multiplication((const int ** const)(matrix1), (const int ** const)(matrix2),row,col);
		Display((const int **const)(resultMatrixMul),row,col);

		std::cout<<"Displaying the Subtraction of the matrix"<<std::endl;
		resultMatrixSub = SubtractionOfMatrix((const int ** const)(matrix1), (const int ** const)(matrix2),row,col);
		Display((const int ** const)(resultMatrixSub),row,col);

		FreeDynamicArray(matrix1,row);
		FreeDynamicArray(matrix2,row);
		FreeDynamicArray(resultMatrixAdd,row);
		FreeDynamicArray(resultMatrixMul,row);
		FreeDynamicArray(resultMatrixSub,row);
		return 0;
}


		

