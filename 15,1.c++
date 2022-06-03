#include <iostream>
#include <string>

/*Напишите программу, которая вычисляет длину введенной пользователем строки
без использования стандартной функции определения длины.*/


int main()
{
    std::string str;
    std::cin>>str;
    int k = 0;
    for (char i : str)
    {
        ++k;
    }
    std::cout<<"Длина строки: "<<k<<std::endl;
   
    return 0;
}
