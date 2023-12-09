/*Maximum Consecutive Ones*/
#include <bits/stdc++.h>
using namespace std;
int getMaxOnes(int*arr , int n)
{
    int curr = 0 , res = 0 ; 
    for(int i = 0 ; i  <  n ; i++)
    {
        if(arr[i]==0)
        {
            curr = 0;
        }
        else{
            curr++;
            res = max(res , curr);
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
    
    cout<<getMaxOnes(a, n);
    return 0;
}