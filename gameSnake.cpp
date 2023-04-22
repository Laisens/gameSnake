// gameSnake.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
char playingField[10][10];

void InicialDisplai() {
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			playingField[i][j] = ' ';
		}

	}
}
void Displai() {
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << playingField[i][j];
		}
		cout << endl;
	}
}

int main()
{
	char apple'*';

	for (int i = 0; i < 256; i++)
	{
		cout << i << "= " << (char)i << endl;
	}
	
	
}