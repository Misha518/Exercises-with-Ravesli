#include <iostream>

/*Рейтинг бакалавра заочного отделения при поступлении в магистратуру
определяется средним баллом диплома, умноженным на коэффициент стажа
работы по специальности, который равен: нет стажа — 1, меньше 2 лет — 13, от 2 до
5 лет — 16. Напишите программу расчета рейтинга студента при заданном среднем
балле диплома (от 3 до 5) и выведите сообщение о приеме в магистратуру (при
проходном балле равном 45).*/


int main()
{
    std::cout<<"Средний бал диплома: ";
    double average_mark;
    std::cin>>average_mark;
    if(average_mark < 3 || average_mark > 5)
    {
        std::cout<<"Error"<<std::endl;
        return -1;
    }
    std::cout<<"Количество лет стажа: ";
    int years;
    std::cin>>years;
    double score = 0;
    if(years == 0)
    {
        score = 1 * average_mark;
    }
    else if(years < 2)
    {
        score = 13 * average_mark;
    }
    else if(years >= 2 || years < 5)
    {
        score = 16 * average_mark;
    }
    
    if(score >= 45 )
    {
        std::cout<<"Принят"<<std::endl;
    }
    else
    {
        std::cout<<"Не принят"<<std::endl;
    }
    return 0;
}
