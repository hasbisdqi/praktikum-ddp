#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int MAX;
    cout << "Masukan batas semua looping (MAX): ";
    cin >> MAX;
    int baris, kolom, hasil_kali;
    for (baris = MAX; baris >= 1; baris--)
    {
        for (kolom = MAX; kolom >= 1; kolom--)
        {
            hasil_kali = baris * kolom;
            cout << setw(3) << hasil_kali;
        }
        cout << endl;
    }
    return 0;
}