Sprawozdanie 1<br />
Zadanie 1<br />
Sortowanie babelkowe<br />
<br />
Zalety : prosta implementacja i latwy do zapamietania algorytm <br />
Wady : wykonuje duza ilosc swapow ktore moga nie miec wplywu tak jak gdyby tablica byla wprowadzona od tylu<br />

Podaj liczbe elementow : 10<br />
Podaj elementy tablicy: 6 8 2 7 11 8 0 3 7 9<br />
Tablica po 1 przejsciu petli : 0 8 6 7 11 8 2 3 7 9 i=0 j=1-9 wiec swap zachodzi do momentu az j = 6 czyli<br />
 6 nie jest > 8 ale 6 > 2 wiec  tab[0] = 2 az j = 6 i dlatego 2 po 1 przejsciu jest na miejscu gdzie bylo 0 jest 2 a 6 jest na miejscu gdzie bylo 2<br />
Tablica po 2 przejsciu petli : 0 2 8 7 11 8 6 3 7 9 i=1 j=2-9 wiec swp<br />
Tablica po 3 przejsciu petli : 0 2 3 8 11 8 7 6 7 9<br />
Tablica po 4 przejsciu petli : 0 2 3 6 11 8 8 7 7 9<br />
Tablica po 5 przejsciu petli : 0 2 3 6 7 11 8 8 7 9<br />
Tablica po 6 przejsciu petli : 0 2 3 6 7 7 11 8 8 9<br />
Tablica po 7 przejsciu petli : 0 2 3 6 7 7 8 11 8 9<br />
Tablica po 8 przejsciu petli : 0 2 3 6 7 7 8 8 11 9<br />
Tablica po 9 przejsciu petli : 0 2 3 6 7 7 8 8 9 11<br />

Posortowana tablica 0 2 3 6 7 7 8 8 9 11<br />
Zadanie 2<br />
Sortowanie przez selekcje<br />
<br />
Zalety : mala ilosc danych powinna byc w miare prosto posortwoana i nie ma pustych przebiegow<br />
<br />
Wady : przechodzi przez cala tablica <br />
<br />
Podaj liczbe elementow : 10<br />
Podaj elementy tablicy: 6 8 2 7 11 8 0 3 7 9<br />
Tablica po 0 przejsciu petli : 6 8 2 7 11 8 0 3 7 9<br />
Tablica po 1 przejsciu petli : 0 8 2 7 11 8 6 3 7 9<br />
Tablica po 2 przejsciu petli : 0 2 8 7 11 8 6 3 7 9<br />
Tablica po 3 przejsciu petli : 0 2 3 7 11 8 6 8 7 9<br />
Tablica po 4 przejsciu petli : 0 2 3 6 11 8 7 8 7 9<br />
Tablica po 5 przejsciu petli : 0 2 3 6 7 8 11 8 7 9<br />
Tablica po 6 przejsciu petli : 0 2 3 6 7 7 11 8 8 9<br />
Tablica po 7 przejsciu petli : 0 2 3 6 7 7 8 11 8 9<br />
Tablica po 8 przejsciu petli : 0 2 3 6 7 7 8 8 11 9<br />
Tablica po 9 przejsciu petli : 0 2 3 6 7 7 8 8 9 11<br />
<br />
Posortowana tablica 0 2 3 6 7 7 8 8 9 11<br />
Zadanie 3<br />
Sortowanie przez wybieranie<br />
<br />
Zalety : Skuteczny dla malych tablic <br />
<br />
Wady : wykona ta sama liczbe operacji nawet dla posortowanej tablicy<br />
<br />
Podaj liczbe elementow : 10<br />
Podaj elementy tablicy: 6 8 2 7 11 8 0 3 7 9<br />
Tablica po 0 przejsciu petli : 6 8 2 7 11 8 0 3 7 9<br />
Tablica po 1 przejsciu petli : 6 8 2 7 11 8 0 3 7 9<br />
Tablica po 2 przejsciu petli : 6 8 2 7 11 8 0 3 7 9<br />
Tablica po 3 przejsciu petli : 6 8 2 7 11 8 0 3 7 9<br />
Tablica po 4 przejsciu petli : 6 8 2 7 11 0 3 7 8 9<br />
Tablica po 5 przejsciu petli : 6 8 2 7 0 3 7 8 9 11<br />
Tablica po 6 przejsciu petli : 6 8 2 0 3 7 7 8 9 11<br />
Tablica po 7 przejsciu petli : 6 8 0 2 3 7 7 8 9 11<br />
Tablica po 8 przejsciu petli : 6 0 2 3 7 7 8 8 9 11<br />
Tablica po 9 przejsciu petli : 0 2 3 6 7 7 8 8 9 11<br />
<br />
Posortowana tablica 0 2 3 6 7 7 8 8 9 11<br />
Zadanie 4<br />
Sortowanie przez scalanie<br />
<br />
Zalety : rekurencyjny algorytm co przy srednich tablicach daje powiedzialbym zadowalajace wyniki i szybciej sortuje tablice niz poprzednie algorytmy <br />
Wady : mozliwy problem podczas sortowania wiekszej ilosci danych wywolany przez rekurencyjne wywolanie funkcji<br />
<br />
Dane testowe<br />
Podaj liczbe elementow : 10<br />
Podaj elementy tablicy: 5 2 6 8 9 3 4 7 2 6<br />
