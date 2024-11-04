#include <iostream>
using namespace std;

struct DataTanggal
{
    int tanggal;
    int bulan;
    int tahun;
};

void CetakTanggal(struct DataTanggal Tgl)
{
    cout << Tgl.tanggal << '-' << Tgl.bulan << '-' << Tgl.tahun;
}

struct Mahasiswa
{
    int NIM;
    char kelas;
    float Nilai;
};

struct Dosen
{
    int NIP;
    struct DataTanggal TglLahir;
};

int main()
{
    Mahasiswa mhs;
    Dosen dsn;
    cout << "Kelas Mahasiswa : ";
    cin >> mhs.kelas;
    cout << "NIM Mahasiswa : ";
    cin >> mhs.NIM;
    cout << "Nilai Mahasiswa : ";
    cin >> mhs.Nilai;

    cout << endl;

    dsn = {124240135, {12, 12, 1990}};
    cout << "Kelas Mahasiswa : " << mhs.kelas << endl;
    cout << "NIM Mahasiswa : " << mhs.NIM << endl;
    cout << "Nilai Mahasiswa : " << mhs.Nilai << endl;

    cout << endl;

    cout << "NIP dosen : " << dsn.NIP << endl;
    CetakTanggal(dsn.TglLahir);
    // cout << "Tanggal lahir dosen : " << dsn.TglLahir.tanggal << '/' << dsn.TglLahir.bulan << '/' << dsn.TglLahir.tahun;
    return 0;
}