#include <bits/stdc++.h>
using namespace std;
int main()
{
   int a[1000],n,i,last,k;
   cin >> n>>k;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
   for(int i=0;i<1;i++)
    {
        a[i]=a[i]+k;
    }
    for(int i=1;i<n;i++)
    {
        a[i]=a[i]-k;
    }
    for(int i=0;i<n;i++)
    {
        cout << a[i]<<"  ";
    }
    cout << "\n"<<"Max-Min ="<< *max_element(a, a + n)- *min_element(a, a + n);
  
}
