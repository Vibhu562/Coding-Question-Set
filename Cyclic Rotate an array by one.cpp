#include <iostream>
using namespace std;
int main()
{
   int a[1000],n,i,last;
   cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    last = a[n-1];
    for (i=n-2;i>=0;i--)
    {
        a[i+1]=a[i];
    }
    a[0]=last;
     for (i=0;i<n;i++)
    {
        cout <<a[i]<< " ";
    }
}
