#include <iostream>
#include <iomanip>
using namespace std;

string kodeProduk[] = {"001", "002", "003", "004", "005"};
string namaProduk[] = {"Paracetamol 500mg", "Amoxillin", "Combantrin", "Tolak Angin / box", "Mixagrip"};
int hargaProduk[] = {50500, 16000, 25000, 33000, 3000};
int jumlahProduk = 5;

void printLine(int n, char c)
{
    cout << setw(n) << setfill(c) << c << endl
         << setfill(' ');
}

string toRupiah(int harga)
{
    string angkaRupiah = to_string(harga);
    int panjang = angkaRupiah.length();
    int banyakTitik = panjang / 3;

    for (int i = 1; i <= banyakTitik; i++)
    {
        if (panjang != 3 * i)
        {
            angkaRupiah.insert(panjang - (3 * i), ".");
        }
    }
    return "Rp. " + angkaRupiah + ",-";
}

void checkout(int produk, int notrx, string tgl, string namapem)
{
    int totalHarga, jumlahBeli, inputIdMember, bayar;
    bool isMember = false;
    float diskon;
    string inputMember;
    cout << "Jumlah Produk: ";
    cin >> jumlahBeli;
    totalHarga = hargaProduk[produk] * jumlahBeli;
    cout << "Harga Produk: " << toRupiah(totalHarga) << endl;
    printLine(50, '=');
    cout << "Ada kartu member? (y/n):";
    cin >> inputMember;
    isMember = inputMember == "y" ? true : false;

    if (totalHarga > 200000)
    {
        if (isMember)
        {
            cout << "ID Member: ";
            cin >> inputIdMember;
            diskon = 0.15;
        }
        else
        {
            diskon = 0.05;
        }
    }
    else
    {
        diskon = 0;
    }
    cout << "Total Harga: " << toRupiah(totalHarga) << endl;
    cout << "Diskon: " << toRupiah(totalHarga * diskon) << endl;
    cout << "Total Bayar: " << toRupiah(totalHarga - (totalHarga * diskon)) << endl;
    bayar;
    cout << "Bayar: Rp. ";
    cin >> bayar;
    while(bayar < totalHarga - (totalHarga * diskon)){
        cout << "Uang yang anda masukkan kurang, \nsilahkan masukkan kembali: Rp. ";
        cin >> bayar;
        cin.ignore();
    }
    cout << "Kembalian: " << toRupiah(bayar - (totalHarga - (totalHarga * diskon))) << endl;

    printLine(50, '=');
    cout << setw(16) << "" << "RINCIAN TRANSAKSI" << endl;
    printLine(50, '=');
    cout << "No. Transaksi: " << notrx << endl;
    cout << "Tanggal: " << tgl << endl;
    cout << "Nama Pembeli: " << namapem << endl;
    cout << "Kode Produk: " << kodeProduk[produk] << endl;
    cout << "Total Harga: " << toRupiah(totalHarga) << endl;
    cout << "Diskon: " << toRupiah(totalHarga * diskon) << endl;
    cout << "Total Bayar: " << toRupiah(totalHarga - (totalHarga * diskon)) << endl;
    cout << "Bayar: " << toRupiah(bayar) << endl;
    cout << "Kembalian: " << toRupiah(bayar - (totalHarga - (totalHarga * diskon))) << endl;
}

void listProduk()
{
    printLine(50, '=');
    cout << left << setw(8) << "Kode" << setw(20) << "Nama Produk" << setw(10) << "Harga Produk" << endl;

    for (int i = 0; i < jumlahProduk; ++i)
    {
        cout << setw(8) << kodeProduk[i] << setw(20) << namaProduk[i] << setw(10) << toRupiah(hargaProduk[i]) << endl;
    }
    printLine(50, '=');
}

int cariProduk(string kode)
{
    for (int i = 0; i < jumlahProduk; ++i)
    {
        if (kodeProduk[i] == kode)
        {
            return i;
        }
    }
    return -1;
}

int pilihProduk()
{
    string pilihProduk;
    int indexProduk;
    do
    {

        cout << "Kode Produk: ";
        cin >> pilihProduk;
        indexProduk = cariProduk(pilihProduk);

        if (indexProduk == -1)
        {
            cout << "Kode produk tidak valid, silahkan coba lagi!" << endl;
            cin.ignore();
        }
    } while (indexProduk == -1);
    cout << "\nNama Produk: " << namaProduk[indexProduk] << endl;
    cout << "Harga Produk: " << toRupiah(hargaProduk[indexProduk]) << endl;
    return indexProduk;
}

bool login(string username, string password)
{
    string inputUsername, inputPassword;
    cout << "Masukkan username: ";
    cin >> inputUsername;
    cout << "Masukkan password: ";
    cin >> inputPassword;

    // if (inputUsername == username && inputPassword == password)
    if (inputPassword == password)
    {
        cout << endl;
        return true;
    }
    else
    {
        cout << "Login gagal!" << endl;
        return false;
    }
}

void programKasir()
{

    printLine(50, '=');
    cout << right << setw(17) << "" << "Program Kasir" << endl;
    printLine(50, '=');

    int notrx;
    string tgl, namapem;

    cout << "Masukkan No. Transaksi: ";
    cin >> notrx;
    cout << "Masukkan Tanggal: ";
    cin >> tgl;
    cout << "Masukkan Nama Pembeli: ";
    cin >> namapem;
    listProduk();
    int produkId = pilihProduk();
    checkout(produkId, notrx, tgl, namapem);
}

int main()
{
    printLine(50, '=');
    cout << right << setw(12) << "" << "Toko Perlengkapan Medis" << endl;
    cout << right << setw(18) << "" << "\"MEDICALOGY\"" << endl;
    printLine(50, '=');

    bool isLogin = login("hasbi", "124240135");
    // bool isLogin = true;

    if (isLogin)
    {
        string ulang;
        while (true)
        {
            programKasir();
            printLine(50, '=');
            cout << "Apakah anda ingin melakukan transaksi lagi? (y/n): ";
            cin >> ulang;
            if (ulang == "n" || ulang == "N")
            {
                cout << "\nTerima kasih telah menggunakan layanan kami!" << endl;
                printLine(50, '=');
                break;
            }
            cin.ignore();
        }
    }
}