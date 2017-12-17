// ConsoleApplication6.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <clocale>
#include <Windows.h>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");//русский текст
	setlocale(LC_ALL, "rus");


	int i = 0, min = 0, max = 0, X = 0, M = 0, n = 0,  f = 0, *arr = NULL, size = 0;

	while (true)
	{
		cout << "1. Ввод элементов массива\n2. Обработка массива\n3. Вывод массива на экран\n4. Выход\n";

		cin >> n;

		switch (n)
		{
		case 1:
			f = 1;
			size = 0;
			cout << "Введите размер массива  ";
			cin >> size;

			while (size <= 0)
			{
				cout << "Введено некорректное значение!\n";
				cin >> size;
			}
			arr = new int[size];


			{
				int t = 0;
				cout << "Если вы хотите, чтобы массив был заполнен случайными значениями, то нажмите 1.\nЕсли хотите заполнить его самостоятельно, то нажмите 2\n";
				cin >> t;
				while ((t < 1) || (t > 2))
				{
					cout << "Введено некорректное значение!\n";
					cin >> t;
				}
				if (t = 1)
				{
					for (int i = 0; i < size; i++)

					{
						arr[i] = rand();//заполняем случайными числами

						cout << arr[i] << "\n";//вывод элементов массива на экран
					}
				}
				else 
				{
					for (int i = 0; i < size; i++)
					{
						cin >> arr[i];
					}
				}
			}
			system("pause");
			system("cls");
			break;
		case 2:
			if (f == 0)
			{
				cout << "Массив отсутствует! Введите массив!\n";
			}
			else
			{
				f = 2;
				max = arr[0];
				min = arr[0];
				X = 0;
				M = 0;

				for (i = 0; i < size; i++)
				{
					if (arr[i] < min)
					{
						min = arr[i];
						M = i;
					}
					if (arr[i] > max)
					{
						max = arr[i];
						X = i;
					}
				}
				arr[X] = min;
				arr[M] = max;
			}
			break;
		case 3:
			if (f != 2)
			{
				cout << "Массив отсутствует или не обработан!\n";
			}
			else
			{
				for (int i = 0; i < size; i++)
				{
					cout << arr[i] << "\n";
				}
				system("pause");
				system("cls");
				delete[] arr;
			}
			break;
		case 4:
		{
			return 0;
		}
		break;
		}

	}
	

		getchar();
		return 0;
	}



