#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  int a,b,hasil; //integer variable a,b dan hasil //integer hanya untuk bilangan bulat, dan tipe datanya adalah 32 bit
  double c,d,hasil2; // double untuk variable c,d dan hasil 2 //double bisa digunakan untuk bilangan desimal, dan tipe datanya adalah 64 bit

  cout<<"Masukan Nilai 'a' dan 'b' !"<<endl;
  cout<<"a : ";
  cin>>a; // Memasukkan nilai dari a
  cout<<"b : ";
  cin>>b; // memasukkan nilai dari b
  cout<<endl;
  cout<<"#### Operator Aritmatika (int)"<<endl;

  //Penambahan
  hasil = a + b;
  cout<<"a + b : "<<hasil<<endl; //Menampilkan hasil dari a ditambah b

  //Pengurangan
  hasil = a - b;
  cout<<"a - b : "<<hasil<<endl; //Menampilkan hasil dari a dikurang b

  //Perkalian
  hasil = a * b;
  cout<<"a * b : "<<hasil<<endl; //Menampilkan hasil dari a dikali b

  //Pembagian
  hasil = a / b;
  cout<<"a / b : "<<hasil<<endl; //Menampilkan hasil dari a dibagi b

  //Modulus (sisa pembagian)
  hasil = a % b;
  cout<<"a % b : "<<hasil<<endl; //Menampilkan hasil dari a modulus b //modulus adalah hasil sisa dari suatu pembagian

  cout<<"### Operator matematika (float)"<<endl;
  cout<<"Masukan Nilai 'c' dan 'd' !"<<endl;
  cout<<"c : ";
  cin>>c;
  cout<<"d : ";
  cin>>d;
  cout<<endl;

  //Pembagian2
  hasil2 = c / d;
  cout<<"c / d  : "<<hasil2<<endl;

  //Pangkat
  hasil2 = pow(c,d);
  cout<<"c ^ d  : "<<hasil2<<endl;

  //Akar
  hasil2 = sqrt(c);
  cout<<"akar a : "<<hasil2<<endl;
  hasil2 = sqrt(d);
  cout<<"akar b : "<<hasil2<<endl;
  return 0;
}
