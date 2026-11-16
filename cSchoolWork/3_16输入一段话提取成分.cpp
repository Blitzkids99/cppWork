#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int ch;
    int letters = 0, space = 0,number=0,other=0;
    cout << "输入一段话" << endl;
    while ((ch=getchar())!='\n')
    {
       if(ch>='a' && ch<='z')
           ++letters;
        else if(ch==' ')
            ++space;
        else if(ch>='0' && ch<='9')
            ++number;
        else
        ++other;
        
    }
    cout << letters << space << number << other << endl;

    return 0;
}