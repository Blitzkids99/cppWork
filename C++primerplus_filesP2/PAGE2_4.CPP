//光年的转换
#include<iostream>
using namespace std;
double change(double);
int main(){
    cout << "Enter the number of light years:";
    double a;
    cin >> a;
    double z;
    z = change(a); 
    cout<<a<<" light years =" << z << " astronomical units." << endl;
    return 0;
}
double change(double a)
{
    double z;
    z = a * 63240;
    return z;
}