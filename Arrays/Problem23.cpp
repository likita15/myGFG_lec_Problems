/*Prefix sum array*/
#include <bits/stdc++.h>
using namespace std;
int getSumInRange(int*arr , int n , int l , int r)
{
    //preprocessing:-
    int np[n];
    np[0] = arr[0];
    for(int i = 1 ; i < n; i++)
    {
        np[i] = arr[i]+np[i-1];
    }
    if(l==0)
    return np[r];
    else
    return np[r]-np[l-1];
}
int main()
{
    int a[1000];
    int n,l,r;
    cin >> n >> l >>r;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout<<getSumInRange(a,n,l,r);

    return 0;
}