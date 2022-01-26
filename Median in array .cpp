#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[1000],n,i,j,k;
    cin >> n;
    for (i=0;i<n;i++)
    {cin >> a[i];
    }
    sort(a,a+n);
    int x = (n/2)+1;
    if (n%2!=0)
    {for (i=0;i<n;i++)
    {
        cout <<"\n"<< a[(n)/2] <<endl;
        break;
    }}
    else
    {for (i=0;i<n;i++)
    {
        int z = a[((n)/2)-1]+a[(n/2)];
        float y = z/2.0;
        cout <<"\n" <<y<< endl;
        break;
    }}
    return 0;
}
