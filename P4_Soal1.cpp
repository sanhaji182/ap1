#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nama;
    double uts,tugas,harian,uas,rata;
    int kehadiran;
    cout << "Masukan nama anda = ";
    getline(cin,nama);
    cout << "Masukan jumlah kehadiran = ";
    cin >> kehadiran;
    cout << "Masukan nilai UTS = ";
    cin >> uts;
    cout << "Masukan nilai tugas = ";
    cin >> tugas;
    cout << "Masukan nilai tes harian = ";
    cin >> harian;
    cout << "Masukan nilai UAS = ";
    cin >> uas;
    cout <<endl<<endl;
    cout <<nama<< " ,nilai rata-rata anda adalah ";
    rata=0.25*uts+0.2*tugas+0.15*harian+0.3*uas*0.1*kehadiran;
    cout <<rata<< endl;
    return 0;
}
