#include <iostream>
#include <vector>
/*Напишите программу, которая принимает следующий массив чисел:
a = [1, 6, 9, 18, 27, 36, 51, 68, 82, 101]
И создает новый массив, в котором есть только четные элементы
вышеприведенного массива.*/

int main()
{
    int a[10] = {1, 6, 9, 18, 27, 36, 51, 68, 82, 101};
    std::vector<int> arr;
    for (int i = 0; i < 10; ++i)
    {
        if (a[i] % 2 == 0)
            arr.push_back(a[i]);
    }
    for (auto i : arr)
    {
        std::cout<<i<<" ";
    }
    std::cout<<"\n";
    return 0;
}
