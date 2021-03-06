#include <iostream>

/*Напишите программу вычисления стоимости поездки на автомобиле на дачу (туда и
обратно). Исходными данными являются:
-расстояние до дачи (в км);
-литраж бензина, который потребляет автомобиль на 100 км пробега;
-цена одного литра бензина.
Пример результата выполнения программы:
Расстояние до дачи (км): 67
Расход бензина (литров на 100 км пробега): 8.5
Цена литра бензина (руб.): 50
Поездка на дачу и обратно обойдется в 284.75 руб.*/

double price(int& distance, double& exprense, int& price)
{
    return 2*distance * exprense * price / 100;
}


int main()
{
    std::cout<<"Расстояние до дачи: "<<std::endl;
    int d;
    std::cin>>d;
    std::cout<<"Расход бензина (литров на 100 км пробега): "<<std::endl;
    double e;
    std::cin>>e;
    std::cout<<"Цена одного литра бензина: "<<std::endl;
    int p;
    std::cin>>p;
    std::cout<<"Поездка на дачу и обратно обойдется в "<<price(d,e,p)<<std::endl;
    return 0;
}
