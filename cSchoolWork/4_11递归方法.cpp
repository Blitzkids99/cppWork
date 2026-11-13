//函数递归的方法
#include <iostream>
using namespace std;
int sigma(int);
int main()
{
    cout << "enter a number :" << endl;
    int n;
    cin >> n;
    cout << sigma(n) << endl;
    return 0;
}
int sigma(int n)
{
    int sum;
    if (n <= 0)
        return 0;
    sum = n * n + sigma(n - 1);
    return sum;
}