#include <iostream>
#include <time.h>

#define cls system("cls")

unsigned int loop = 0;

int Action(int current,unsigned int &loop)
{
	if (current % 300 == 0) 
	{
		loop++;
	}
	
	if ( (current <= (10 + 300 * loop) && current % 10  > 0) ||
		(current >= (10 + 300 * loop) && (current % 30  <= 10) && (current % 30 > 0)))
	{
		return 1;
	}
	else if (((current > (10 + 300 * loop) && current <= (20 + 300 * loop) ) && current % (10 + 300 * loop) <= 10) ||
		((current > (20 + 300 * loop) ) &&
		(current % (40 + 300 * loop) <= 10 && current % (40 + 300 * loop) > 0 && current % (80 + 300 * loop) > 10 && current % (200 + 300 * loop) > 10) ||
		(current % (70 + 300 * loop) <= 10 && current % (70 + 300 * loop) > 0 && current % (140 + 300 * loop) > 10) ||
	    (current % (100 + 300 * loop) <= 10 && current % (100 + 300 * loop) > 0 && current % (200 + 300 * loop) > 10) ||
		(current % (130 + 300 * loop) <= 10 && current % (260 + 300 * loop) > 10) || (current % (160 + 300 * loop) <= 10) ||
		(current % (190 + 300 * loop) <= 10) || (current % (220 + 300 * loop) <= 10) || (current % (250 + 300 * loop) <= 10) ||
		(current % (280 + 300 * loop) <= 10))
		    )	
	{
		return 2;
	}
	else if( ((current > (20 + 300 * loop) && current <= (30 + 300 * loop)) && current % (20 + 300 * loop) <= 10) ||
		( (current > (30 + 300 * loop) ) && (current % (50 + 300 * loop) <= 10) || (current % 300 == 0) || (current % (80 + 300 * loop) <= 10) ||
		(current % (110 + 300 * loop) <= 10) || (current % (140 + 300 * loop) <= 10) || (current % (170 + 300 * loop) <= 10) ||
		(current % (200 + 300 * loop) <= 10) || (current % (230 + 300 * loop) <= 10) || (current % (260 + 300 * loop) <= 10) ||
		(current % (290 + 300 * loop) <= 10))
		   )
	{
		return 3;
	}
}

void Addition__Substraction(unsigned int &score, unsigned int &life)
{
	int a, b, c;
	bool Add_Sub;

	a = rand() % 10;
	b = rand() % 10;
	
	Add_Sub = rand() % 2;
	
	if (Add_Sub == 0)
	{
		std::cout << a << " + " << b << " = ";
		std::cin >> c;
		
		if (a + b == c)
		{
			score++;
		}
		
		else if (a + b != c)
		{
			life--;
		}
	}
	
	else if (Add_Sub == 1)
	{
		std::cout << a << " - " << b << " = ";
		std::cin >> c;
		
		if (a - b == c)
		{
			score++;
		}
		
		else if (a - b != c)
		{
			life--;
		}
	}
}

void Multiply(unsigned int& score, unsigned int& life)
{
	int a, b, c;

	a = rand() % 10;
	b = 1 + rand() % 9;

	std::cout << a << " * " << b << " = ";
	std::cin >> c;
	
	if (a * b == c)
	{
		score++;
	}
	else if (a * b != c)
	{
		life--;
	}
}

void Division(unsigned int& score, unsigned int& life)
{
	float a, b;
	
	a = rand() % 10;
	b = 1 + rand() % 9;

	int c;

	std::cout << "Please, if your example like a / b = from 2.5 to 2.(9), write 3";
	std::cout << std::endl;
	std::cout << "If a / b = from 2.01 to 2.4(9), write 2";
	std::cout << std::endl;
	std::cout << a << " / " << b << " = ";
	std::cin >> c;
	
	if (c == round(a / b))
	{
		score++;
	}
	else if (c != round(a / b))
	{
		life--;
	}
}

void Levels(int last, unsigned int &current, unsigned int &life, unsigned int &score)
{
	for(;current <= last;current++)
	{
		if (life < 1)
		{
			cls;
			
			std::cout << "You lose :(" << std::endl;
			std::cout << "Your final score: " << score << "/" << last << ";";
			break;
		}
		
		cls;
		
		std::cout << "Current life: " << life;
		std::cout << std::endl;
		std::cout << "Current score: " << score;
		std::cout << std::endl;
		std::cout << "Current example number " << current << ": ";
		std::cout << std::endl;
		
		int choise = Action(current, loop);
		
		srand((unsigned)time(NULL));
		
		switch (choise)
		{
		case 1:
			Addition__Substraction(score, life);
			break;
		case 2:
			Multiply(score, life);
			break;
		case 3:
			Division(score, life);
			break;
		}
	}
}

int main(int argc, char* argv[])
{
	unsigned int life = 3;
	unsigned int score = 0;
	unsigned int currentLevel = 1;

	int Quantity;
A:
	std::cout << "Write quantity of examples, which you want(MIN - 30): ";
	std::cin >> Quantity;
	
	if (30 > Quantity) 
	{
		cls;
		goto A;
	}
	
	Levels(Quantity, currentLevel, life, score);
	
	if (currentLevel > Quantity)
	{
		cls;
		std::cout << "Good job!" << std::endl;
		std::cout << "Your total score: " << score << "/" << Quantity;
	}

	return 0;
}