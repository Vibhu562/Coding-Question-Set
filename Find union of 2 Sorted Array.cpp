// Find union of 2 Sorted Array
#include <bits/stdc++.h>
using namespace std;
int main() {
int a[10000],b[10000],k,l,n,m;
cin >> n>>m;
for (k=0;k<n;k++)
{
    cin >> a[k];
}
for (l=0;l<m;l++)
{
    cin >> b[l];
}
int i =0,j=0;
while (i<n && j<m){
        if (a[i]<b[j])
        {
            cout << a[i++] <<" " ;
        }
        else if (b[j]<a[i])
        {
            cout << b[j++] <<" ";
        }
        else
        {
             cout << b[j++] <<" ";
             i++;
        }
}
 while (i < n)
        cout << a[i++] << " ";
 
    while (j < m)
        cout << b[j++] << " ";
    
    
}
