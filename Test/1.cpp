#include <iostream>
using namespace std;
int main()
{
    int test[3] = {1, 2, 3};
    int *pt = test;
    cout << pt <<'\n'<< &test[0]<<endl;
}