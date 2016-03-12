//contoh penggunaan operator relasi & logika 
 
#include <iostream> 
using namespace std; 
 
int main() 
{ 
  int nilai; // integer untuk nilai
  nilai = 3>2; // hasil ungkapan : benar 
  cout << "nilai = "<<nilai<<endl; 
  nilai = 2>3; // hasil ungkapan : salah 
  cout << "nilai = " <<nilai<<endl; 
   
  int x = 200; // mendefinisikan int x adalah 200
 
  cout<<"( x >= 1) && (x <= 50) -> " 
    <<(( x >= 1) && (x <= 50))<<'\n'; 
 
  cout<<"( x >= 1) || (x <= 50) -> " 
    <<(( x >= 1) || (x <= 50))<<'\n'; 
 
  int bil1,bil2,minim; // variable bil1,bil2 dan minim adalah variable interger
  bil1 = 53; //bil 1 adalah 53
  bil2 = 6; //bil 2 adalah 6
   
  minim = bil1<bil2 ? bil1:bil2; 
  cout << "Bilangan terkecil =  "<<minim<<'\n'; 
 return 0;
}
