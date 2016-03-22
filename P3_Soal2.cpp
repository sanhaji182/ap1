#include <iostream>

using namespace std;

int main()
{
    float panjang,lebar,jari_jari;
    float luas_segiempat,luas_setlingkaran,luas_total;

    cout << "Menghitung luas bangun datar" << endl;
    cout << "Panjang : ";
    cin >> panjang;
    cout << "Lebar   : ";
    cin >> lebar;
    cout << "Jari-jari   : ";
    cin >> jari_jari;
    cout<<endl<<endl;

    luas_segiempat=panjang*lebar;
    cout << "Luas segi empat         : "<<luas_segiempat<<endl;
    luas_setlingkaran=(3.14*jari_jari*jari_jari)/2;
    cout << "Luas setengah lingkaran : "<<luas_setlingkaran<<endl;
    luas_total=luas_segiempat+luas_setlingkaran;
    cout << "Luas bangun datar       : "<<luas_total<<endl;

return 0;
}
