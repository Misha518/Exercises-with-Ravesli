#include <iostream>
#include <ctime>
/*Напишите программу, реализующую игру "Угадай число". Компьютер загадывает
число от 0 до 999 (используйте генерацию случайных чисел), а пользователь
угадывает его. На каждом шаге угадывающий делает предположение, а
задумавший число — сообщает, сколько цифр из числа угаданы и сколько из
угаданных цифр занимают правильные позиции в числе. Например, если задумано
число 725 и выдвинуто предположение, что задумано число 523 , то угаданы две
цифры ( 5 и 2 ), и одна из них занимает верную позицию.*/

void game()
{
    std::cout<<"Компьютер загадал трехзначное число. Вы должны его отгадать.\nПосле очередного числа вам будет сообщено,\nсколько цифр угадано и сколько из них находится на своих местах."<<std::endl;
    srand( time( 0 ) ); 
    int answer = 0 + rand() % 999;
    int one = 0, two = 0, three = 0;
    if(answer > 99)
    {
        one = answer/100;
        two = answer/10%10;
        three = answer%10;
    }
    else if(answer > 9)
    {
        one = answer/10;
        two = answer%10;
        three = -1;
    }
    else
    {
        one = answer;
        two = -1;
        three = -1;
    }
    int n = 0;
    int one1 = 0, two1 = 0, three1 = 0;
    int k, p;
    while (true)
    {
        std::cout<<"Ваш вариант: ";
        std::cin>>n;
        k = 0;
        p = 0;
        if(answer > 99)
        {
            one1 = n/100;
            two1 = n/10%10;
            three1 = n%10;
            if (one == one1 && two == two1 && three == three1)
            {
                std::cout<<"***Вы угадали число 658!***"<<std::endl;
                break;
            }
            else
            {
                if(one1 == one or one1 == two or one1 == three) { ++k; }
                if(two1 == one or two1 == two or two1 == three) { ++k; }
                if(three1 == one or three1 == two or three1 == three) { ++k; }
                if(one1 == one ) { ++p; }
                if(two1 == two ) { ++p; }
                if(three1 == three) { ++p; }
                std::cout<<"Верно числел: "<<k<<" Позиций верно: "<<p<<std::endl;
            }
        }
        else if(answer > 9)
        {
            one1 = n/10;
            two1 = n%10;
            three1 = -1;
            if (one == one1 && two == two1 )
                {
                std::cout<<"***Вы угадали число 658!***"<<std::endl;
                break;
                }
            else
                {
                if(one1 == one or one1 == two ) { ++k; }
                if(two1 == one or two1 == two ) { ++k; }                
                if(one1 == one ) { ++p; }
                if(two1 == two ) { ++p; }
                std::cout<<"Верно числел: "<<k<<" Позиций верно: "<<p<<std::endl;
                }
        }
        else
        {
            one1 = n;
            two1 = -1;
            three1 = -1;
            if (one == one1 )
                {
                std::cout<<"***Вы угадали число 658!***"<<std::endl;
                break;
                }
            else
                {
                if(one1 == one ) { ++k; ++p; }                 
                std::cout<<"Верно числел: "<<k<<" Позиций верно: "<<p<<std::endl;
                }
        }
    }
}


int main()
{
    game();
    return 0;
}
