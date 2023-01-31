#include<iostream>
#include<string.h>

/*

// Program for write N-digit value step by step //

int Module(int &value)
{
	int mod = 1;
	while (mod <= value) { mod *= 10; }
	return mod /= 10;
}

void Print(int mod, int &val)
{
	int i = 1;
	while (mod != 0)
	{
		std::cout << i << " digit = " << (val / mod) % 10 << "; ";
		mod /= 10;
		i++;
	}
}

int main(int argc, char* argv[])
{
	int *value = static_cast<int *>(malloc(sizeof(int)));
	if (value == NULL)
	{
		exit(1);
	}
	std::cout << "Write value: ";
	std::cin >> *value;
	int i = 1;
	int module = Module(*value);
	std::cout << "Value = " << *value;
	std::cout << ";" << std::endl;
	std::cout << "That by digits: ";
	Print(module, *value);
	*value = 0;
	free(value);
	return 0;
}

*/

/*

// Program for reverse char variable context //

void reverse(char variable[])
{
	for (int i = 0; i < strlen(variable) / 2 - 1; i++)
	{
		char temp1 = variable[strlen(variable) - i - 1];
		char temp2 = variable[i];
		variable[i] = temp1;
		variable[strlen(variable) - i - 1] = temp2;
	}
}

int main(int argc, char* argv[])
{
	char word[45];
	std::cout << "Write word: ";
	gets_s(word, 45);
	std::cout << "Word - " << word;
	std::cout << std::endl;
	reverse(word);
	std::cout << "Reverse word - " << word;
	return 0;
}

*/

