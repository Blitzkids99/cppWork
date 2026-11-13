//while的方法
#include<iostream>
using namespace std;
void sigma(int);
int main()
{
    cout << "enter a number :" << endl;
    int n;
    cin >> n;
    sigma(n);
    cout << '\n';
    return 0;
}   
void sigma(int n)
{
    int z=0;
    int i = 1;
    while(i<=n)
    {
        z = z + i * i;
        ++i;
    }
    cout << z;
}