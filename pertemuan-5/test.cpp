#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << setw(50) << setfill('=') << "=" << endl;
    cout << setfill(' ') << right << setw(13) << "" << "Toko Perlengkapan Medis" << endl;
    cout << setfill(' ') << right << setw(19) << "" << "\"MEDICALOGY\"" << endl;
    cout << setw(50) << setfill('=') << "=" << endl;
    string inputUsername, inputPassword, napem, tgltrx;
    int notrx;
    cout << "Masukkan username: ";
    cin >> inputUsername;
    cout << "Masukkan password: ";
    cin >> inputPassword;

    if (true)
    {
        cout << endl;
        cout << setw(50) << setfill('=') << "=" << endl;
        cout << setfill(' ') << right << setw(19) << "" << "PROGRAM KASIR" << endl;
        cout << setw(50) << setfill('=') << "=" << endl;

        cout << "Masukkan nomor transaksi: ";
        cin >> notrx;
        cout << "Masukkan tanggal transaksi: ";
        cin >> tgltrx;
        cout << "Masukkan nama pembeli: ";
        cin >> napem;

        cout << setw(50) << setfill('=') << "=" << endl;

        cout << setfill(' ') << left << setw(8) << "No" << setw(25) << "Nama Produk" << setw(17) << "Harga Produk" << endl;
        cout << setfill(' ') << left << setw(8) << "001" << setw(25) << "Paracetamol 500mg" << setw(17) << "Rp. 50.500,-" << endl;
        cout << setfill(' ') << left << setw(8) << "002" << setw(25) << "Amoxillin" << setw(17) << "Rp. 16.000,-" << endl;
        cout << setfill(' ') << left << setw(8) << "003" << setw(25) << "Combantrin" << setw(17) << "Rp. 25.000,-" << endl;
        cout << setfill(' ') << left << setw(8) << "004" << setw(25) << "Tolak Angin / box" << setw(17) << "Rp. 33.000,-" << endl;
        cout << setfill(' ') << left << setw(8) << "005" << setw(25) << "Mixagrip" << setw(17) << "Rp. 3.000,-" << endl;

        cout << setw(50) << setfill('=') << "=" << endl;
    }
    else
    {
        cout << "Kesalahan Sistem" << endl;
    }
}
