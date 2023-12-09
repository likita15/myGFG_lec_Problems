/*Sliding window technique problem to find the maximum sum of the  subarrays of given size present in the
array*/


//Naive Solution:-
#include <bits/stdc++.h>
using namespace std;
int getMaxSum(int*arr , int n , int k)
{
    int res = INT_MIN;
    
    for(int i = 0 ; i <=n-k ; i++)
    {
        int sum = 0;
        for(int j = 0 ; j < k ; j++)
        {
            sum+=arr[i+j];
        }
        res = max(res , sum);
    }
    return res ;
}
int main()
{
    int a[1000];
    int n,k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout<<getMaxSum(a , n , k);
    
    return 0;
}