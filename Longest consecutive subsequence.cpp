#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[1000],n,i,j,k,count=0,ans=0;
    cin >> n;
    for (i=0;i<n;i++)
    {cin >> a[i];
    }
    sort(a,a+n);
    for (int i=0;i<n;i++)
    {
        if (i>0 && a[i]==a[i-1]+1)
            count ++;
        else
            count =1 ;
        ans = max(ans,count);
        
    }
    cout << ans;
    return 0;
}
