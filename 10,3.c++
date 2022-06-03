#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
/*Создайте структуру с именем STUDENT , содержащую следующие поля:
Name — фамилия и инициалы;
Year — курс;
Rating — успеваемость (массив из пяти элементов).
Напишите программу, выполняющую:
ввод с клавиатуры данных в массив STUD , состоящий из 10 структур типа
STUDENT . Записи должны быть упорядочены по алфавиту;
вывод на экран записей упорядоченного списка студентов, средний бал
которых превышает общий средний бал;
если таких студентов нет — выведите соответствующее сообщение.*/

struct STUDENT
{
    std::string name;
    int year;
    double rating;
};


int main()
{
    std::vector <STUDENT> arr;
    for (int i = 0; i < 6; ++i)
    {
        std::cout<<"Введите фамилию, курс, успеваемость: "<<std::endl;
        std::string name;
        int year;
        double rating;
        std::cin>>name;
        std::cin>>year;
        std::cin>>rating;
        STUDENT st {name, year, rating};
        arr.push_back(st);
    }
    std::cout<<std::endl;
    
    sort(arr.begin(),arr.end(),[](STUDENT a, STUDENT b)
    {
        return a.name < b.name;
    });
    
    double sum = 0;
    for (auto i : arr)
    {
        sum += i.rating;
    }
    double avg = sum / arr.size();
    
    for (auto i : arr)
    {
        if (i.rating > avg)
        {
            std::cout<<i.name<<" "<<i.year<<" "<<i.rating<<std::endl;
        }
    }
    return 0;
}
