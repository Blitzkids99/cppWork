#include<iostream>
using namespace std;
int main()
{
    int n, a;
    int Sn, Tn;
    cout << "please enter numbers(n,a):";
    cin >> n >> a;
    int i = 0;
    while (i <n)
    {
        Tn = a+ Tn * 10;
        Sn = Sn + Tn;
        ++i;
    }
    cout << "Sn=" << Sn << endl;
    return 0;
}