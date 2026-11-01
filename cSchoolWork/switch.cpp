#include<iostream>
using namespace std;
int main()
{
    int grade;
    cout << "enter the grade of u" << endl;
    cin >> grade;
    switch (grade/10)
    {
    case 10:
    case 9:
        cout << "the grade is A" << endl;
        break;
    case 8 :
        cout << "the grade is B" << endl;
        break;
    case 7:
        cout << "the grade is C" << endl;
        break;
    case 6:
        cout << "the grade is D" << endl;
        break;
    default:
        cout << "the grade is E" << endl;
        break;
    }
    return 0;
}