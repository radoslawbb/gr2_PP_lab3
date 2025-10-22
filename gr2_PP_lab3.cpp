// gr2_PP_lab3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    /*int a, b;
    cout << "Wprowadz a: ";
    cin >> a;
    cout << "\nWprowadz b: ";
    cin >> b;

    //zadanie 1
    if (a == b) {
        cout << "\nLiczby sa rowne";
    }
    else if (a < b) {
        cout << "\nLiczba a jest mniejsza od b";
    }
    else {
        cout << "\nLiczba a jest wieksza od b";
    }

    //zadanie 2
    cout << "\nZadanie 2";

    if (a == b) {
        cout << "\nLiczby sa rowne";
    }
    
    if (a != b) {
        if (a < b) {
            cout << "\nLiczba a jest mniejsza od b";
        }
        else {
            cout << "\nLiczba a jest wieksza od b";
        }
    }

    //zadanie 3
    cout << "\nZadanie 3";
    float r;
    cout << "\nWprowadz wspolczynnik r: ";
    cin >> r;

    if (r >= 0.7 && r <= 1) {
        cout << "\nbardzo silna korelacja dodatnia" << endl;
    }
    else if (r >= 0.5) {
        cout << "\nsilna korelacja dodatnia" << endl;
    }
    else if (r >= 0.3) {
        cout << "\numiarkowana korelacja dodatnia" << endl;
    }
    else if (r >= 0.2) {
        cout << "\nslaba korelacja dodatnia" << endl;
    }
    else {
        cout << "\nbrak korelacji" << endl;
    }

    //zadanie 4
    cout << "\nZadanie 4";

    float x, y, wyn;
    char znak;
    cout << "\nPodaj liczbe x: ";
    cin >> x;
    cout << "\nPodaj liczbe y: ";
    cin >> y;

    cout << "\nPodaj znak dla pozadanego dzialania: ";
    cin >> znak;

    cout << endl;

    switch (znak) {
    case '+':
        wyn = x + y;
        cout << x << " + " << y << " = " << wyn << endl;
        break;
    case '-':
        wyn = x - y;
        cout << x << " - " << y << " = " << wyn << endl;
        break;
    case '*':
        wyn = x * y;
        cout << x << " * " << y << " = " << wyn << endl;
        break;
    case '/':
        if (x != 0 && y != 0) {
            wyn = x / y;
            cout << x << " / " << y << " = " << wyn << endl;
            break;
        }
        else {
            cout << "nie mozna dzielic przez 0" << endl;
            break;
        }
    default:
        cout << "Wprowadzono niepoprawny znak" << endl;
        break;
    }
    
    //Zadanie 5
    cout << "\nZadanie 5";
    
    int i;
    i = 0;
    while (true) {
        cout << i << endl;
        i++;
    }

    bool zmienna_logiczna = true;
    if (zmienna_logiczna) {
        cout << "PRAWDA" << endl;
    }
    else {
        cout << "FALSZ" << endl;
    }

    //Zadanie 6
    cout << "Zadanie 6" << endl;

    int koniec = 1;
    while (koniec) {
        float x, y, wyn;
        char znak;
        cout << "\nPodaj liczbe x: ";
        cin >> x;
        cout << "\nPodaj liczbe y: ";
        cin >> y;

        cout << "\nPodaj znak dla pozadanego dzialania: ";
        cin >> znak;

        cout << endl;

        switch (znak) {
        case '+':
            wyn = x + y;
            cout << x << " + " << y << " = " << wyn << endl;
            break;
        case '-':
            wyn = x - y;
            cout << x << " - " << y << " = " << wyn << endl;
            break;
        case '*':
            wyn = x * y;
            cout << x << " * " << y << " = " << wyn << endl;
            break;
        case '/':
            if (x != 0 && y != 0) {
                wyn = x / y;
                cout << x << " / " << y << " = " << wyn << endl;
                break;
            }
            else {
                cout << "nie mozna dzielic przez 0" << endl;
                break;
            }
        default:
            cout << "Wprowadzono niepoprawny znak" << endl;
            break;
        }

        cout << "Zakonczyc program? Wpisz 0 zeby zakonczyc: ";
        cin >> koniec;

        if (koniec==0) {
            return 0;
        }
    }

    //zadanie 7
    cout << "\nZadanie 7" << endl;
    int l;
    l = 0;

    while (1) {
        if (l == 200) {
            break;
        }
        else {
            if (l % 2 != 0) {
                cout << l << endl;
            }
        }
        l++;
    }*/

    //zadanie 8
    cout << "Zadanie 8" << endl;

    int n, dzielnik;
    do {
        cout << "Wprowadz liczbe naturalna dodatnia: ";
        cin >> n;
    } while (n < 1);

    int licz = 0, dz = 0;
    
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            dz = i;
            licz++;
            break;
        }
    }
    if (licz != 0) {
        cout << "Pierwszy dzielnik liczby " << n << " z przedzialu [2,"<<sqrt(n)<<"] to " << dz << endl;
    }
    else {
        cout << "Liczba " << n << " jest liczba pierwsza" << endl;
    }
            
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
