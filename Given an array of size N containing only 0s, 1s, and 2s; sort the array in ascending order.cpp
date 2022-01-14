// Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[10000],n,i,c=0,ca=0,cb=0;
    cin >> n;
    for (i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for (i=0;i<n;i++)
    {
        if (a[i]==0)
        {
            c++;
        }
        if (a[i]==1)
        {
            ca++;
        }
        if (a[i]==2)
        {
            cb++;
        }
        
    }
    for(i=0;i<c;i++)
    {
        cout << 0 << " ";
    }
    for(i=0;i<ca;i++)
    {
        cout << 1 << " ";
    }
    for (i=0;i<cb;i++)
    {
        cout << 2 << " ";
    }
}
