#include<iostream>
using namespace std;
const double kmPerMile = 0.6214;
const double gallonPerliter = 3.785;
int main()
{
    cout << "please enter the longth of the trip(km):";
    double km;
    cin >> km;
    cout << "please enter the usedfuelnumber: ";
    double oil;
    cin >> oil;
    double hunderkmPerFuel = oil / km * 100;
    cout << "Per 100 km use " << hunderkmPerFuel << " fuel(L)" << endl;
    double gallonPerMile = km * kmPerMile / (oil / gallonPerliter);
    cout << "one gallon use of fule can run " << gallonPerMile << " miles" << endl;
}