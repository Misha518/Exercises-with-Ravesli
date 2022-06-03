#include <iostream>
#include <ctime>
/*Напишите программу проверки знания таблицы умножения. Программа должна
вывести 10 примеров и выставить оценку: за 10 правильных ответов — «отлично»,
за 8 или 9 правильных ответов — «хорошо», за 6 или 7 правильных ответов —
«удовлетворительно», остальные варианты — «плохо».*/

int main()
{
    srand( time(0) );
    int num1, num2, ch, k = 0;
    for (int i = 0; i < 10; ++i)
    {
        num1 = 0 + rand() % 10;
        num2 = 0 + rand() % 10;
        std::cout<<num1<<" * "<<num2<<" = ";
        std::cin>>ch;
        if (ch == num1*num2)
            ++k;    
    }
    if (k == 10)
    {
        std::cout<<"отлично"<<std::endl;
    }
    else if (k > 7)
    {
        std::cout<<"хорошо"<<std::endl;
    }
    else if (k > 5)
    {
        std::cout<<"удовлетворительно"<<std::endl;
    }
    else
    {
        std::cout<<"плохо"<<std::endl;
    }
   
    return 0;
}
