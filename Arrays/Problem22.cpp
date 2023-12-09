/*SubArray with the given sum*/

#include <bits/stdc++.h>
using namespace std;
bool IsGivenSUMinARR(int*arr , int n , int sum)
{
    int curr_sum = 0;
    int s=0;
    for(int e = 0 ; e<n;e++)
    {
        curr_sum+=arr[e];
        while(curr_sum>sum)
        {
            curr_sum-=arr[s++];
        }

        if(curr_sum == sum)
        return true ; 
    }
    return false;
}
int main()
{
    int a[1000];
    int n , sum;
    cin >> n >> sum;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout<<IsGivenSUMinARR(a , n , sum);
    return 0;
}