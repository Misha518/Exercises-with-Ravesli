#include <iostream>
#include <vector>
#include <ctime>
/*Сыграйте с компьютером в игру, используя следующие 5 вариантов наборов чисел:
Набор №1: 6, 7, 8
Набор №2: 7, 8, 9
Набор №3: 6, 9, 10
Набор №4: 6, 9, 8
Набор №5: 7, 6, 10
Введите с клавиатуры свой вариант набора чисел (из вышеприведенных) и сравните
с набором чисел компьютера, который выбирается случайным образом из 5
вышеприведенных наборов. Если сумма цифр вашего набора чисел больше суммы
цифр набора чисел компьютера, то вы выиграли (и наоборот). В случае одинаковых
сумм цифр — ничья.*/

struct set
{
    int x;
    int y;
    int z;
};

int sum(set& A)
{
    return A.x + A.y + A.z;
}

void enter(std::vector<set> &sets)
{
    set a1{6,7,8};
    set a2{7,8,9};
    set a3{6,9,10};
    set a4{6,9,8};
    set a5{6,7,8};
    sets.push_back(a1);
    sets.push_back(a2);
    sets.push_back(a3);
    sets.push_back(a4);
    sets.push_back(a5);       
}

int main()
{
    std::vector<set> sets;
    std::cout<<"Введите 3 числа: "<<std::endl;
    int a, b, c;
    std::cin>>a>>b>>c;
    set Player{a,b,c};
    enter(sets);
    
    srand(time(0));
    if (sum(Player) > sum(sets[0 + rand() % 4]))
    {
        std::cout<<"Вы выйграли"<<std::endl;
    }
    else
    {
        std::cout<<"Вы проиграли"<<std::endl;
    }
    
    return 0;
}
