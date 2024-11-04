#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int baris, kolA, kolB;
    baris = 3;
    kolA = 4;
    kolB = 5;
    cout << "Masukan \n";
    cout << "Jumlah baris matrix A dan B: ";
    // cin >> baris;
    cout << baris;
    cout << endl;
    cout << "Jumlah kolom matrix A: ";
    // cin >> kolA;
    cout << kolA;
    cout << endl;
    cout << "Jumlah kolom matrix B: ";
    // cin >> kolB;
    cout << kolB;
    cout << endl;

    int nilaiA[baris][kolA];
    int nilaiB[baris][kolB];

    cout << "Masukkan nilai matrix A : \n";

    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolA; j++)
        {
            cout << "[" << i << "]" << "[" << j << "] :";
            // cin >> nilaiA[i][j];
            nilaiA[i][j] = rand() % 200 + 1;
            cout << nilaiA[i][j];
            cout << endl;
        }
    }
    cout << endl;

    cout << "Masukkan nilai matrix B : \n";
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolB; j++)
        {
            cout << "[" << i << "]" << "[" << j << "] :";
            // cin >> nilaiB[i][j];
            nilaiB[i][j] = rand() % 200 + 1;
            cout << nilaiB[i][j];
            cout << endl;
        }
    }

    cout << endl;
    cout << "Tampilan Matrix\n";

    for (int i = 0; i < baris; i++)
    {
        if (i == 0)
        {
            cout << setw(5) << left << " A: ";
        }
        else
        {
            cout << setw(5) << left << "    ";
        }
        for (int j = 0; j < kolA; j++)
        {
            if (j == 0)
            {
                cout << "| " << setw(5) << nilaiA[i][j] << "|";
            }
            else
            {
                cout << " " << setw(5) << nilaiA[i][j] << "|";
            }
        }
        if (i == 0)
        {
            cout << setw(5) << left << " B: ";
        }
        else
        {
            cout << setw(5) << left << "    ";
        }
        for (int j = 0; j < kolB; j++)
        {
            if (j == 0)
            {
                cout << "| " << setw(5) << nilaiB[i][j] << "|";
            }
            else
            {
                cout << " " << setw(5) << nilaiB[i][j] << "|";
            }
        }
        cout << endl;
    }

    return 0;
}