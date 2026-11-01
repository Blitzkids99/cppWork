#include<iostream>
#include<cmath>
using namespace std;
const float P_T_K = 2.2;
const float F_T_I = 12;
const float I_T_M = 0.0254;
int main()
{
    float pound;
    float feet;
    float inch;
    cout << "please inter your height(feet):_\b";
    cin >> feet;
    cout << "please inter your height(inch):_\b";
    cin >>inch;
    cout << "please inter your Weight(pound):__\b\b";
    cin >> pound;
    float I = feet * F_T_I;
    float M = I * I_T_M + inch * I_T_M;
    float K = pound /P_T_K;
    float BMI = K / (M * M);//注意运算优先级！！！
    cout << "your BMI is:" << BMI << endl;
    return 0;
}