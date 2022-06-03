#include <iostream>

/*Напишите функцию int f(int h, int m, int s) , которая принимает три
целых аргумента (часы h , минуты m и секунды s ) и возвращает количество секунд,
прошедших с начала дня.*/

int f(int h, int m, int s)
{
    return h*60*60 + m*60 + s;
}


int main()
{
    std::cout<<"Введите часы, минуты, секунды: ";
    int h = 0, m = 0, s = 0;
    std::cin>>h>>m>>s;
    if ((h < 0 || h > 24) || (m > 60 || m < 0) || (s > 60 || s < 0))
    {
        std::cout<<"Error"<<std::endl;
        return -1;
    }
    std::cout<<f(h,m,s)<<std::endl;
   
    return 0;
}
