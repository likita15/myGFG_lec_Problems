/*Maximum Sum Sub-Array*/
#include <bits/stdc++.h>
using namespace std;
int SumOfMaxSubArray(int*arr , int n )
{
    int res = arr[0],maxEnding = arr[0];
    for(int i = 0 ; i < n ; i++)
    {
          maxEnding = max(maxEnding+arr[i] , arr[i]);
          res = max(res , maxEnding);
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
    cout <<SumOfMaxSubArray(a,n);

    return 0;
}