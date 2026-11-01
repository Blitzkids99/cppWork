#include<iostream>
using namespace std;
int main(){
    cout << "please enter the longth of the trip(km):" ;
    double km;
    cin >> km;
    cout << "please enter the usedfuelnumber: ";
    double oil;
    cin >> oil;
    double hunderkmPerFuel = oil/km*100;
    cout << "Per 100 km use " << hunderkmPerFuel << "fuel(L)" << endl;
}