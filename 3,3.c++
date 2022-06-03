#include <iostream>
#include <map>
#include <string>

/*Напишите программу-телеграф, которая принимает от пользователя сообщение и
выводит его на экран в виде последовательности точек и тире. Вывод точек и тире
можно сопровождать звуковым сигналом соответствующей длительности.
Азбука Морзе для букв русского алфавита*/


int main()
{
    setlocale(LC_ALL, "Russian");
    std::map <char,std::string> MorzeMap = 
    {{'А',".-"},{'Б',"-..."},{'В',".--"},{'Г',".--"},
    {'Д',"-.."},{'Е',"."},{'Ж',"...-"},{'З',"--.."},{'И',".."},
    {'Й',".---"},{'К',"-.-"},{'Л',".-.."},{'М',"--"},{'Н',"-."},
    {'О',"---"},{'П',".--."},{'Р',".-."},{'С',"..."},{'Т',"-"},
    {'У',"..-"}, {'Ф',"..-."},{'Х',"...."},{'Ц',"-.-."},{'Ч',"---."},
    {'Ш',"----"},{'Щ',"--.-"},{'Ъ',".--.-."},{'Ы',"-.--"},
    {'Ь',"-..-"},{'Э',"..-.."},{'Ю',"..--"},{'Я',".-.-"}};
    
    std::cout<<"Enter text: "<<std::endl;
    std::string str;
    std::cin>>str;
 
    for(char i : str)
    {
        auto it = MorzeMap.find(i);
        std::cout<<i<<" ";
    }
    return 0;
}
