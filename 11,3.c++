#include <iostream>
#include <string>
/*Известно, что сейф открывается при правильном вводе кода из 3-x цифр в
диапазоне от 0 до 9. Задайте код и затем откройте сейф, используя метод перебора
с помощью цикла for.
Пример результата выполнения программы:
Откроем сейф методом перебора:
код = 738, потребовалось 3026 попыток*/


int main()
{
    std::cout<<"Задайте код от сейфа из 3-x цифр в диапазоне от 0 до 9: ";
    std::string code;
    std::cin>>code;
    int k = 0;
    std::string test;
    for (int i = 0; i < 10 ;++i)
    {
        for(int j = 0; j < 10 ;++j) 
        {
            for(int l = 0; l < 10;++l)
            {
                ++k;
                test = std::to_string(i) + std::to_string(j) + std::to_string(l);
                if (test == code)
                {       
                    std::cout<<"код = "<<test<<", потребовалось "<<k<<" попыток"<<std::endl;
                    return 0;
                }
            }
        }    
    }
    
    
    return 0;
}
