#include <iostream>
using namespace std;

const double PI = 3.14159;

double hitungVolumeTabung(double jariJari, double tinggi) {
    return PI * jariJari * jariJari * tinggi;
}

double hitungLuasPermukaanTabung(double jariJari, double tinggi) {
    return 2 * PI * jariJari * (jariJari + tinggi);
}

int main() {
    double jariJari, tinggi;

    cout << "Masukkan jari-jari tabung: ";
    cin >> jariJari;

    cout << "Masukkan tinggi tabung: ";
    cin >> tinggi;

    double volume = hitungVolumeTabung(jariJari, tinggi);
    double luasPermukaan = hitungLuasPermukaanTabung(jariJari, tinggi);

    cout << "Volume tabung: " << volume << endl;
    cout << "Luas permukaan tabung: " << luasPermukaan << endl;

    return 0;
}