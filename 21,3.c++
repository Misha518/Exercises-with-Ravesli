#include <iostream>
#include <ctime>
#include <string>
/*Напишите генератор паролей. Составьте три уровня сложности генерации паролей
(включая их длину) и спрашивайте у пользователя, какой уровень сложности ему
нужен. Проявите свою изобретательность: надежные пароли должны состоять из
сочетания строчных букв, прописных букв, цифр и символов. Пароли должны
генерироваться случайным образом каждый раз, когда пользователь запрашивает
новый пароль.*/
 
int main() 
{
    std::srand(std::time(nullptr));
    int diff{0};
    while(diff < 1 || diff > 3) 
    {
        std::cout << "Enter 1-3 level difficulty: ";
        std::cin >> diff;
        if(std::cin.fail()) 
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "Error! Invalid input! Repeat input!\n";
        }
    }
    int len = diff == 1 ? 8 : diff == 2 ? 16 : 24;
    std::string res;
    char ch = '!';
    int num{0};
    for(int i{0}; i < len; ++i) 
    {
        num = std::rand() % 93;
        res += (ch + num);
    }
    std::cout << "\nPassword: " << res<<std::endl;
    return 0;
}
