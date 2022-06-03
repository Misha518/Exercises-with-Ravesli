#include <iostream>
#include <ctime>
#include <vector>
#include <algorithm>
/*Напишите программу, которая создает два массива и заполняет их случайными
числами. Затем она должна возвратить третий массив, который содержит только
общие для обоих массивов значения (без дублирований).*/

int main()
{
    srand ( time(0) );
    std::vector<int> arr1, arr2, arr3;
    for (int i = 0; i < 10; ++i)
    {
        arr1.push_back(0 + rand() % 10);
        arr2.push_back(0 + rand() % 10);
    }
    std::sort(arr1.begin(),arr1.end());
    std::sort(arr2.begin(),arr2.end());
    for (int i = 0; i < arr1.size() - 1;)
    {
        if (arr1[i] == arr1[i+1])
        {
            arr1.erase(arr1.begin() + (i+1));
        }
        else
        {
            ++i;
        }
    }
    for (int i = 0; i < arr2.size() - 1;)
    {
        if (arr2[i] == arr2[i+1])
        {
            arr2.erase(arr2.begin() + (i+1));
        }
        else
        {
            ++i;
        }
    }
    for (int i = 0; i < arr1.size(); ++i)
    {
        arr3.push_back(arr1[i]);
    }
    for (int i = 0; i < arr2.size(); ++i)
    {
        arr3.push_back(arr2[i]);
    }
    std::sort(arr3.begin(),arr3.end());
    for (int i = 0; i < arr3.size() - 1;)
    {
        if (arr3[i] == arr3[i+1])
        {
            arr3.erase(arr3.begin() + (i+1));
        }
        else
        {
            ++i;
        }
    }
    for (int i = 0; i < arr3.size(); ++i)
    {
        std::cout<<arr3[i]<<" ";
    }
    std::cout<<"\n";
    return 0;
}
