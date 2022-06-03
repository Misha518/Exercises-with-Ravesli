#include <iostream>

/*Напишите программу, которая вычисляет среднее арифметическое вводимой
пользователем последовательности дробных чисел.
Пример результата выполнения программы:
Введите последовательность дробных чисел: 5.4 7.8 3.0 1.5 2.3
Среднее арифметическое введенной последовательности: 4.0*/


int main()
{
    std::cout<<"Введите последовательность дробных чисел: "<<std::endl;
    double num;
    double sum = 0;
    int k = 0;
    while (true)
    {
        std::cin>>num;
        if (num <= 0)
        {
            break;
        }
        
        sum += num;
        ++k;
        
        
    }
    std::cout<<"Среднее арифметическое введенной последовательности: "<<sum / k<<std::endl;
    
    
    return 0;
}
