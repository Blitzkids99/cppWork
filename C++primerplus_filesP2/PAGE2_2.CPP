//函数的自定义
#include<iostream>
using namespace std;
void mice();
void shtr();
int main()
{
    mice();
    mice();
    shtr();
    shtr();
    return 0;
}
void mice()
{
    cout << "Three blind mice" << endl;
}
void shtr()
{
    cout << "see how they run" << endl;
}