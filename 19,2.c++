#include <iostream>
#include <ctime>
/*Пользователь вводит целое число N . Создайте массив из N целых чисел (числа
генерируются рандомно). Определите индекс наибольшего элемента массива.*/

int main()
{
    srand( time(0) );
    std::cout<<"Enter number: ";
    int num = 0;
    std::cin>>num;
    int arr[num];
    for (int i = 0; i < num; ++i)
    {
        arr[i] = rand();
    }
    
    int max = 0, ind;
    for (int i = 0; i < num; ++i)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            ind = i;
        }
    }
    std::cout<<"index max num: "<<ind<<" max:"<<max<<std::endl;
    return 0;
}
