#include <iostream>

/*Каждая бактерия делится на две в течение одной минуты. В начальный момент
имеется одна бактерия. Напишите программу, которая вычисляет общее количество
бактерий после истечения указанного пользователем промежутка времени
(например, после 5 или после 17 минут).*/


int main()
{
    std::cout<<"Введите промежуток времени в минутах: ";
    int t = 0;
    std::cin>>t;
    
    unsigned int kol = 1;
    for (int i = 0; i < t; ++i)
    {
        kol *= 2;
    }
    std::cout<<"Всего бактерий стало: "<<kol<<std::endl;
   
    return 0;
}