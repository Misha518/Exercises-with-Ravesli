#include <iostream>
#include <ctime>
#include <vector>
/*На первом курсе M = 40 студентов. Каждый из студентов в понедельник получает
оценку по программированию, во вторник — оценку по математике, в среду — по
физике в пределах от 2 до 5 каждая. Всего в году N = 35 недель, когда студенты
учатся. Лучшим считается студент, который наибольшее количество недель
продержался без троек (т.е. получал не ниже 4). Сформируйте три целочисленных
массива нужного размера. Задайте оценки с помощью генерации случайных чисел.
Найдите лучшего студента.*/

class Student
{
private:
    int index;
    int program[35];
    int math[35];
    int phys[35];
public:
    Student(int ind) : index(ind)
    {
        for (int i = 0; i < 35; ++i)
        {
            program[i] = 2 + rand() % 5;
            math[i] = 2 + rand() % 5;
            phys[i] = 2 + rand() % 5;
        }
    }
    
    int kol_no_3()
    {
        int kol = 0;
        for (int i = 0; i < 35; ++i)
        {
            if (program[i] > 3 && math[i] > 3 && phys[i] > 3)
            {
                ++kol;
            }
        }
        return kol;
    }
    
    int get_index()
    {
        return index;
    }
};


int main()
{
    srand(time(0));
    std::vector<Student> arr;
    int best_index = 0;
    int kol = 0;
    for (int i = 0; i < 40; ++i)
    {
        arr.push_back(Student(i));
    }
    for (int i = 0; i < 40; ++i)
    {
        if (arr[i].kol_no_3() > kol)
        {
            kol = arr[i].kol_no_3();
            best_index = arr[i].get_index();
        }
    }
    
    std::cout<<"Best student index: "<<best_index<<" Weeks: "<<kol<<std::endl;
   
    return 0;
}
