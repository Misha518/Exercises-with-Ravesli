#include <iostream>

/*Дано целое число в диапазоне от 1 до 365. Определите, какой день недели
выпадает на это число, если 1 января — понедельник.*/


int main()
{
    std::cout<<"Enter day (1 - 365): ";
    int day;
    std::cin>>day;
    int answ = day - ((day / 7) * 7);

    switch (answ)
    {
        case 0 : std::cout<<"Sunday"<<std::endl; break;
        case 1 : std::cout<<"Monday"<<std::endl; break;
        case 2 : std::cout<<"Tuesday"<<std::endl; break;
        case 3 : std::cout<<"Wednesday"<<std::endl; break;
        case 4 : std::cout<<"Thursday"<<std::endl; break;
        case 5 : std::cout<<"Friday"<<std::endl; break;
        case 6 : std::cout<<"Saturday"<<std::endl; break;
    }
   
    return 0;
}
