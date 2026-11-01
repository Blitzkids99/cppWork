//not finish 
//冒泡排序
#include<iostream>
using namespace std;
int main()
{
    cout << "enter 4 number:";
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int number[4];
    number[0] = a;
    number[1] = b;
    number[2] = c;
    number[3] = d;
    if (number[0] > number[1])
    {
        int t = number[0];
        number[0] = number[1];
        number[1] = t;
    }
    if (number[1] > number[2])
    {
        int t = number[1];
        number[1] = number[2];
        number[2] = t;
    }
    if (number[2] > number[3])
    {
        int t = number[2];
        number[2] = number[3];
        number[3] = t;
    }
    if (number[0] > number[2])
    {
        int t = number[0];
        number[0] = number[2];
        number[2] = t;
    }
    if (number[0] > number[3])
    {
        int t = number[0];
        number[0] = number[3];
        number[3] = t;
    }
    if (number[1] > number[3])
    {
        int t = number[1];
        number[1] = number[3];
        number[3] = t;
    }

    cout << number[0] << number[1] << number[2] << number[3] << endl;
}
