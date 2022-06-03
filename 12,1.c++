#include <iostream>
#include <string>
/*Напишите программу, которая выводит строку, введенную пользователем, задом
наперед.
Пример результата выполнения программы:
Введите строку: London is the capital!
Результат: !latipac eht si nodnoL*/


int main()
{
    std::cout<<"Введите строку: ";
    std::string str;
    getline(std::cin,str);
    std::cout<<"Результат: ";
    for(int i = str.size()-1; i >= 0; --i)
    {
        std::cout<<str[i];
    }
    std::cout<<std::endl;
   
    return 0;
}
