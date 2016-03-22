#include <iostream>

using namespace std;

int main()
{
    int bilangan;

    cout << "Masukka bilangan bulat yang akan diperiksa : " << endl;
    cin >> bilangan;

    if (bilangan % 2 == 0) {
        cout<<bilangan<<" adalah bilangan genap";
    }
     else {
    cout<<bilangan<<" adalah bilangan ganjil";
     }
    return 0;
}
