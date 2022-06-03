#include <iostream>

/*Напишите программу, вычисляющую скорость, с которой бегун пробежал
дистанцию.
Пример результата выполнения программы:
Введите длину дистанции (м): 1000
Введите время (минут.секунд): 3.25
Вы бежали со скоростью 17.56 км/час*/

double speed(int& l, double& t)
{
    int lenght_km = l/1000;
    double hours = ( int(t)*60 + double(int(t*100) % 100) ) / 3600;
    return lenght_km/hours;
}


int main()
{
    std::cout<<"Введите длину дистанции (м): ";
    int length;
    std::cin>>length;
    std::cout<<"Введите время (минут.секунд): ";
    double time;
    std::cin>>time;
    std::cout<<"Вы бежали со скоростью "<<speed(length,time)<<" км/час"<<std::endl;
    return 0;
}
