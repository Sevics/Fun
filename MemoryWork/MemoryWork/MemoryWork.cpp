#include<iostream>
#include<conio.h>


//Function for fill array  certain values:
void FillArray(int* array, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << "A[" << i << "] = ";
		std::cin >> *(array + i);
	}
}

//Function for copying values from old to new array:
void CopyArrayValues(int* ArrayOld, int* ArrayNew, int size)
{
	for (int i = 0; i < size; i++)
	{
		*(ArrayNew + i) = *(ArrayOld + i);
	}
}

//Function for add (newsize - oldsize) values to new array:
void PushBack(int* Array, int oldsize, int newsize)
{
	for (int i = oldsize; i < newsize; i++)
	{
		std::cout << "A[" << i << "] = ";
		std::cin >> *(Array + i);
	}
}

//Function for print all array values:
void PrintArray(int* Array, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << "A[" << i << "] = " << *(Array + i);
		std::cout << std::endl;
	}
}

int main(int argc, char* argv[])
{
	int size;

	std::cout << "Write quantity of values in array: ";
	std::cin >> size;

	int* Array = new int[size];

	FillArray(Array, size);

	int newsize;

	std::cout << "Write quantity of values which you are want to add: ";
	std::cin >> newsize;

	newsize = newsize + size;
	int* NewArray = new int[newsize];

	CopyArrayValues(Array, NewArray, size);
	PushBack(NewArray, size, newsize);
	system("cls");

	std::cout << "First array: ";
	std::cout << std::endl;

	PrintArray(Array, size);

	delete[] Array;

	std::cout << "New array: ";
	std::cout << std::endl;

	PrintArray(NewArray, newsize);
	delete[] NewArray;
	return 0;
}