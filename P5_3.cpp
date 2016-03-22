#include <iostream>

using namespace std;

int main()
{
    double nilai;
    char indeks;
    cout <<"Masukkan nilai yang diperoleh : ";
    cin >> nilai;

    if (nilai >= 85) {
        indeks = 'A';
    }
    else if (nilai >= 70) {
        indeks = 'B';
    }
    else if (nilai >= 55) {
        indeks = 'C';
    }
    else if (nilai >= 40) {
        indeks = 'D';
    }
    else {
        indeks = 'E';
    }
    // Menampilkan nilai indeks yang didapat
    cout << "Nilai indeks dari nilai "<<nilai<<" adalah " << indeks;

    return 0;
}
