#include<iostream>
using namespace std;
int main()
{
    int a = 99;
    cout << "a=" << a << endl;
    cout << "a address is" << &a << endl;
    int* p_a;
    p_a = &a;
    cout << "a address is" << p_a << endl;
    cout << "a  is " << *p_a << endl;
    return 0;
}