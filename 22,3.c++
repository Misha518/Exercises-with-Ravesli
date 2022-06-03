#include <iostream>
#include <ctime>
/*Игра "Быки и коровы". Правила:
программа генерирует случайным образом 4-значное число;
пользователю предлагают угадать сгенерированное программой число;
за каждую угаданную пользователем цифру, стоящую на правильной
позиции, он получает "корову";
за каждую угаданную пользователем цифру, стоящую на неправильной
позиции, он получает "быка";
после каждого предположения пользователю должно выводиться количество
"коров" и "быков", которые он заработал;
игра окончена тогда, когда пользователь угадал все цифры.
Например, компьютер загадал число 9978 :
Добро пожаловать в игру «Быки и коровы»!
Введите число:
9965
2 коровы, 0 быков
9989
2 коровы, 1 бык
...*/

bool Game_end=false;
 
void GameNumberRand(int x[])
{
	for (int i = 0; i < 4; i++)
	{
		x[i] = 1 + rand() % 10;
	}
}
 
void GameLogick(int player_number,int game_number[])
{
 
	int cow=0, bull=0,arr_of_player_number[4];
 
	arr_of_player_number[0] = player_number * 0.001;
	arr_of_player_number[1] = player_number % 1000 *0.01;
	arr_of_player_number[2] = player_number % 100 * 0.1;
	arr_of_player_number[3] = player_number % 10;
 
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
 
			if (arr_of_player_number[j] == game_number[i])
			{
				bull++;
				break;
			}
		}
	}
 
	for (int i = 0; i < 4; i++)
	{
		if (arr_of_player_number[i] == game_number[i])
		{
			cow++;
			bull--;
		}
	}
 
	std::cout  <<"У вас " << bull << " Быков и " << cow << "Коров\n";
 
 
	if (cow==4)
	{
		Game_end = true;
	}
 
}
 
int main()
{
	srand(time(0));
	setlocale(0, "");
 
	
	int game_number[4], player_number;
	GameNumberRand(game_number);
	while (true)
	{
		system("cls");
 
		std::cout << "Вас приветствует игра \"Быки и Коровы\"\n"
			<< "Ваша задача угадать 4-х значное число загаданное компьютером\n"
			<< "За каждую правильную цифру не на своем месте вы получаете Быка\n"
			<< "За каждую правильную цифру на своем месте вы получаете Корову \n"
			<< "Ваша задача получить четыре коровы!\n\n"
			<< "Компьютер загадал число! Можете начинать угадывать\n";
 
 
		while (true)
		{
			if (Game_end)
				break;
 
			std::cin >> player_number;
			GameLogick(player_number, game_number);
 
		}
 
		char next_game;
		std::cout << "Поздравляю вы победили! Желаете сыграть еще раз? (Y/N):";
		std::cin >> next_game; 
 
		if (next_game == 'Y' || next_game == 'y') { Game_end = false; }
		  else
			break;
 
	}
 
	return 0;
}
