#include <iostream>
/*Напишите программу, которая запрашивает у пользователя число, а затем выводит
список всех делителей этого числа. Делитель — это число, на которое делится
делимое. Например, 14 — это делитель 28 , потому что 28/14 не имеет остатка.*/

int main()
{
    std::cout<<"Enter number: ";
    int a;
    std::cin>>a;
    for (int i = 1; i <= a; ++i)
    {
        if (a % i == 0)
        {
            std::cout<<i<<" ";
        }
    }
    std::cout<<"\n";
    return 0;
}
