#include <iostream>
#include <ctime>
/*Напишите интерактивный учебник биологии (контрольно-обучающая система). Он
должен спрашивать у пользователя в случайном порядке 5 вопросов по биологии.
Например:
Вопрос №1: "Что такое курица?"
Варианты ответа:
1) Рыба
2) Насекомое
3) Птица
4) Земноводное
5) Растение
Ваш выбор: 3
Верно! Правильный ответ — "Птица".*/

void test()
{
    srand(time(0));
    int k = 0, kol = 0;
    int n, num;
    int arr[5];
    bool repeat = true;
    while (kol < 5)
    {
        n = 1 + rand() % 5;
        for (int i = 0; i < kol; ++i)
        {
            if (arr[i] == n)
                repeat = false;
        }
        if (repeat)
        {
        switch (n)
        {
                case 1:
                    std::cout<<"Вопрос №"<<kol+1<<": \"Что такое курица?\""<<std::endl;
                    std::cout<<"Варианты ответа:"<<std::endl;
                    std::cout<<"1) Рыба\n"<<"2) Насекомое\n"<<"3) Птица\n"<<"4) Земноводное\n"<<"5) Растение\n";
                    std::cout<<"Ваш выбор: ";
                    std::cin>>num;
                    if (num == 3)
                        ++k;
                    break;
                case 2: 
                    std::cout<<"Вопрос №"<<kol+1<<": \"Что такое курица?\""<<std::endl;
                    std::cout<<"Варианты ответа:"<<std::endl;
                    std::cout<<"1) Рыба\n"<<"2) Птица\n"<<"3) Насекомое\n"<<"4) Земноводное\n"<<"5) Растение\n";
                    std::cout<<"Ваш выбор: ";
                    std::cin>>num;
                    if (num == 2)
                        ++k;
                    break;
                case 3: 
                    std::cout<<"Вопрос №"<<kol+1<<": \"Что такое курица?\""<<std::endl;
                    std::cout<<"Варианты ответа:"<<std::endl;
                    std::cout<<"1) Птица\n"<<"2) Рыба\n"<<"3) Насекомое\n"<<"4) Земноводное\n"<<"5) Растение\n";
                    std::cout<<"Ваш выбор: ";
                    std::cin>>num;
                    if (num == 1)
                        ++k;
                    break;
                case 4: 
                    std::cout<<"Вопрос №"<<kol+1<<": \"Что такое курица?\""<<std::endl;
                    std::cout<<"Варианты ответа:"<<std::endl;
                    std::cout<<"1) Земноводное\n"<<"2) Рыба\n"<<"3) Насекомое\n"<<"4) Птица\n"<<"5) Растение\n";
                    std::cout<<"Ваш выбор: ";
                    std::cin>>num;
                    if (num == 4)
                        ++k;
                    break;
                case 5: 
                    std::cout<<"Вопрос №"<<kol+1<<": \"Что такое курица?\""<<std::endl;
                    std::cout<<"Варианты ответа:"<<std::endl;
                    std::cout<<"1) Земноводное\n"<<"2) Рыба\n"<<"3) Насекомое\n"<<"4) Растение\n"<<"5) Птица\n";
                    std::cout<<"Ваш выбор: ";
                    std::cin>>num;
                    if (num == 5)
                        ++k;
                    break;
            }
            arr[kol] = n;
            ++kol;
        }
        repeat = true;
    }
    if (k < 3)
    {
        std::cout<<"Оценка 2"<<std::endl;
    }
    else if (k == 3)
    {
        std::cout<<"Оценка 3"<<std::endl;
    }
    else if (k == 4)
    {
        std::cout<<"Оценка 4"<<std::endl;
    }
    else
    {
        std::cout<<"Оценка 5"<<std::endl;
    }
    
}

int main()
{
    test();
   
    return 0;
}
