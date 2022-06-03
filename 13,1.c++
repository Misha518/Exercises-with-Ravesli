#include <iostream>

/*Выведите на экран все четные числа кратные пяти в интервале от 2 до 100
(включительно).*/


int main()
{
    for(int i = 2; i <= 100; ++i)
    {
        if (i % 2 == 0)
        {
            std::cout<<i<<" ";
        }
    }
    std::cout<<std::endl;
    return 0;
}
