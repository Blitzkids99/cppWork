#include<iostream>
using namespace std;
const int change = 12;
int main()
{
    int hight;
    cout << "请输入您的身高(英寸）:___\b\b\b";
    cin >> hight;
    int z = hight / change;
    int i = hight % change;
    cout << "你的身高是" << z << "英尺" << i << "英寸" << endl;
}
