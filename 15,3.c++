#include <iostream>
#include <string>
#include <ctime>
/*Возьмите любое слово, например, «корова». Используя генерацию рандомных
чисел, переставьте буквы этого слова в рандомном порядке. Делайте это до тех пор,
пока полученное слово не совпадет с начальным словом. Используя массив,
укажите при перестановке букв их индексы. Программа должна корректно работать
с любым словом.*/


int main()
{
    std::cout<<"Введите слово: ";
    std::string str;
    std::cin>>str; 
    
    srand(time(0));
    int size = str.size();
    std::string str1;
    int k = 1;
    
    int i;
    std::string o = "";
    bool  m = true;
    
    while (str != str1)
    {
        str1 = "";
        while (str1.size() != size)
        {
            i = 0 + rand() % size;
            for (int j = 0; j < o.size(); ++j)
            {
                if (int(o[j] -'0') == i)
                {
                    m = false;
                    break;
                }
            }
            if (m)
            {
                o += std::to_string(i);
                str1 += str[i];
            }
            m = true;           
        }
        std::cout<<k<<": "<<o<<" "<<str1<<std::endl;
        ++k;
        o = "";
    }
    
   
    return 0;
}
