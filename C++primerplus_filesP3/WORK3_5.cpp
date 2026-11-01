#include<iostream>
using namespace std;
int main()
{
    cout << "please enter the worlds population:";
    long long World_population;
    cin >> World_population;
    cout << "please enter the population of the US:";
    long long US_population;
    cin >> US_population;
    double rate = 100.0*US_population / World_population ;
    cout << "the population of the US is " << rate << "% of the world population." << endl;
    
    return 0;
}