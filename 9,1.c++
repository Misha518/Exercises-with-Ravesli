#include <iostream>

/*Напишите программу, которая проверяет, является ли год високосным (кратным 4) в
пределах от 2000 года до н.э. и до 2000 года нашей эры.
Пример результата выполнения программы:
Введите год и эру: 656 год 
Этот год является високосным*/


int main()
{
    std::cout<<"Введите год: ";
    int year;
    std::cin>>year;
    if (year % 4 == 0)
    {
        std::cout<<"Этот год является високосным"<<std::endl;
    }
    else
    {
        std::cout<<"Этот год является не високосным"<<std::endl;
    }
    return 0;
}
