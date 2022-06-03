#include <iostream>

/*Напишите программу, которая проверяет, является ли введенная пользователем
строка целым числом.
Пример результата выполнения программы:
Введите строку: 36.7
36.7 не является целым числом*/

bool equel(std::string& str)
{
    for(int i = 0; i<str.size(); ++i)
    {
        if(!(std::isdigit(str[i])))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    std::cout<<"Введите строку: ";
    std::string str;
    std::cin>>str;
    if(equel(str))
    {
        std::cout<<str<<" является целым числом"<<std::endl;
    }
    else
    {
        std::cout<<str<<" не является целым числом"<<std::endl;
    }
    
    return 0;
}
