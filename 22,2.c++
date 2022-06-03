#include <iostream>
/*Напишите программу, которая спрашивает у пользователя, сколько чисел
Фибоначчи нужно сгенерировать, а затем генерирует их.*/

void Fibonacci(int x)
{
	unsigned long long a = 1, b = 1,c;
	if (x != 0)
	{
		
		for (int i = 0; i < x; i++)
		{
			if (i >= 2)
			{
				std::cout << a + b << " ";
				c = a;
				a = b;
				b = c + b;
			}
			else
				std::cout << 1 << " ";
		}
	}
}
 
 
int main()
{
	setlocale(0, "");
 
	int x;
 
	std::cout << "Введите сколько чисел Фибоначчи вывести на экран" << std::endl;
	std::cin >> x;
 
	Fibonacci(x);
	
	std::cout<<"\n";
	
	return 0;
}
