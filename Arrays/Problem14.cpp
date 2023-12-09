/*TRAPPING RAIN WATER*/

#include <bits/stdc++.h>
using namespace std;
int getMaxWater(int * arr , int n )
{
    int maxWater = 0;
    int lmax[n] , rmax[n];
    lmax[0] = arr[0];
    rmax[n-1] = arr[n-1];

    for(int i = 1 ; i < n ; i++)
    {
        lmax[i] = max(arr[i] , lmax[i-1]);
    }
    for(int i = n-2 ; i>=0 ; i--)
    {
        rmax[i] = max(arr[i] , rmax[i+1]);
    }
    for(int i = 0 ; i < n ; i++)
    {
        maxWater+=min(lmax[i],rmax[i])-arr[i];
    }

    return maxWater;
}
int main()
{
    int a[1000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout<<getMaxWater(a , n);

    return 0;
}