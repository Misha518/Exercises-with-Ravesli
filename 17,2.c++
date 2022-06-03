#include <iostream>
#include <ctime>
/*Целочисленный массив заполняется девятью рандомными элементами. Поменяйте
местами максимальный и минимальный элементы массива.*/

int main()
{
    srand( time(0) );
    int arr[9];
    for (int i = 0; i < 9; ++i)
    {
        arr[i] = 0 + rand() % 100;
        std::cout<<arr[i]<<" ";
    }
    
    int max_i, max = -1;
    int min_i, min = 101;
    
    for (int i = 0; i < 9; ++i)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            max_i = i;
        }
        if (arr[i] < min)
        {
            min = arr[i];
            min_i = i;
        }
    }
    
    int t = max;
    arr[max_i] = min;
    arr[min_i] = t;
    std::cout<<"\n";
    for (int i = 0; i < 9; ++i)
    {
        std::cout<<arr[i]<<" ";
    }
   
    return 0;
}
