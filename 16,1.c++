#include <iostream>

/*Напишите программу, которая выводит на экран наименьший элемент введенного
пользователем массива целых чисел. Для доступа к элементам массива используйте
указатель.*/

int main()
{
    int size = 5;
    std::cout<<"Enter numbers: "<<std::endl;
    int arr[size];
    int n = 0;
    int *ptr = arr;
    for (int i = 0; i < size; ++i)
    {
        std::cin>>n;
        *(ptr+i) = n;
    }
    
    int *min = arr;   
    
    for (int i = 1; i < size; ++i)
    {
        if (*min > *(ptr + i))
            min = (ptr + i);
    }
    
    std::cout<<"Min = "<<*min<<std::endl;
   
    return 0;
}
