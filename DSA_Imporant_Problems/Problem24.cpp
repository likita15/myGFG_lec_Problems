/*Equilibrium point in the array*/
#include <bits/stdc++.h>
using namespace std;
bool findEquilibrium(int*arr , int n)
{
    int res = 0;
    int ls = 0;
    for(int i = 0 ; i<n ; i++)
    {
        res+=arr[i];
    }
    for(int i = 0; i < n; i++)
    {
        res-=arr[i];
        if(ls == res)
        return true;

        ls+=arr[i];
    }
    return false;
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
    cout<<findEquilibrium(a , n);

    return 0;
}