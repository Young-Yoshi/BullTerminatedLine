#include <iostream>
#include <windows.h>
using namespace std;

#define tab "/t"
void InputLine(char str[], const int n);
int StrLen(char str[]);
void UpperCase(char str[]);
void LowerCase(char str[]);
void CapitaLize(char str[]);
void Shrink(char str[]);
void main()
{
	setlocale(LC_ALL, "Rus");
	//char str[] = {'H', 'e','l','l','o','\0' };
	//cout << str << endl;
	//char mgs[] = "Hello";
	//cout << mgs << endl;

	const int n = 20;
	char str[n] = {};
	cout << "Введите строку: ";
	InputLine(str, n);
	cout << str << endl;
	cout << StrLen(str) << endl;
	UpperCase(str);
	cout << str << " > CAPS" << endl;;
	LowerCase(str);
	cout << str<< " > nizniy" << endl;
	CapitaLize(str);
	cout << str  << " > Zaglavnaya" << endl;
	Shrink(str);
	cout << str << "> delete space" << endl;
}

void InputLine(char str[], const int n)
{
	SetConsoleCP(1251);
	cin.getline(str, n);
	SetConsoleCP(866);
}
int StrLen(char str[])
{
	int C = 0;
	for (; *str ;str++)	C++;
	return C;
}

void UpperCase(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')str[i] -= 32; // eng

		if (str[i] >= 'а' && str[i] <= 'я')str[i] -= 32; // Ru
	}
}
void LowerCase(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z') str[i] += 32;

		if (str[i] >= 'А' && str[i] <= 'Я') str[i] += 32;
	}
}

void CapitaLize(char str[])
{
	if (str[0] >= 'a' && str[0] <= 'z' || str[0] <= 'а' && str[0] <= 'я')str[0] -= 32;
	for (int i = 1; str[i]; i++)
	{
		if (str[i-1] == ' ')
		{
			if (str[i] >= 'a' && str[i] <= 'z') str[i] -= 32;
			if (str[i] >= 'а' && str[i] <= 'я') str[i] -= 32;
		}
	}
}

void Shrink(char str[])
{
	if (str[0] >= 'a' && str[0] <= 'z' || str[0] <= 'а' && str[0] <= 'я')str[0] -= 32;
	for (int i = 1; str[i]; i++)
	{
		if (str[i] == ' ')
		{
			if (str[i] >= 'a' && str[i] <= 'z') str[i] -= 32;
			if (str[i] >= 'а' && str[i] <= 'я') str[i] -= 32;
		}
	}
}