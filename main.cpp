#include <iostream>
#include "sort.hpp"
#include "search.hpp"

using namespace std;

const int ROZMIAR = 10;

int main() {
    int tablica[ROZMIAR];

    wypelnij_tablice(tablica, ROZMIAR);

    cout << "Oryginalna Tablica: ";
    wydrukuj_tablice(tablica, ROZMIAR);

    sortowanie_babelkowe(tablica, ROZMIAR);
    cout << "Tablica po Sortowaniu Bąbelkowym: ";
    wydrukuj_tablice(tablica, ROZMIAR);

    wypelnij_tablice(tablica, ROZMIAR);
    sortowanie_przez_wstrzasanie(tablica, ROZMIAR);
    cout << "Tablica po Sortowaniu przez Wstrząsanie: ";
    wydrukuj_tablice(tablica, ROZMIAR);

    wypelnij_tablice(tablica, ROZMIAR);
    sortowanie_przez_scalanie(tablica, ROZMIAR);
    cout << "Tablica po Sortowaniu przez Scalanie: ";
    wydrukuj_tablice(tablica, ROZMIAR);

    wypelnij_tablice(tablica, ROZMIAR);
    sortowanie_szybkie(tablica, ROZMIAR);
    cout << "Tablica po Szybkim Sortowaniu: ";
    wydrukuj_tablice(tablica, ROZMIAR);

    int tablica_wynikowa[ROZMIAR] = {};
    wypelnij_tablice(tablica, ROZMIAR);
    sortowanie_przez_wstawianie(tablica, ROZMIAR, tablica_wynikowa);
    cout << "Tablica po Sortowaniu przez Wstawianie: ";
    wydrukuj_tablice(tablica_wynikowa, ROZMIAR);

    int klucz = 55;

    cout << "Wyszukiwanie Liniowe: ";
    cout << wyszukiwanie_liniowe(tablica, ROZMIAR, klucz) << endl;

    cout << "Wyszukiwanie Liniowe z Wartownikiem: ";
    cout << wyszukiwanie_liniowe_z_wart(tablica, ROZMIAR, klucz) << endl;

    cout << "Wyszukiwanie Skokowe: ";
    cout << wyszukiwanie_skokowe(tablica, ROZMIAR, klucz) << endl;

    cout << "Wyszukiwanie Binarne: ";
    cout << wyszukiwanie_binarne(tablica, ROZMIAR, klucz) << endl;

    cout << "Wyszukiwanie Interpolacyjne: ";
    cout << wyszukiwanie_interpolacyjne(tablica, ROZMIAR, klucz) << endl;

    return 0;
}
