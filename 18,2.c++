#include <iostream>
#include <vector>
#include <algorithm>
/*В заданном пользователем целочисленном массиве удалите элементы, которые
встречаются более 2 раз.*/

int main()
{
    std::vector<int> arr;
    std::cout<<"Enter numbers: "<<std::endl;
    int n;
    while (true)
    {
        std::cin>>n;
        if (n == 0)
            break;
        arr.push_back(n);
    }
    for (int i = 0; i < arr.size(); ++i)
    {
        std::cout<<arr[i]<<" ";
    }
    std::cout<<"\n";
    
    auto it = std::unique(arr.begin(), arr.end());
    arr.erase(it, arr.end());
    for (int i = 0; i < arr.size(); ++i)
    {
        std::cout<<arr[i]<<" ";
    }
    std::cout<<"\n";
   
    return 0;
}
