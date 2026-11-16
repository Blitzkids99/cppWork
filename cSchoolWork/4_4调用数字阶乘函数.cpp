#include<iostream>
using namespace std;
int fac(int);
int main()
{
    int a, b, c;
    cout << "please enter three number a,b,c:" << endl;
    cin >> a >> b >> c;
    if(a<0||b<0||c<0)
        cout << "wrong" << endl;
    else
    cout << fac(a) + fac(b) + fac(c) << endl;
    return 0;
}
int fac(int n)
{
    int sum;
    if(n<=0)
        return 1;
    sum = n * fac(n - 1);
    return sum;
}