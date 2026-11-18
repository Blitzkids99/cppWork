//冒泡排序
#include<iostream>
using namespace std;
int main()
{
    cout << "enter 10 numbers:" << endl;
    int i,j,t;
    int list[10];
    for (i = 0; i < 10; ++i)
        cin >>list[i];
    cout << endl;
    for (j = 1; j <= 10;++j)
        for (i = 0; i <= (10 - j);++i)
            if(list[i]>list[i+1])
                {t = list[i];
                list[i] = list[i + 1];
                list[i + 1] = t;}
    cout << "the number have been ordered is :" << endl;
    for (i = 0; i < 10;++i)
        cout << list[i] << endl;
    return 0;
}
