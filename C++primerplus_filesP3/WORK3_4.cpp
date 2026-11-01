#include<iostream>
using namespace std;

int main()
{
    cout << "please enter the number of secondes: ";
    long input;
    cin >> input;
    const int secondsOfDay = 24 * 60 * 60;
    const int secondsOfHour = 60 * 60;
    const int secondsOfyesr = 60 * 60 * 24 * 365;
    int year = input / secondsOfyesr;
    int day = (input % (year * secondsOfyesr)) / secondsOfDay;
    int hour = (input % (day * secondsOfDay)) / secondsOfHour;
    int minutes = (input % (hour * secondsOfHour)) / 60;
    int seconds = input % (minutes * 60);
    cout << input << " seconds= " << day << " days, " << hour << " hours, " << minutes << " minutes, " << seconds << " seconds ";
}