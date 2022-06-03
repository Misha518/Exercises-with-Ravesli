#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm> 
/*Напишите программу учета оценок студентов. Для этого создайте текстовый файл с
именем input_data.txt , содержащий список из 10 студентов и их оценки по
трем предметам: математика, физика и информатика.
Содержимое файла:
в первой строке находится общее количество студентов;
в каждой последующей строке находится ФИО студента и три целых числа
(оценки);
данные в строке разделены пробелами, а оценки варьируются в диапазоне от
1 до 5.
Затем создайте класс, с помощью которого вы будете считывать данные из файла.
На экран выведите ФИО студентов с оценками в порядке убывания их среднего
балла.*/

using std::ifstream;

class File
{
private:
    ifstream fin;
    int kol = 0;
    const int mark = 3;
    std::vector<std::string> text;
public:
    File(std::string str)
    {
        fin.open(str);
        std::string s;
        getline(fin, s);
        kol = std::stoi(s);
        for(int i = 0; i < kol; ++i)
        {
            getline(fin, s);
            text.push_back(s);
        }
        fin.close();
        
    }
    friend std::ostream& operator<<(std::ostream& out, File& t);
};

std::ostream& operator<<(std::ostream& out, File& t)
{
    sort(t.text.begin(),t.text.end(),[](std::string& a, std::string& b)
    {
        double sum1 = 0;
        double sum2 = 0;
        for(int i = 0; i < a.size(); ++i)
        {
            if(std::isdigit(a[i]))
            {
                sum1 += (int)a[i] - 48;
            }
        }
        for(int i = 0; i < b.size(); ++i)
        {
            if(std::isdigit(b[i]))
            {
                sum2 += (int)b[i] - 48;
            }
        }
        return (sum1/3) > (sum2/3);
    });
    for(auto i : t.text)
    {
        out<<i<<"\n";
    }
    return out;
}

int main()
{
    File t("input_data.txt");
    std::cout<<t;
    
    return 0;
}
