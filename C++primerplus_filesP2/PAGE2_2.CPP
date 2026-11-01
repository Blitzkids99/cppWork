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
void mice()//一定要注意函数的名称有无拼写错误啊（捂脸）
{
    cout << "Three blind mice" << endl;
}
void shtr()
{
    cout << "see how they run" << endl;
}