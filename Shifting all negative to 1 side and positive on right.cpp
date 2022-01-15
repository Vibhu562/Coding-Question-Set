// Shifting all negative to 1 side and positive on right
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[10000],n,i;
    cin >> n;
    for (i=0;i<n;i++)
    {
        cin >> a[i];
    }
    
    int j=0;
     for (i=0;i<n;i++)
    {
        if (a[i]<0) 
        {swap (a[i],a[j]);
        j++;
    }}
    for (i=0;i<n;i++)
    {
        cout << a[i]<< " ";
    }
    
}
