#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nama_depan;
    string nama_belakang;
    int tanggal;
    string bulan;
    int tahun;

    cout << "Masukkan Biodata Anda" << endl;
    cout << "Nama Depan   : ";
    cin >> nama_depan;
    cout << "Nama Belakang: ";
    cin >> nama_belakang;
    cout<<endl<<endl;

    cout << "Tanggal lahir" << endl;
    cout << "Tanggal : ";
    cin >> tanggal;
    cout << "Bulan   : ";
    cin >> bulan;
    cout << "tahun   : ";
    cin >> tahun;
    cout<<endl<<endl;

    cout << "Nama Anda          : "<<nama_depan<<" "<<nama_belakang<<endl;
    cout << "Tanggal lahir anda : "<<tanggal<<" "<<bulan<<" "<<tahun<<endl;
    cout << "Umur Anda          : "<<2016-tahun<<endl;
    return 0;
}
