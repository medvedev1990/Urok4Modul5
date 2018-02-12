#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>

using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int n, exit;
	do
	{
		cout << "number exemple: ";
		cin >> n;
		cout << endl;
		switch (n)
		{
		case 1:
		{
			/*1.Дано целое число в двоичной системе счисления, т.е. последовательность цифр  0 и 1. Составить программу перевода этого числа в восьмеричную систему счисления.*/
			int bin[12];
			int i, j=0;
			int index = 0;
			for (i = 0;i < 12;i++)
			{
				bin[i] = 0 + rand() % 2;
				cout << bin[i];
			}
			cout << endl;
			cout << "-----------------\n";
			for (i = 11;i >= 0;i--)
			{
				j += bin[index] * (pow(2, i));
				index++;
			}
			cout << "dex " << j << endl;
			cout << "Oct = " << oct << j << endl;
		}
		break;
		case 2:
		{
			/*2.	Ввести два массива действительных чисел, состоящих из 7 и  9 элементов. Сформировать третий массив из упорядоченных по убыванию значений обоих массивов.*/
			int a[7];
			int b[9];
			int c[16];
			int i, j = 0, m;
			for (i = 0;i < 7;i++)
			{
				a[i] = 5 + rand() % 100;
				c[j] = a[i];
				cout << j << " - " << c[j] << endl;
				j++;
			}

			for (i = 0;i < 9;i++)
			{
				b[i] = 5 + rand() % 100;
				c[j] = b[i];
				cout << j << " - " << c[j] << endl;
				j++;
			}
			cout << "-----------------------------------\n";
			for (i = 0;i < 16;i++)
			{
				for (j = 15;j > i;j--)
				{
					if (c[j] < c[j - 1])
					{
						m = c[j];
						c[j] = c[j - 1];
						c[j - 1] = m;
					}
				}
				cout << c[j] << endl;
			}


		}
		break;
		case 3:
		{
			/*3.Ввести массив, в котором только два одинаковых элемента. Определить их местоположение.*/
			int a[7];
			int i, j, m = 0, n = 0;
			for (i = 0;i < 7;i++)
			{
				a[i] = 5 + rand() % 20;
				cout << i << " - " << a[i] << endl;
			}
			for (i = 0;i < 7;i++)
			{
				m = 0;
				for (j = 0;j < 7;j++)
				{
					if (a[i] == a[j])
					{
						m++;
						if (m >= 2)
							cout << "позиции " << i << " - " << j << endl;
					}
				}
				if (m >= 2)
					break;
			}
			if (m >= 2)
				for (i = 0;i < 7;i++)
					cout << a[i] << "\t";
			cout << endl;
		}
		break;
		case 4:
		{
			/*4.Задан целочисленный массив. Определить, образуют ли значения его элементов геометрическую прогрессию.
			Если «да» – вывести знаменатель прогрессии, если «нет» – ответ «не образуют». */
		}
		break;
		case 5:
		{
			/*5.Отсортировать по убыванию элементов последнего столбца целочисленный двухмерный массив 5×4*/
			int a[5][4];
			int i, j;
			int m;
			for (i = 0;i < 5;i++)
			{
				for (j = 0;j < 4;j++)
				{
					a[i][j] = 5 + rand() % 100;
					cout << a[i][j] << "\t";
				}
				cout << endl;
			}
			for (i = 0;i < 5;i++)
			{
				for (j = 4;j > i;j--)
				{
					if (a[j][3] > a[j - 1][3])
					{
						m = a[j][3];
						a[j][3] = a[j - 1][3];
						a[j - 1][3] = m;
					}
				}
			}
			cout << "----------------\n";
			for (i = 0;i < 5;i++)
			{
				for (j = 0;j < 4;j++)
				{
					cout << a[i][j] << "\t";
				}
				cout << endl;
			}
		}
		break;
		case 6:
		{
			/*В матрице А(3-строки,4-столбца) поменять местами наименьшие элементы в первой и третей строке.*/
			int a[3][4];
			int i, j, c;
			int m;
			for (i = 0;i < 3;i++)
			{
				for (j = 0;j < 4;j++)
				{
					a[i][j] = 5 + rand() % 100;
					cout << a[i][j] << "\t";
				}
				cout << endl;
			}
			cout << "----------------------\n";
			for (c = 0;c < 3;c++)
			{
				for (i = 0;i < 4;i++)
				{
					for (j = 3;j > i;j--)
					{
						if (a[c][j] < a[c][j - 1])
						{
							m = a[c][j];
							a[c][j] = a[c][j - 1];
							a[c][j - 1] = m;
						}
					}
				}
			}
			for (i = 0;i < 3;i++)
			{
				for (j = 0;j < 4;j++)
				{
					cout << a[i][j] << "\t";
				}
				cout << endl;
			}
			m = a[0][0];
			a[0][0] = a[2][0];
			a[2][0] = m;
			cout << "--------------------\n";
			for (i = 0;i < 3;i++)
			{
				for (j = 0;j < 4;j++)
				{
					cout << a[i][j] << "\t";
				}
				cout << endl;
			}
		}
		break;
		case 7:
		{
			/*7.Дан двухмерный массив 5×6. Определить среднее арифметическое каждого столбца,  определить максимум и минимум каждой строки.*/
			int a[5][6];
			int i, j, c;
			int m = 0;
			for (i = 0;i < 5;i++)
			{
				for (j = 0;j < 6;j++)
				{
					a[i][j] = 5 + rand() % 100;
					cout << a[i][j] << "\t";
				}
				cout << endl;
			}
			cout << "----------------------\n";
			for (i = 0;i < 6;i++)
			{
				m = 0;
				for (j = 0;j < 5;j++)
					m += a[j][i];
				cout << "среднее арифмитическое " << i << " столбца " << m / 5;
				cout << endl;
			}
			cout << "----------------------\n";
			for (i = 0;i < 5;i++)
			{
				for (j = 0;j < 6;j++)
				{
					for (c = 5;c > j;c--)
					{
						if (a[i][c] < a[i][c - 1])
						{
							m = a[i][c];
							a[i][c] = a[i][c - 1];
							a[i][c - 1] = m;
						}
					}
				}
			}
			for (i = 0;i < 5;i++)
			{
				cout << "минимальное число " << i << "строки " << a[i][0] << " максимальный элемент " << a[i][5] << endl;
			}
		}
		break;
		case 8:
		{
			/*8.Дан двухмерный массив n×m элементов, найти количество четных и нечетных чисел в массиве.*/
			int a[5][6];
			int i, j, c;
			int chet = 0;
			int nechet = 0;
			for (i = 0;i < 5;i++)
			{
				for (j = 0;j < 6;j++)
				{
					a[i][j] = 5 + rand() % 100;
					cout << a[i][j] << "\t";
				}
				cout << endl;
			}
			cout << "----------------------\n";
			for (i = 0;i < 5;i++)
			{
				for (j = 0;j < 6;j++)
				{
					if (a[i][j] % 2 == 0)
						chet++;
					else
						nechet++;
				}
			}
			cout << "четных чисел в массиве " << chet << " не четных " << nechet << endl;
		}
		break;
		case 9:
		{
			/*9.Дан двухмерный массив n × m элементов. Определить, сколько раз встречается число 7 среди элементов массива.*/
			int a[5][6];
			int i, j, c;
			int chet = 0;
			for (i = 0;i < 5;i++)
			{
				for (j = 0;j < 6;j++)
				{
					a[i][j] = 5 + rand() % 95;
					cout << a[i][j] << "\t";
				}
				cout << endl;
			}
			cout << "----------------------\n";
			for (i = 0;i < 5;i++)
			{
				for (j = 0;j < 6;j++)
				{
					if ((a[i][j] / 10 == 7) || (a[i][j] % 10 == 7))
						chet++;
				}
			}
			cout << "число 7 встречается " << chet << " раз" << endl;
		}
		break;
		case 10:
		{
			/*10.Дан массив из n × m элементов. Найти индексы первого наименьшего  элемента массива*/
			int a[5][6];
			int i, j, c=0,t=0;
			int min ;
			for (i = 0;i < 5;i++)
			{
				for (j = 0;j < 6;j++)
				{
					a[i][j] = 5 + rand() % 95;
					cout << a[i][j] << "\t";
				}
				cout << endl;
			}
			min = a[0][0];
			cout << "----------------------\n";
			for (i = 0;i < 5;i++)
			{
				for (j = 0;j < 6;j++)
				{
					if (min > a[i][j])
					{
						min = a[i][j];
						c = i;
						t = j;
					}	
				}
			}
			cout << "минимальный элемент =  " << min << " позиция в массиве [" << c << "]" << "[" << t << "]" << endl;
		}
		break;
		default:cout << "No exemple " << endl;
			break;
		}
		cout << "continue? 1-Yes 2-No: ";
		cin >> exit;
	} while (exit == 1);
}