/*Mininum Consecutive flips of 0s and 1s*/
#include <bits/stdc++.h>
using namespace std;
void findMinFlips(int*arr , int n)
{
    for(int i = 1 ; i < n ; i++)
    {
        if(arr[i]!=arr[i-1])
        {
            if(arr[i]!=arr[0])
            {
                cout<<"from "<<i<<" to ";
            }
            else{
                cout<<i-1<<endl;
            }
        }
    }
    if(arr[n-1]!=arr[0])
    {
        cout<<(n-1);
    }
    
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
   findMinFlips(a , n);

    return 0;
}