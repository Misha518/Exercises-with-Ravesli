#include <iostream>
#include <unistd.h>
#include <string>
/*Напишите программу, которая выводит на экран сообщение в "телеграфном" стиле:
буквы сообщения должны появляться по одной с некоторой задержкой.*/


int main()
{
    std::cout<<"Введите сообщение: ";
    std::string str;
    std::cin>>str;
    for(int i = 0; i < str.size(); ++i)
    {
        
        std::cout<<str[i];
        sleep(2);
        
    }
    std::cout<<std::endl;
    return 0;
}
