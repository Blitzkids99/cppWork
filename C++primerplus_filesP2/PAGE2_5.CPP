//Void类型函数的传递
#include<iostream>
void Display(int a,int b);
int main(){
    using namespace std;
    cout << "Enter the number of hours:" ;
    int a;
    cin>>a;
    cout << "Enter the number of minutes:";
    int b;
    cin >> b;
    Display(a,b);
    return 0;
}
void Display(int a,int b){
    using namespace std;
    cout << "time: " << a << ":" << b << endl;
}