//Problem : https://www.hackerearth.com/problem/algorithm/max-min/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr+n);
    int diff = arr[n-1];
    
    for(int i=0; i<=(n-k); i++)
    {
        diff = min(diff, (arr[i+k-1] - arr[i]));
    }
    cout << diff << endl;
    return 0;
}