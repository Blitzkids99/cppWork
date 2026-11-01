#include<iostream>
using namespace std;

int main()
{
    float degrees;
    float minutes;
    float seconds;
    const int CG =  60;
    cout << "please Enter a latiude in degrees,minutes,and seconds:" << endl;
    cout << "first,enter the degrees:" ;
    cin >> degrees;
    cout << "next,enter the minutes of arc:";
    cin >> minutes;
    cout << "Finally,enter the seconds of arc:" ;
    cin >> seconds;
    float total=(seconds/CG+minutes)/CG+degrees;

    cout << degrees << " degrees," << minutes << " minutes," << seconds << " seconds=" << total << " degrees" << endl;
}