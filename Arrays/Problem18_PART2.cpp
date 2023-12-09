/*Maximum sum of  Cirular  Sub-Array*/
// Naive Approach o(n^2)

#include <bits/stdc++.h>
using namespace std;

int getMaxNormal(int*arr,int n)
{
    int res = arr[0];
    int maxSum = arr[0];
    for (int i = 1 ; i < n ; i++)
    {
        maxSum = max(maxSum+arr[i],arr[i]);
        res = max(res,maxSum);
    }

    return res ; 

}
int getMaxSumCircular(int*arr , int n)
{
    int max_normal = getMaxNormal(arr , n);

    if(max_normal<0)return max_normal;

    int arr_sum = 0;
    for(int i = 0 ; i<n ;i++)
    {
        arr_sum+=arr[i];
        arr[i] = -arr[i];
    }
    int max_cirular_sum = arr_sum+getMaxNormal(arr , n);
    return max(max_cirular_sum , max_normal);
   
   
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
    cout<<getMaxSumCircular(a , n);
    return 0;
}