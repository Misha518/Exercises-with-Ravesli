#include <iostream>

/*Напишите программу, которая запрашивает у пользователя номер месяца и затем
выводит соответствующее название времени года. В случае, если пользователь
введет недопустимое число, программа должна вывести сообщение об ошибке.
Пример результата выполнения программы:
Введите номер месяца (число от 1 до 12): 12
Зима*/


void month()
{
    std::cout<<"Enter number"<<std::endl;
    int a;
    std::cin>>a;
    switch (a)
    {
        case 1: std::cout<<"Winter"<<std::endl; break;
        case 2: std::cout<<"Winter"<<std::endl; break;
        case 3: std::cout<<"Spring"<<std::endl; break;
        case 4: std::cout<<"Spring"<<std::endl; break;
        case 5: std::cout<<"Spring"<<std::endl; break;
        case 6: std::cout<<"Summer"<<std::endl; break;
        case 7: std::cout<<"Summer"<<std::endl; break;
        case 8: std::cout<<"Summer"<<std::endl; break;
        case 9: std::cout<<"Autumn"<<std::endl; break;
        case 10: std::cout<<"Autumn"<<std::endl; break;
        case 11: std::cout<<"Autumn"<<std::endl; break;
        case 12: std::cout<<"Winter"<<std::endl; break;
    }
}

int main()
{
    month();
    return 0;
}
