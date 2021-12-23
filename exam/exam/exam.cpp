// exam.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <conio.h>
#include <iostream>
using namespace std;

int ZamenaP(char One[], const int Fsize, char Two[], const int Ssize, char Three[], const int Tsize)
{
	int lengthOne = 0;
	for (;; lengthOne++)
	{
		if (One[lengthOne] == '\0') break;
	}

	int lengthTwo = 0;
	for (;; lengthTwo++)
	{
		if (Two[lengthTwo] == '\0') break;
	}

	int lengthThree = 0;
	for (;; lengthThree++)
	{
		if (Three[lengthThree] == '\0') break;
	}

	char bufFirstZ[128];
	for (int r = 0; r < lengthOne; r++)
	{
		bufFirstZ[r] = One[r];
	}

	int s = 0;
	int i;
	int i2 = 0;
	int position = 0;
	int lengthOneT = lengthOne;

	for (i = 0; s != lengthTwo && i < lengthOne; i++)
	{
		if (Two[i2] == One[i])
		{
			s++;
			if (i2 < lengthTwo)
			{
				i2++;
			}
			position = i;
		}
		else
		{
			if (Two[i2] == One[i - 1])
			{
				s = 0;
				i2 = 0;
			}
		}
	}
	if (s > 1 && s == lengthTwo)
	{
		
	}
	else
	{
		if (lengthTwo == 1 && (s == lengthTwo)) {}
		else
		{
			cout << "Result: ";
			for (i = 0; i < lengthOneT; i++)
			{
				cout << bufFirstZ[i];
			} cout << endl;
			system("pause");
		}
	}

	i2 = 0;
	int ost = 0;
	for (i = position + 1; i <= lengthOne; i++)
	{
		Two[i2] = One[i];
		i2++;
		ost++;
	}
	i2 = 0;
	for (i = position - lengthTwo + 1; i2 < lengthThree; i++)
	{
		One[i] = Three[i2];
		i2++;
	}
	i2 = 0;
	for (i = position - lengthTwo + 1 + lengthThree; i2 <= ost; i++)
	{
		One[i] = Two[i2];
		i2++;
	}
	for (i = 0; i < lengthOne + (lengthThree - lengthTwo); i++)
	{
		cout << One[i];
	} cout << endl;
	return One[i];
}
int main()
{
	cout << "String 1: ";
	char One[128];
	const int Fsize = 256;
	cin >> One;
	
	cout << "String 2: ";
	char Two[128];
	const int Ssize = 256;
	cin >> Two;
	
	cout << "String 3: ";
	char Three[128];
	const int Tsize = 256;
	cin >> Three;

	ZamenaP(One, Fsize, Two, Ssize, Three, Tsize);
}
