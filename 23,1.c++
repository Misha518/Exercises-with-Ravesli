#include <iostream>
#include <string>
/*Напишите программу, которая запрашивает у пользователя строку, содержащую
несколько слов. Затем выведите пользователю ту же строку, но в обратном порядке.
Например:
Введите строку:
Меня зовут Анатолий!
Результат:
!Анатолий зовут Меня*/

int main()
{
    std::cout<<"Введите строку:\n";
    std::string str, str1 = "", str2 = "";
    getline(std::cin,str);
    int k = 0;
    str += " ";
    for (int i = 0; i < str.size() ; ++i)
    {
        if (str[i] == ' ')
        {
            str2 = str1 + " " + str2;
            str1 = "";
        }
        else
        {
            str1 += str[i];
        }
        
    }
    std::cout<<str2<<std::endl;
    return 0;
}
