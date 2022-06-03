#include <iostream>
 
/*Напишите программу пересчета величины временного интервала, заданного в
минутах, в величину, выраженную в часах и минутах.
Пример результата выполнения программы:
Введите временной интервал (в минутах): 150
150 минут = 2 ч. 30 мин.*/


int main()
{
    std::cout<<"Введите временной интервал (в минутах): ";
    int time_min = 0;
    std::cin>>time_min;
    int time_hour = time_min / 60;
    int time_min_new = time_min - time_hour*60;
    std::cout<<time_min<<" минут = "<<time_hour<<" ч. "<<time_min_new<<" мин."<<std::endl;
    return 0;
}
