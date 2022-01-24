#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
void solve() {
   int n,A[100],i,j,b[1000],count=0,k=6;
   cin >> n;
 for(i = 0;i<n;i++)
 {
     cin >> A[i];
 }
 for (i=0;i<n;i++)
 {
     for (j=i+1;j<n;j++)
     {
         if (A[i]+A[j]==k)
         count ++ ;
     }
 }
 cout << count;
}
int main() {
    int tc = 1;
    cin >> tc;
    while (tc--) solve();
    return 0;
}