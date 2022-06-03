#include <iostream>
#include <string>
#include <algorithm>

/*Сэндвич с мороженым — это строка, образованная двумя одинаковыми концами и
разной серединой. Например:
AABBBAA
3&&3
yyyyymmmmmmmmyyyyy
hhhhhhhhmhhhhhhhh
Обратите внимание, что левый и правый концы сэндвича идентичны как по длине,
так и по повторяющимся символам. Середину составляет третий (отличный от
первых двух) набор символов.

Следующее не является сэндвичем с мороженным:
BBBBB // вы не можете иметь только мороженное (без сэндвича)
AAACCCAA // вы не можете иметь неравные по длине окончания в
сэндвиче
AACDCAA // вы не можете иметь начинку из разных символов
A // ваш сэндвич не может быть менее 3 символов

Напишите программу, которая возвращает true , если строка, введенная
пользователем, является сэндвичем с мороженым, и false — в противном случае.*/


bool sandwich(std::string& str)
{
    if(str == "" or str.size() < 3) { return false; }
    
    if(str.size() % 2 == 0)
    {
        for(int i = 0; i < str.size() / 2; ++i)
        {
            if( (str[i] != str[str.size()-i-1] ) || (str[i] != str[0] && str[i] != str[str.size() / 2] ) || ( str[str.size() / 2] == str[0] ) )
            { return false;}
        }
    }
    else
    {
        for(int i = 0; i < str.size() / 2; ++i)
        {
            if(str[i] != str[str.size()-i-1] || (str[i] != str[0] && str[i] != str[str.size() / 2] )) { return false;}
            
        }
        
        int middle_count = std::count(str.begin(), str.end(), str[str.size() / 2 ]);
        if ( (str[str.size() / 2 ] == str[0]) || (middle_count != 1 && (str[str.size() / 2 ] != str[str.size() / 2 + 1] || str[str.size() / 2 ] != str[str.size() / 2 + 1]) ) )
        { return false; }
    }
    return true; 
}

int main()
{
    std::cout<<sandwich("A ")<<std::endl;
    return 0;
}
