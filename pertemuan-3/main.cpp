#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int pilihan;
    while (1)
    {
        cout << setw(30) << setfill('=') << "" << endl;
        cout << "Pilih menu di bawah ini : " << endl;
        cout << "1. Menu 1 - Ganjil Genap" << endl;
        cout << "2. Menu 2 - Penjumlahan" << endl;
        cout << "3. Menu 3 - Keluar" << endl;
        cout << setw(30) << setfill('-') << "" << endl;
        cout << "Masukan Menu : ";

        cin >> pilihan;
        switch (pilihan)
        {
        case 1:
            int angka;
            cout << "Masukan angka: ";
            cin >> angka;
            cout << endl;

            if (angka % 2 == 0)
            {
                cout << angka << " adalah bilangan genap" << endl;
            }
            else
            {
                cout << angka << " adalah bilangan ganjil" << endl;
            }
            break;
        case 2:
            int pertama, kedua, hasil;
            cout << "Masukan bilangan pertama : ";
            cin >> pertama;
            cout << "\nMasukan bilangan kedua :";
            cin >> kedua;
            cout << endl;

            hasil = pertama + kedua;
            cout << hasil;
            break;
        default:
            break;
        }
        cout << setw(30) << setfill('=') << "" << endl;
        cout << "\n\n";
    }
}