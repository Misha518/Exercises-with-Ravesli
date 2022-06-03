#include <iostream>

/*Напишите программу, которая проверяет, находится ли введенное с клавиатуры
число в массиве. Массив предварительно вводит пользователь в начале
выполнения программы.*/


int main()
{
    std::cout<<"Введите размер массива: ";
    int size;
    std::cin>>size;
    int arr[size] {0};
    std::cout<<"Введите элементы массива: "<<std::endl;
    for (int i = 0; i < size; ++i)
    {
        std::cin>>arr[i];
    }
    std::cout<<"Введите число: ";
    int num;
    std::cin>>num;
    for (int i = 0; i < size; ++i)
    {
        if (num == arr[i])
        {
            std::cout<<"Число есть в массиве"<<std::endl;
            return 0;
        }
    }
    std::cout<<"Числа нет в массиве"<<std::endl;
    return 0;
}
