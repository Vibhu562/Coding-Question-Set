// Count Inversions
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int a[1000],i,k,n,j;
   cin >> n;
   for (int i=0;i<n;i++)
   {
       cin >> a[i];
   }
   int count;
   for (i=0;i<n-1;i++)
   {
       for (j=i+1;j<n;j++)
       {
           if (a[i]>a[j])
           {
               count++;
           }
       }
   }
   cout << count;
}
