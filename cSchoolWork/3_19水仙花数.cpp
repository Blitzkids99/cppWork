#include<iostream>
using namespace std;
int main()
{
    int i = 100;
    int a, b, c;
    int num=0;
    while (i <= 999)
    {
        a = i / 100;
        b = i / 10 % 10;
        c = i % 10;
        if(a*a*a+b*b*b+c*c*c==i)
            cout << i << "  ";
        ++i;
    }
    return 0;
}
