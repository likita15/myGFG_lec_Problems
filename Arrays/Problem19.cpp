/*Majority element in the array*/
/*WE ARE USING THE "MOORE'S VOTING ALGORITHM" HERE*/
#include <bits/stdc++.h>
using namespace std;
int findMajority(int*arr , int n)
{
    /*finding the candidate which is probably be in the majority inside 
    the array*/
    int res = 0 , count = 1;
    for(int i = 1; i<n; i++)
    {
        if(arr[res] == arr[i])
        {
            count++;
        }
        else{
            count--;
        }
        if(count == 0)
        {
            /*reseting the counter and the res*/
            res = i ; 
            count = 1;
        }
    } 

    /*Checking whether the candidate is really in the  majority or not*/
    count = 0 ; 
    for(int i = 0 ; i<n ; i++)
    {
        if(arr[i]==arr[res])
        {
            count++;
        }
    }
    if(count>n/2)return res ; 
    else return -1;
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
cout<<findMajority(a , n);

    return 0;
}

/*

"Boyer-Moore Majority Voting Algorithm"

Read
Discuss
The Boyer-Moore voting algorithm is one of the popular optimal algorithms which is used to find the majority element among the given elements that have more than N/ 2 occurrences. This works perfectly fine for finding the majority element which takes 2 traversals over the given elements, which works in O(N) time complexity and O(1) space complexity.

Let us see the algorithm and intuition behind its working, by taking an example –

Input :{1,1,1,1,2,3,5}
Output : 1
Explanation : 1 occurs more than 3 times.
Input : {1,2,3}
Output : -1
This algorithm works on the fact that if an element occurs more than N/2 times, it means that the remaining elements other than this would definitely be less than N/2. So let us check the proceeding of the algorithm.

First, choose a candidate from the given set of elements if it is the same as the candidate element, increase the votes. Otherwise, decrease the votes if votes become 0, select another new element as the new candidate.
Intuition Behind Working :
When the elements are the same as the candidate element, votes are incremented whereas when some other element is found (not equal to the candidate element), we decreased the count. This actually means that we are decreasing the priority of winning ability of the selected candidate, since we know that if the candidate is in majority it occurs more than N/2 times and the remaining elements are less than N/2. We keep decreasing the votes since we found some different element(s) than the candidate element. When votes become 0, this actually means that there are the equal  number of votes for different elements, which should not be the case for the element to be the majority element. So the candidate element cannot be the majority and hence we choose the present element as the candidate and continue the same till all the elements get finished. The final candidate would be our majority element. We check using the 2nd traversal to see whether its count is greater than N/2. If it is true, we consider it as the majority element.


*/