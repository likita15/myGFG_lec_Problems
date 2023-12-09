/*Maximum length in the Even-Odd Sub-Array*/
#include <bits/stdc++.h>
using namespace std;
int maxEvenOdd(int*arr , int n )
{
    int res = 1 , curr = 1;
    for(int i = 1 ; i < n ; i++)
    {
        if((arr[i]%2==0 and arr[i-1]%2!=0)||(arr[i]%2!=0 and arr[i-1]%2==0))
        {
            curr++;
            res = max(res , curr);
        }
        else{
            curr = 1;
        }
    }
    return res ;
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
    cout<<maxEvenOdd(a , n);
    
    return 0;
}