#include<iostream>
using namespace std;
int sigma(int n[][]);
int main()
{
    int a[3][3],i,j;
    cout << "请输入9个数字 以填入3x3矩阵中" << endl;
    for (i = 0; i <= 3;++i)
        for (j = 0; j <= 3;++j)
            cin >>a[i][j];
    cout << "主对角线的和是：" << sigma(a)<<endl;
    return 0;
}
int sigma(int n[][])
{
    int i,sum=0;
    for (i = 0; i <= 3;++i)
        sum =sum+n[i][i];
    return sum;
}