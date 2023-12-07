/*STOCK AND THE SELL PROBLEM*/
#include <bits/stdc++.h>
using namespace std;
int maxProfit(int*price , int n)
{
    int max_profit = 0;
    for(int i = 1  ; i < n; i++)
    {
        if(price[i]>price[i-1])
        {
            max_profit=max_profit+price[i]-price[i-1];
        }
    }
    return max_profit;
}
int main()
{
    int price[1000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> price[i];
    }
    cout<<maxProfit(price , n);
   

    return 0;
}