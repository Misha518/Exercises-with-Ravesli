#include <iostream>
#include <limits>

/*Напишите программу, которая определяет минимальное число в
последовательности положительных чисел, которую ввел пользователь. Если в
последовательности есть отрицательные числа, то вы должны сообщить об этом
пользователю и предложить повторить ввод еще раз.*/

void min()
{
    int min = std::numeric_limits<int>::max();
    int n;
    std::cout<<"Enter 0 if finished"<<std::endl;
    while(true)
    {
        std::cin>>n;
        if(n < 0)
        {
            std::cout<<"Enter positive number"<<std::endl;
            continue;
        }
        
        if(n == 0) { break; }
        else
        {
            if(n < min) { min = n; }
        }
        
    }
    std::cout<<"min = "<<min<<std::endl;
}

int main()
{
    min();
    return 0;
}
