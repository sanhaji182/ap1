#include <iostream>
using namespace std;

int  main()
{
    int a,b,c,d;
    int r=10;
    int s;
    a=5;
    b=600;
    c=5;
    d=b*b-4*a*c;
    s=10+r++;

    cout << "d = "<<d<<'\n';
    cout << "r = "<<r<<'\n';
    cout << "s = "<<s<<'\n';

    r=10;
    s=10 + ++r;

    cout << "r = "<<r<<'\n';
    cout << "s = "<<s<<'\n';
    cout << "Hasil dari 5 % 7 adalah "<<5%7<<'\n';
    return 0;
}
