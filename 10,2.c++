#include <iostream>

/*Напишите программу, которая определяет, является ли шестизначное число
"счастливым" (сумма первых трех цифр равна сумме последних трех цифр).*/


int main()
{
    std::cout<<"Введите шестизначное число: ";
    int num = 0;
    std::cin>>num;
    int a1 = 0, a2 = 0, a3 =0;
    int b1 = 0, b2 = 0, b3 =0;
    a1 = num / 100000;
    a2 = (num / 10000) % 10;
    a3 = (num / 1000) % 10;
    b1 = (num / 100) % 10;
    b2 = (num / 10) % 10;
    b3 = num % 10;
    
    if (a1 + a2 + a3 == b1 + b2 + b3)
    {
        std::cout<<"Число счастливое"<<std::endl;
    }
    else
    {
        std::cout<<"Число не счастливое"<<std::endl;
    }
    
    return 0;
}
