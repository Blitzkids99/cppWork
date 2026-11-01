//年龄所包含的月份
#include<iostream>
#include<cmath>
using namespace std;
int month(int);
int main()
{
    cout << "please inter your age:";
    int a;
    int z;
    cin >> a;
    z = month(a);
    cout << "your age in month is " <<z<<"." << endl;
}
int month(int a)
{
    int z;
    z = a * 12;
    return z;
}