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
	int temp;
	for (int i = 0; i < n - 1; i++)
	{

		for (int j = i + 1; j < n; j++)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[j];
				tab[j] = tab[i];
				tab[i] = temp;
			}
		}
		print_table(tab, n, i + 1);
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
//Sortowanie babelkowe

//Zalety : prosta implementacja i latwy do zapamietania algorytm i 
//Wady : wykonuje duza ilosc swapow ktore moga nie miec wplywu tak jak gdyby tablica byla wprowadzona od tylu

//Podaj liczbe elementow : 10
//Podaj elementy tablicy: 6 8 2 7 11 8 0 3 7 9
//Tablica po 1 przejsciu petli : 0 8 6 7 11 8 2 3 7 9 i=0 j=1-9 wiec swap zachodzi do momentu az j = 6 czyli
// 6 nie jest > 8 ale 6 > 2 wiec  tab[0] = 2 az j = 6 i dlatego 2 po 1 przejsciu jest na miejscu gdzie bylo 0 jest 2 a 6 jest na miejscu gdzie bylo 2
//Tablica po 2 przejsciu petli : 0 2 8 7 11 8 6 3 7 9 i=1 j=2-9 wiec swp
//Tablica po 3 przejsciu petli : 0 2 3 8 11 8 7 6 7 9
//Tablica po 4 przejsciu petli : 0 2 3 6 11 8 8 7 7 9
//Tablica po 5 przejsciu petli : 0 2 3 6 7 11 8 8 7 9
//Tablica po 6 przejsciu petli : 0 2 3 6 7 7 11 8 8 9
//Tablica po 7 przejsciu petli : 0 2 3 6 7 7 8 11 8 9
//Tablica po 8 przejsciu petli : 0 2 3 6 7 7 8 8 11 9
//Tablica po 9 przejsciu petli : 0 2 3 6 7 7 8 8 9 11

//Posortowana tablica 0 2 3 6 7 7 8 8 9 11