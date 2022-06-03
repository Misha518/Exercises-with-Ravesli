#include <iostream>
#include <unistd.h>
/*Напишите программу-таймер, которая по истечении заданного промежутка
времени (который вводит пользователь) выдает звуковой сигнал.*/


int main()
{
    std::cout<<"Введите время ожидания в секундах: ";
    int time = 0;
    std::cin>>time;
    sleep(time);
    std::cout<<"/a"<<std::endl;
    return 0;
}
