#include<iostream>
using namespace std;
int main()
{
    int day_tenLast = 1;
    for (int day=9;day>=1; --day)
    {
        day_tenLast = (day_tenLast + 1) * 2; // y = x - (x/2 + 1) so x=(y+1)*2
    }
    cout << day_tenLast << endl;
    //222
}