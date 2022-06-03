#include <iostream>
#include <vector>
#include <math.h>
#include <fstream>
 
/*
Есть 2 текстовых файла.
 *  В них нужно найти и удалить числа,
 *  которые дублируются.
 * Первый файл .txt содержит список всех простых чисел от 0 до 1000,
 *  а второй файл .txt содержит список всех «счастливых чисел» от 0 до 1000.
 * (Если вы забыли,
 * то простые числа — это числа, которые имеют 2 делителя:
 * единицу и самого себя,
 *  о «счастливых числах» вы можете почитать в Википедии).
 
 */
 
bool isHappyNumber(int n, bool begin) // является ли число счастливым
{
	std::string str = std::to_string(n);
	int badSum = 4; //По стеку вызовов нашел значение суммы чисел при котором происходит бесконечный цикл.
	int sum = 0;
 
	//основной цикл расчета счастливого числа
	for (const auto& letter : str)
	{
		int digit = static_cast<int> (letter) - 48;
		sum += pow(digit, 2);
	}
	if (sum == 0) return false;
	//инициализация значения которое остановит бесконечный цикл
	if (!begin)
	{
		//прекращение бесконечного цикла
		if (sum == badSum) return false;
	}
 
	//счастливое число
	if (sum == 1) return true;
 
	//рекурсия
	return isHappyNumber(sum, false);
 
 
}
 
bool isSimpleNumber(int n, bool nothing) //является ли число простым (bool в конце добавлен, чтобы можно было прокинуть ое функции (isSimpleNumber и isHappyNumber)  по указателю)
{
	if (n < 2) return false;
	for (int i = 2; i < n; ++i)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}
 
void setVector(std::vector<int>& vect, const std::string& fileName) //парсинг файла
{
	std::ifstream fileStream;
	fileStream.open(fileName);
	if (!(fileStream.is_open()))
	{
		std::cout << "File not found\n";
		std::cout << "exit";
		std::cin.get(); //чтобы терминал сразу не закрылся
		return;
	}
	int currentNumber{0};
	while (!(fileStream.eof()))
	{
		fileStream >> currentNumber;
		vect.push_back(currentNumber);
	}
	vect.pop_back(); //удаление пустой строки в конце
	fileStream.close();
}
 
void generateNumberFiles(int min, int max, const std::string& fileName, bool numberTypeFunc(int, bool)) //генерация файла с числами
{
	std::ofstream fileStream;
	fileStream.open(fileName);
	if (!(fileStream.is_open()))
	{
		std::cout << "File not found\n";
		std::cout << "exit";
		std::cin.get(); //чтобы терминал сразу не закрылся
		return;
	}
	for (int i = min; i <= max; ++i)
	{
		if (numberTypeFunc(i, true)) //isHappyNumber либо isSimpleNumber
		{
			fileStream << i << '\n';
		}
	}
	fileStream.close();
}
 
bool isNumberErased(std::vector<int>& simpleNumbers, int simpleNumberIndex, std::vector<int>& happyNumbers) //удаление деблирующихся чисел
{
	for (int j = 0; j < happyNumbers.size();)
	{
		if (simpleNumbers[simpleNumberIndex] == happyNumbers[j])
		{
			simpleNumbers.erase(simpleNumbers.begin() + simpleNumberIndex);
			happyNumbers.erase(happyNumbers.begin() + j);
			return true;
		}
		else
		{
			++j;
		}
	}
	return false;
}
 
void printVect(const std::vector<int>& vect, const std::string& vectName) //вывод массива в терминал
{
	std::cout << vectName << " size " << vect.size() << '\n';
	std::cout << "[";
	for (int i = 0; i < vect.size(); ++i)
	{
		std::cout << vect[i];
		if (i != vect.size() - 1) std::cout << ", ";
	}
	std::cout << "]\n";
}
 
void compareVectors(std::vector<int>& simpleNumbers, std::vector<int>& happyNumbers)
{
	for (int i = 0; i < simpleNumbers.size();)
	{
		if (!isNumberErased(simpleNumbers, i, happyNumbers)) ++i;
	}
}
 
int main()
{
	std::cout << "До удаления дублирующихся чисел\n";
	std::string fileName = "HappyNumbers.txt";
	generateNumberFiles(0, 1000, fileName, isHappyNumber); //генерация файла со счастливыми числами
	std::vector<int> happyNumbers;
	setVector(happyNumbers, fileName); //парсинг файла с числами в массив
	printVect(happyNumbers, fileName); //вывод массива в терминал
 
	fileName = "SimpleNumbers.txt";
	generateNumberFiles(0, 1000, fileName, isSimpleNumber); //генерация файла с простыми числами
	std::vector<int> simpleNumbers;
	setVector(simpleNumbers, fileName); //парсинг файла с числами в массив
	printVect(simpleNumbers, fileName); //вывод массива в терминал
 
	compareVectors(simpleNumbers, happyNumbers); //сравнение векторов
 
	std::cout << "После удаления дублирующихся чисел\n";
	std::string vectorName = "Happy Numbers";
	printVect(happyNumbers, vectorName);
	vectorName = "Simple Numbers";
	printVect(simpleNumbers, vectorName);
	return 0;
}
