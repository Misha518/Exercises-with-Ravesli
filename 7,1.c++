#include <iostream>
#include <ctime>
#include <unistd.h>
/*Напишите программу, которая выводит на экран работающие "электронные часы",
которые работают в течение, например, трех минут или до тех пор, пока
пользователь не нажмет любую клавишу.*/



int main()
{
    time_t t = time(0);
    struct tm* watch;
    for(int i = 0; i < 360; ++i)
    {
        
        time(&t);
        watch = localtime(&t);
        std::cout<<watch->tm_hour<<":"<<watch->tm_min<<":"<<watch->tm_sec<<std::endl; 
        sleep(1);
    }
    
    return 0;
}
