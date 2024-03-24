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
	int temp, i = 0, j = 0, k = 1;
	for (int j = n - 2; j >= 0; j--)
	{
		temp = tab[j];
		i = j + 1;
		while (i<n && temp>tab[i])
		{
			tab[i - 1] = tab[i];
			i++;
		}
		tab[i - 1] = temp;
		// sortowanie polega na szukaniu wiekszego elementu niz niz tab[j] podanego przy iteracji i przesunieciu tablicy o jeden w lewo aby na koncu wstwic wiekszy element
		print_table(tab, n, k);
		k++;
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
//Sortowanie przez wybieranie

//Zalety : Skuteczny dla malych tablic 

//Wady : wykona ta sama liczbe operacji nawet dla posortowanej tablicy

//Podaj liczbe elementow : 10
//Podaj elementy tablicy: 6 8 2 7 11 8 0 3 7 9
//Tablica po 0 przejsciu petli : 6 8 2 7 11 8 0 3 7 9
//Tablica po 1 przejsciu petli : 6 8 2 7 11 8 0 3 7 9
//Tablica po 2 przejsciu petli : 6 8 2 7 11 8 0 3 7 9
//Tablica po 3 przejsciu petli : 6 8 2 7 11 8 0 3 7 9
//Tablica po 4 przejsciu petli : 6 8 2 7 11 0 3 7 8 9
//Tablica po 5 przejsciu petli : 6 8 2 7 0 3 7 8 9 11
//Tablica po 6 przejsciu petli : 6 8 2 0 3 7 7 8 9 11
//Tablica po 7 przejsciu petli : 6 8 0 2 3 7 7 8 9 11
//Tablica po 8 przejsciu petli : 6 0 2 3 7 7 8 8 9 11
//Tablica po 9 przejsciu petli : 0 2 3 6 7 7 8 8 9 11

//Posortowana tablica 0 2 3 6 7 7 8 8 9 11