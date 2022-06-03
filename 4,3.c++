#include <iostream>
#include <vector>
#include <algorithm> 
/*Напишите программу, которая объединяет два упорядоченных по возрастанию
массива в один (тоже упорядоченный) массив.
Пример результата выполнения программы:
Введите элементы первого массива: 1 3 5 7 9 0
Введите элементы второго массива: 2 4 6 8 10 0
Массив-результат: 1 2 3 4 5 6 7 8 9 10 0*/



int main()
{
    std::cout<<"Введите элементы первого массива: ";
    int num1;
    std::vector <int> arr1;
    while(true)
    {
        (std::cin>>num1).get();
        if(num1 == 0)
        { break; }
        arr1.push_back(num1);
    }
    
    std::cout<<"Введите элементы второго массива: ";
    std::vector <int> arr2;
    int num2;
    while(true)
    {
        (std::cin>>num2).get();
        if(num2 == 0)
        { break; }
        arr2.push_back(num2);
    }
    
    std::vector <int> arr3;
    for(int i : arr1)
    {
        arr3.push_back(i);
    }
    for(int i : arr2)
    {
        arr3.push_back(i);
    }
    std::sort(arr3.begin(), arr3.end(),[](int a,int b){return a<b;});
    for(int i : arr3)
    {
        std::cout<<i<<" ";
    }
    return 0;
}
