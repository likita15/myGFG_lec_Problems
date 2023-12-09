/*Maximum sum of  Cirular  Sub-Array*/

// Naive Approach o(n^2)

#include <bits/stdc++.h>
using namespace std;
int getMaxSumCircular(int*arr , int n)
{
    int res = arr[0];
    for(int i = 0 ; i < n ; i++)
    {
        int current_max = arr[i] , current_sum = arr[i];
        for(int j = 1 ; j<n; j++)
        {
            int index = (i+j)%n;
            current_sum+=arr[index];
            current_max = max(current_sum , current_max);
        }

        res = max(res , current_max);

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
    cout<<getMaxSumCircular(a , n);
    return 0;
}