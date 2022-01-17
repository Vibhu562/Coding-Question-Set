// Kadane’s Algorithm
#include <bits/stdc++.h>
#include<climits>
using namespace std;
int main() {
int a[10000],b[10000],k,l,n,m;
cin >> n;
for (k=0;k<n;k++)
{
    cin >> a[k];
}
 int max_so_far = INT_MIN, max_ending_here = 0;

    for (int i = 0; i < n; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    cout << max_so_far<< " ";
    
}
