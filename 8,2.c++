#include <iostream>
#include <string>
/*Пользователь вводит натуральное четырехзначное число. Выясните, является ли
оно палиндромом (читается одинаково как слева направо, так и справа налево).
Пример результата выполнения программы:
Введите число: 4884
4884 является палиндромом*/


void palindrom(int& num)
{
    std::string str = std::to_string(num);
    bool answer = true;
    for(int i = 0; i < str.size(); ++i)
    {
        if(str[i] != str[str.size()-i-1])
        {
            answer = false;
            break;
        }
    }
    if(answer)
    {
        std::cout<<num<<" является палиндромом"<<std::endl;
    }
    else
    {
        std::cout<<num<<" не является палиндромом"<<std::endl;
    }
}


int main()
{
    std::cout<<"Введите число: ";
    int num;
    std::cin>>num;
    palindrom(num);
    
    return 0;
}
