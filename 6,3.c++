#include <iostream>
#include <string>
#include <list>
/*Напишите программу, которая содержит текущую информацию о десяти заявках на
авиабилеты. Каждая заявка должна иметь:
пункт назначения;
номер рейса;
ФИО пассажира;
желаемую дату вылета.
Программа должна обеспечивать:
хранение всех заявок в виде списка;
добавление и удаление заявок;
вывод всех заявок.*/

class Air_Ticket
{
private:
    struct ticket
    {
        std::string place;
        unsigned int num;
        std::string FIO;
        std::string data;
    };
    std::list<ticket> info;
    int k = 0;
public:
    Air_Ticket()
    {}
    void add(std::string place, unsigned int num, std::string FIO, std::string data)
    {
        if(k == 9 )
        {
            std::cout<<"Error"<<std::endl;      
        }
        else
        {
            ticket T{place,num,FIO,data};
            info.push_back(T);
            ++k;
        }
    }
    void del(std::string FIO)
    {
        for(auto i = info.begin(); i != info.end(); ++i)
        {
            if ((*i).FIO == FIO)
            {
                info.erase(i);
                break;
            }
        }
    }
    
    friend std::ostream& operator<<(std::ostream& out, const Air_Ticket& T);
  
};

std::ostream& operator<<(std::ostream& out, const Air_Ticket& T)
{
    for(Air_Ticket::ticket i : T.info)
    {
        out<<i.place<<" "<<i.num<<" "<<i.FIO<<" "<<i.data<<"\n";
    }
    return out;
}

int main()
{
    Air_Ticket t;
    t.add("Sochi",20,"Ivanov AA","June");
    t.add("Moscow",21,"Ivan AA","June");
    std::cout<<t;
    t.del("Ivan AA");
    std::cout<<t;
    return 0;
}
