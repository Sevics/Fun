#include <iostream>

/*
int main(int argc, char* argv[])
{
	int A[] = {5,3,6,7};
	int *P_a[] = {0,0,0,0};

	for (size_t i = 0; i < sizeof(A) / 4; i++)
	{
		*(P_a[i] = new int) = A[i];
		std::cout << "P_a[" << i + 1 << "] = " << *P_a[i];
		std::cout << std::endl;
	}

	delete[] *P_a;

	for (size_t i = 0; i < sizeof(A) / 4; i++)
	{
		std::cout << "A[" << i + 1 << "] = " << A[i];
		std::cout << std::endl;
	}

	std::cout << "Program finish work!;";
	return 0;
}
*/
/*
int main(int argc, char* argv[])
{
	int *A = new int;
	std::cout << "Write an value: ";
	std::cin >> *A;
	std::cout << "A = " << *A;
	int **P_a;
	P_a = &A;
	delete *P_a;
	std::cout << std::endl;
	std::cout << "Program finish work!";
	return 0;
}
*/

int main(int argc, char* argv[])
{
	char a;
	char *P_a = &a;
	std::cout << "Write an symbol: ";
	std::cin >> a;
	std::cout << "You write: " << a;
	std::cout << std::endl;
	std::cout << "Variable address: " << static_cast<void *>(&a);
	std::cout << std::endl;
	std::cout << "Pointer value: " << *P_a;
	std::cout << std::endl;
	std::cout << "Pointer address: " << static_cast<void *>(P_a);
	return 0;
}