#include<iostream>

int n;

void MergeSort(int tab[], int pom[], int poczatek, int koniec)
{
    int srodek = (poczatek + koniec + 1) / 2;
    std::cout << "Tablica : ";
    for (int i = poczatek; i < koniec + 1; i++)
    {
        std::cout << tab[i] << " ";
    }
    std::cout << "\nPoczatek : " << poczatek << "\nSrodek : " << srodek << "\nKoniec : " << koniec << "\n";
    if (koniec + 1 - poczatek != 2)
    {
        std::cout << "Tablica wymaga podzielenia\n\n";
    }
    else
    {
        std::cout << "Tablica nie wymaga podzielenia\n\n";
    }
    if (srodek - poczatek > 1) {

        MergeSort(tab, pom, poczatek, srodek - 1);
    }

    if (koniec - srodek > 0) {

        MergeSort(tab, pom, srodek, koniec);
    }
    std::cout << "\n---------------------------------------------------------\n";
    std::cout << "Zajmujemy sie tablica : ";
    for (int i = poczatek; i < koniec + 1; i++)
    {
        std::cout << tab[i] << " ";
    }
    int i1 = poczatek;
    int i2 = srodek;
    std::cout << "\npoczatek -> i1: " << i1 << "\nsrodek -> i2 : " << i2 << "\nkoniec = " << koniec;
    std::cout << "\n\nCzy element tab[0] = " << tab[poczatek] << " ma nastepce : ";
    for (int i = poczatek; i <= koniec; i++) {
        std::cout << "tak\n";
        if ((i1 == srodek) || ((i2 <= koniec) && (tab[i1] > tab[i2]))) {
            std::cout << "Czy elementy sa posortowane: nie\npom[0] = tab[1] = "<<tab[i2]<<"\npom[0] = "<<tab[i2] <<"\ni2++ = "<<i2+1<<"\n";
                pom[i] = tab[i2];
            i2++;
        }

        else {
            std::cout << "Czy elementy sa posortowane: tak\npom[1] = tab[0] = " << tab[i1] << "\npom[0] = " << tab[i] << "\ni1++ = " << i1+1 << "\n\n";
            pom[i] = tab[i1];
            i1++;
        }
    }

    for (int i = poczatek; i <= koniec; i++) {
        tab[i] = pom[i];
    }
    std::cout << "\n---------------------------------------------------------\n";
    std::cout << "*************************************************************************\n";
    std::cout << "Obecnie tablica wyglada nastepujaco: ";
    for (int i = 0; i < n; i++) std::cout << tab[i] << " ";
    std::cout << "\n*************************************************************************\n\n";
}

int main()
{
    std::cout << "Podaj liczbe elementow: ";
    std::cin >> n;
    int* tab = new int[n];
    int* pom = new int[n];

    std::cout << "Podaj elementy tablicy: ";
    for (int i = 0; i < n; i++)
        std::cin >> tab[i];

    MergeSort(tab, pom, 0, n - 1);

    std::cout << "\nPosortowana tablica: ";
    for (int i = 0; i < n; i++)
        std::cout << tab[i] << " ";

    return 0;
}

//Natan Kolodziej
//Grupa 235 A2
//Sortowanie przez scalanie

//Zalety : rekurencyjny algorytm co przy srednich tablicach daje powiedzialbym zadowalajace wyniki i szybciej sortuje tablice niz poprzednie algorytmy 
//Wady : mozliwy problem podczas sortowania wiekszej ilosci danych wywolany przez rekurencyjne wywolanie funkcji

//Podaj liczbe elementow : 10
//Podaj elementy tablicy: 5 2 6 8 9 3 4 7 2 6
