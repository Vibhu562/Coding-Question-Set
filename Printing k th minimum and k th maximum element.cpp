// Printing k th minimum and k th maximum element
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[10000],n,i,k;
    cin >> n>>k;
    for (i=0;i<n;i++)
    {
        cin >> a[i];
    }
    sort (a,a+n);
    cout << a[k-1]<<" "<<a[n-k];
	return 0;
}
