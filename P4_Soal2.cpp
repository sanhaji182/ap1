#include <iostream>
#include <string>

using namespace std;

int main()
{
    int umur,tanggal;
    double harga,total;
    double diskon1,diskon2,harga1;
    cout << "Masukkan harga HP = ";
    cin >> harga;
    cout << "Masukkan umur anda = ";
    cin >> umur;
    cout << "Masukkan Tanggal lahir anda (Hanya Tanggal lahir) = ";
    cin >> tanggal;
    diskon1=harga*umur/100;
    harga1=harga-diskon1;
    cout << "Diskon Umur anda adalah sejumlah = " << harga1<<endl;
    diskon2=harga1*tanggal/100;
    cout <<"Diskon tanggal lahir anda adalah sejumlah = " <<diskon2<<endl;
    total=harga-diskon1-diskon2;
    cout << "Harga HP yang harus anda bayarkan adalah " <<total<< endl;
    return 0;
}
