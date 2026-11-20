#include<iostream>
using namespace std;
void select_sort(int a[], int);
int main()
{
    int a[10],i;
    cout << "please enter ten numbers:" << endl;
    for (i = 0; i < 10;++i)
        cin >> a[i];
    select_sort(a, 10);
    return 0;
}
void select_sort(int a[],int n)
{
    int i, j, k,temp;
    for (i = 0; i <= n - 1; ++i)
    {
        k = i;
        for (j = i + 1; j < n; ++j)
        {
            if (a[j] < a[k])
                k = j;
        }
        temp = a[k];
        a[i] = a[k];
        temp = a[i];
    }
}