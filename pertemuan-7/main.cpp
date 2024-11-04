#include <iostream>
using namespace std;

float penjumlahan(float, float);
float pengurangan(float, float);
float pembagian(float, float);
float perkalian(float, float);

int main()
{
    float angka1, angka2;
    cout << "PROGRAM BERHITUNG\n\n";

    cout << "Masukkan angka pertama : ";
    cin >> angka1;
    cout << "Masukkan angka kedua : ";
    cin >> angka2;

    cout << &angka1 << endl;

    cout << "\n1.Penjumlahan" << "\n2.Pengurangan" << "\n3.Perkalian" << "\n4.Pembagian" << "\n5.Keluar";

    cout << "\n\nPilih: ";
    int pilih;
    cin >> pilih;
    switch (pilih)
    {
    case 1:
        cout << "Hasil: " << penjumlahan(angka1, angka2);
        break;
    case 2:
        cout << "Hasil: " << pengurangan(angka1, angka2);
        break;
    case 3:
        cout << "Hasil: " << perkalian(angka1, angka2);
        break;
    case 4:
        cout << "Hasil: " << pembagian(angka1, angka2);
        break;
    }
}

float penjumlahan(float a, float b)
{
    return a + b;
}

float pengurangan(float a, float b)
{
    return a - b;
}

float perkalian(float a, float b)
{
    return a * b;
}

float pembagian(float a, float b)
{
    return a / b;
}
