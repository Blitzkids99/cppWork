#include<iostream>
using namespace std;
void select_sort(int a[], int n);
int main()
{
    int a[10],i;
    cout << "please enter ten numbers:" << endl;
    for (i = 0; i < 10;++i)
      {
          cin >> a[i];
          if (!(cin >> a[i]))
          {
              cout << "input error" << endl;
              return 0;
          }
      }  
    select_sort(a, 10);
    for (i = 0; i <10;++i)
        cout << "the array have been ordered is:" << a[i] << endl;
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
        temp = a[i];
        a[i] = a[k];
        a[k] = temp;
    }
}
