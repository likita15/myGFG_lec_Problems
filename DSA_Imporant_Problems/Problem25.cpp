/*Maximum apperaing element*/
#include <bits/stdc++.h>
using namespace std;
int findMaxAppearingElement(int n , int*left , int*right)
{
    //making frequency array to store element from i value 0 to 100
    int freq[101]={0};
    for(int i = 0 ; i < n ;i++)
    {
        //marking beginning of the range on the frequency array by 1
        freq[left[i]]++;

         //marking ending of the range+1 on the frequency array by -1
        freq[right[i]+1]--;
    }
    /*finding the prefix of an frequency array will give us a exact 
    information about the exact number of the recurrence of the each element
    and their recurrence value will be stored in the prefix frequency array*/
    int res=0;
    for(int i = 1 ; i<100 ; i++)
    {
        freq[i] = freq[i-1]+freq[i];
         if(freq[i]>freq[res])
       {
            res = i ;
       }
    }
   
    return res; 
}
int main()
{
    int l[1000] , r[1000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> l[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> r[i];
    }

    cout<<findMaxAppearingElement(n , l , r);
    return 0;
}