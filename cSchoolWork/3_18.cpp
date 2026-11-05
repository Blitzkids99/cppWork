#include<iostream>
using namespace std;
int main()
{
    long long sum=0,term=1;
    int i = 0;
    while (i <= 20)
    {
        term = term * i;
        sum = sum + term;
        ++i;
    }
    cout << sum;
    return 0;
}