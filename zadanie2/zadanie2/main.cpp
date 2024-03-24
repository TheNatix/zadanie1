#include <iostream>

using namespace std;

void print_table(int tab[], int n, int k)
{
	cout << "Tablica po " << k << " przejsciu petli: ";
	for (int i = 0; i < n; i++)
	{
		cout << tab[i] << " ";
	}
	cout << endl;

}

void sort(int tab[], int n)
{
	int temp, i = 0, j = 0;
	int minIndex;
	for (int j = 0; j < n - 1; j++)
	{
		minIndex = j;
		for (int i = j; i < n; i++)
		{
			if (tab[minIndex] > tab[i])
			{
				minIndex = i;
			}
		}
		// Przejscie przez cala tabele w poszukiwaniu najmniejszej wartosci z pozostalych i dopiero po przejsciu przez tabele nastepuje swap na pozycje podana przez j
		temp = tab[minIndex];
		tab[minIndex] = tab[j];
		tab[j] = temp;
		print_table(tab, n, j + 1);
	}
}
int main() {
	int tab[] = { 6,8,2,7,11,8,0,3,7,9 };
	int n = 10;
	print_table(tab, n, 0);
	sort(tab, n);
	return 0;
}
//Natan Kolodziej
//Grupa 235 A2
//Sortowanie przez selekcje

//Zalety : mala ilosc danych powinna byc w miare prosto posortwoana i nie ma pustych przebiegow

//Wady : przechodzi przez cala tablica 

//Podaj liczbe elementow : 10
//Podaj elementy tablicy: 6 8 2 7 11 8 0 3 7 9
//Tablica po 0 przejsciu petli : 6 8 2 7 11 8 0 3 7 9
//Tablica po 1 przejsciu petli : 0 8 2 7 11 8 6 3 7 9
//Tablica po 2 przejsciu petli : 0 2 8 7 11 8 6 3 7 9
//Tablica po 3 przejsciu petli : 0 2 3 7 11 8 6 8 7 9
//Tablica po 4 przejsciu petli : 0 2 3 6 11 8 7 8 7 9
//Tablica po 5 przejsciu petli : 0 2 3 6 7 8 11 8 7 9
//Tablica po 6 przejsciu petli : 0 2 3 6 7 7 11 8 8 9
//Tablica po 7 przejsciu petli : 0 2 3 6 7 7 8 11 8 9
//Tablica po 8 przejsciu petli : 0 2 3 6 7 7 8 8 11 9
//Tablica po 9 przejsciu petli : 0 2 3 6 7 7 8 8 9 11

//Posortowana tablica 0 2 3 6 7 7 8 8 9 11