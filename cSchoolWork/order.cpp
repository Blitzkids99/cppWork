//冒泡排序
#include<iostream>
using namespace std;
int main()
{
    cout << "enter 10 numbers:" << endl;
    int i,pass,temp;
    int list[10];
    for (i = 0; i < 10; ++i)
        cin >>list[i];
    cout << endl;
    for (pass = 1; pass<10;++pass)//n-1次
        for (i = 0; i <(10 - pass);++i)//n-p次
            if(list[i]>list[i+1])
                {
                    temp= list[i];
                    list[i] = list[i + 1];
                    list[i + 1] = temp;
                }
    cout << "the number have been ordered is :" << endl;
    for (i = 0; i < 10;++i)
        cout << list[i] << endl;
    return 0;
}
