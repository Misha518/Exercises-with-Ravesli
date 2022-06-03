#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <functional>
#include <math.h>

/*опробуйте программно смоделировать разговор людей. Всего есть 5 людей.
Каждый человек имеет имя (строку) и возраст (число). Возраст каждого человека
генерируется случайным образом из диапазона от 20 до 40, а имена выбираются из
следующего списка: Александр , Андрей , Анастасия , Ирина , Наталья , Павел ,
Роман , Светлана , Сергей , Татьяна .
Любой человек способен выполнять два действия:
здороваться с другим человеком;
рассказывать о себе.
Люди делятся на 3 типа (разные классы):
Тип №1: Формалисты. Здороваются со всеми следующим образом:
Здравствуйте, <имя>! , где <имя> — это имя человека, с которым он
здоровается.
Тип №2: Неформалы. Со всеми здороваются: Привет, <имя>! .
Тип №3: Реалисты. Если возраст собеседника меньше/равен или собеседник
старше не более, чем на 5 лет, то здороваются следующим образом:
Привет, <имя>! , в противном случае — Здравствуйте, <имя>! .

В программной реализации приветствие должно быть реализовано как
полиморфный метод, принимающий человека в качестве параметра и
возвращающий строку.
Рассказ о человеке является строкой формата "Меня зовут Александр, мой
возраст 21 лет и я неформал" (вместо Александр используется имя любого
другого человека из вышеприведенного списка, вместо 21 возраст этого человека,
вместо неформал может быть формалист , либо реалист ). Как видите у людей с
грамматикой не всё в порядке, и они говорят лет после любого числа — непорядок,
это нужно обязательно исправить.
Программа должна показать информацию обо всех людях. Затем все люди должны
поздороваться друг с другом в следующем порядке: первый здоровается со вторым,
затем второй с первым, а затем первый с третьим, третий с первым и т.д. Например:
Александр: Привет, Роман!
Роман: Здравствуйте, Александр!
Александр: Привет, Ирина!
Ирина: Привет, Александр!*/
 
int getRandomNumber(int min = 20, int max = 40) //возврат случайного значения
{
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}
 
std::string getRandomName() //выбор имени
{
	switch (getRandomNumber(1, 10))
	{
	case 1:		return "Александр"; break;
	case 2:		return "Андрей"; break;
	case 3:		return "Анастасия"; break;
	case 4:		return "Ирина"; break;
	case 5:		return "Наталья"; break;
	case 6:		return "Павел"; break;
	case 7:		return "Роман"; break;
	case 8:		return "Светлана"; break;
	case 9:		return "Сергей"; break;
	case 10:	return "Татьяна"; break;
	}
}
 
const char* age(int k) //проверка грамматики на года
{
	if (k % 10 == 1)
		return " год";
	else if (k % 10 >= 2 && k % 10 <= 4)
		return " года";
	else
		return " лет";
}
 
class Human	//родительский класс
{
protected:
	std::string m_name;	//имя
	int m_age; //возраст
 
public:
	Human()
	{
		m_name = getRandomName(); //случайное имя
		m_age = getRandomNumber(); //случайный возраст
	}
 
	virtual std::ostream& print(std::ostream& out) = 0; //чистая функция рассказа о себе
 
	friend std::ostream& operator<<(std::ostream& out, Human& h) //оператор вывода
	{
		return h.print(out);
	}
 
	virtual ~Human() {} //деструктор
 
	std::string getName() { return m_name; } //возвращает имя
 
	int getAge() { return m_age; } //возвращает возраст
 
	virtual const char* speak1(int k = 0, int i = 0) = 0; //чистая функция приветствия, значения будут использованы только в классе Real(реалист)
 
};
 
class Formal : public Human
{
public:
	Formal() : Human()
	{
	}
 
	virtual std::ostream& print(std::ostream& out) override //перегруженная функция приветствия
	{
		out << "Меня зовут " << getName() << ", мой возраст " << getAge() << age(getAge()) << " и я формалист" << ".\n"; //тут проверяется грамматика функции age()
		return out;
	}
 
	virtual const char* speak1(int k = 0, int i = 0) { return "Здравствуй, "; } //приветствие
};
 
class Nefor : public Human
{
public:
	Nefor() : Human()
	{
	}
 
	virtual std::ostream& print(std::ostream& out) override //перегруженная функция приветствия
	{
		out << "Меня зовут " << getName() << ", мой возраст " << getAge() << age(getAge()) << " и я неформал" << ".\n"; //тут проверяется грамматика функции age()
		return out;
	}
 
	virtual const char* speak1(int k = 0, int i = 0) { return "Привет, "; } //приветствие
};
 
class Real : public Human
{
public:
	Real() : Human()
	{
	}
 
	virtual std::ostream& print(std::ostream& out) override //перегруженная функция приветствия
	{
		out << "Меня зовут " << getName() << ", мой возраст " << getAge() << age(getAge()) << " и я реалист" << ".\n"; //тут проверяется грамматика функции age()
		return out;
	}
 
	virtual const char* speak1(int k, int i) //приветствие, значения нужны именно тут
	{ 
		if (abs(k - i) <= 5) //проверяем разницу в возрасте
			return "Привет, "; //если в пределах 5 лет
		else
			return "Здравствуй, ";
	}
};
 
Human* randHuman(std::vector<std::reference_wrapper<Human>>& v) //создание случайного человека
{
	switch (getRandomNumber(1, 3))
	{
	case 1: return new Formal(); break;
	case 2: return new Nefor(); break;
	case 3: return new Real(); break;
	}
}
 
void dialog(std::vector<std::reference_wrapper<Human>>& v) //сам диалог
{
	for (int iii(0); iii < 5; ++iii) //создаем 5 случайных людей
	{
		Human *a = randHuman(v);
		v.push_back(*a);
	}
	for (int kkk(0); kkk < v.size(); ++kkk) //рассказ о человеке
		std::cout << v[kkk];
 
	for (int kkk(0); kkk < v.size(); ++kkk) //порядок приветствия
	{
		for (int iii(kkk + 1); iii < v.size(); ++iii)
		{
			std::cout << v[kkk].get().getName() << ": " << v[kkk].get().speak1(v[kkk].get().getAge(), v[iii].get().getAge()) << v[iii].get().getName() << ".\n"; //здесь есть проверка на возраст
			std::cout << v[iii].get().getName() << ": " << v[iii].get().speak1(v[iii].get().getAge(), v[kkk].get().getAge()) << v[kkk].get().getName() << ".\n"; //и здесь
		}
	}
}
 
int main()
{
	srand(static_cast<unsigned int>(time(0)));
	rand();
	setlocale(LC_ALL, "Rus");
	std::vector<std::reference_wrapper<Human>> v; //создаём вектор из людей
	dialog(v);
	
	return 0;
}
