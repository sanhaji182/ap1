#include <iostream>

using namespace std;

int main()
{
    int nilai;
    // memberikan informasi agar user memasukkan sebuah bilangan bulat
    cout << "Masukkan sebuah bilangan bulat : ";

    // membaca nilai yang dimasukkan dan disimpan di variabel nilai
    cin >> nilai;

    if (nilai > 0)
        cout << "Nilai yang anda masukkan adalah bilangan positif";
        else if (nilai < 0 )
            cout << "Nilai yang anda masukkan adalah bilangan negatif";
        else if (nilai == 0)
            cout << "Nilai yang anda masukkan adalah bilangan nol";

    return 0;
}
