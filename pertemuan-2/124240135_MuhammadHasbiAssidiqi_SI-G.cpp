#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void inputData(string &nama, string &nim, string &plug)
{
    cout << "Masukan:\n";
    cout << "Nama    : ";
    getline(cin, nama);
    cout << "NIM     : ";
    getline(cin, nim);
    cout << "plug    : ";
    getline(cin, plug);
}

void displayData(const string &nama, const string &nim, const string &plug)
{
    cout << "\nInilah data anda:\n";
    cout << "Nama    : " << nama << "\n";
    cout << "NIM     : " << nim << "\n";
    cout << "Plug    : " << plug << "\n";
}

void displayLine(char fill, int length)
{
    cout << setw(length) << setfill(fill) << fill << "\n "
         << setfill(' ');
};

void displayDataInTable(const string &nama, const string &nim, const string &plug)
{
    int nimWidth;
    int namaWidth;
    int plugWidth;

    if (nim.length() > 4)
    {
        nimWidth = nim.length() + 2;
    }
    else
    {
        nimWidth = 6;
    }

    if (nama.length() > 5)
    {
        namaWidth = nama.length() + 2;
    }
    else
    {
        namaWidth = 7;
    }

    if (plug.length() > 4)
    {
        plugWidth = plug.length() + 2;
    }
    else
    {
        plugWidth = 6;
    }

    int totalWidth = nimWidth + namaWidth + plugWidth + 5;

    cout << "\nDalam bentuk tabel:\n";
    displayLine('=', totalWidth);
    cout << setw(nimWidth) << left << "NIM" << "| ";
    cout << setw(namaWidth) << left << "Nama" << "| ";
    cout << setw(plugWidth) << left << "Plug" << "\n";
    displayLine('=', totalWidth);
    cout << setw(nimWidth) << left << nim << "| ";
    cout << setw(namaWidth) << left << nama << "| ";
    cout << setw(plugWidth) << left << plug << "\n";
    displayLine('-', totalWidth);
}

void convertTemperature(float C)
{
    float F, K, R;
    F = (C * 9 / 5) + 32;
    K = C + 273.15;
    R = (C * 4 / 5);

    cout << "Suhu dalam fahrenheit  : " << F << "F\n";
    cout << "Suhu dalam kelvin      : " << K << " K\n";
    cout << "Suhu dalam reamur      : " << R << " R\n";
}

int main()
{
    string nama;
    string nim;
    string plug;

    inputData(nama, nim, plug);
    displayData(nama, nim, plug);
    displayDataInTable(nama, nim, plug);

    cout << "\n\n";

    float C;
    cout << "Masukan suhu celcius   : ";
    cin >> C;

    convertTemperature(C);

    return 0;
}