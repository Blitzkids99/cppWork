#include<iostream>
using namespace std;
void change(int);
int main()
{
    int number;
    cout << "please enter a number: " << endl;
    cin >> number;
    cout << "the output is: ";
    if(number<0)
    {
        cout << "-";
        number = -number;
    }
    change(number);
    cout << '\n';
    return 0;

}
void change(int a)
{
    int i;
    char c;
    if ((i = a / 10) != 0)
        change(i);
    c = a% 10 + '0';
    cout << c;
}