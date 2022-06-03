#include <iostream>
 
/*Напишите программу, которая выводит на экран таблицу стоимости, например,
яблок в диапазоне от 100 г до 1 кг с шагом 100 г.*/


int main()
{
    std::cout<<"Введите цену 1 кг яблок: ";
    double price = 0;
    std::cin>>price;
    double price_one_hundread = price / 10;
    std::cout<<"Вес"<<" "<<"Стоимость"<<std::endl;
    std::cout<<"(г)"<<" "<<"(руб.)"<<std::endl;
    std::cout << std::fixed;
    std::cout.precision(2);
    for(int i = 100; i <= 1000; i += 100)
    {
        std::cout<<i<<" "<<price_one_hundread * (i/100)<<std::endl;
    }
    return 0;
}
