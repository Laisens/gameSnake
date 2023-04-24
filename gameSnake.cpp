// gameSnake.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
//char cod head - 16,17,30.31,
//		   body - 22

#include <iostream>
using namespace std;
char playingField[10][10];
const char apple = '*';

void InicialDisplai() 
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			playingField[i][j] = ' ';
		}

	}
}
void Displai() 
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << playingField[i][j];
		}
		cout << endl;
	}
}
void SpavnApple()
{
	int i, j;
	srand(time(NULL));
	do
	{
		i = rand();
		j = rand();
		if (playingField[i][j] == ' ')
		{
			playingField[i][j] = apple;
			break;
		}
	} while (true);

}

int main()
{


	
}