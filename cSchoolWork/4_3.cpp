//判断数字是否为素数
#include<iostream>
#include<cmath>
using namespace std;
void ifprime(int);
int main()
{
    int n;
    cout << "the program can judge the number is or not a prime, please enter a numebr:";
    cin >> n;
    ifprime(n);
    cout << '\n';
    return 0;
}
void ifprime(int n)
{
    int i, k;
    bool prime=true;
    k = int(sqrt(n));
    for (i = 2; i <= k;++i)
       {
           if (n % i == 0)
            {
                prime = false;
                break;
            }
        }
    if(prime)
        cout << "the number is a prime";
    else
        cout << "the number is not a prime";
}