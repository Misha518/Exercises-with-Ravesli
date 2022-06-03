#include <iostream>

/*Напишите программу, которая при вводе пользователем числа из диапазона от 1 до
99 выводит это число и добавляет к нему слово копейка в правильной форме.
Пример результата выполнения программы:
Введите число из диапазона от 1 до 99: 25
25 копеек
Введите число из диапазона от 1 до 99: 4
4 копейки*/



int main()
{
    std::cout<<"Введите число из диапазона от 1 до 99:";
    int a;
    std::cin>>a;
    if(a < 0 || a > 99)
    {
        std::cout<<"Error"<<std::endl;
        return -1;
    }
    int n = a % 10;
    switch (n)
    {
        case 0: std::cout<<a<<" копеек"<<std::endl; break;
        case 1: std::cout<<a<<" копейка"<<std::endl; break;
        case 2: std::cout<<a<<" копейки"<<std::endl; break;
        case 3: std::cout<<a<<" копейки"<<std::endl; break;
        case 4: std::cout<<a<<" копейки"<<std::endl; break;
        case 5: std::cout<<a<<" копеек"<<std::endl; break;
        case 6: std::cout<<a<<" копеек"<<std::endl; break;
        case 7: std::cout<<a<<" копеек"<<std::endl; break;
        case 8: std::cout<<a<<" копеек"<<std::endl; break;
        case 9: std::cout<<a<<" копеек"<<std::endl; break;
    }
    
    return 0;
}
