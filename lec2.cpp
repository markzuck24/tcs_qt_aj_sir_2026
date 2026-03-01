#include <bits/stdc++.h>
using namespace std;


Stock Buy and Sell - Multiple Transaction Allowed


Given an array prices[] representing stock prices, find the maximum total profit that can be earned by buying and selling the stock any number of times.

Note: We can only sell a stock which we have bought earlier and we cannot hold multiple stocks on any day.

Examples:

Input: prices[] = [100, 180, 260, 310, 40, 535, 695]
Output: 865
Explanation: Buy the stock on day 0 and sell it on day 3 = 310 - 100 = 210 and Buy the stock on day 4 and sell it on day 6 = 695 - 40 = 655 so the Maximum Profit  is = 210 + 655 = 865.

int maxProfit(const vector<int>& prices) {
    int res = 0;
  
    
    for (int i = 1; i < prices.size(); i++) {
        if (prices[i] > prices[i - 1]) 
            res += prices[i] - prices[i - 1];
    }
    
    return res;
}


/*

Stock Buy and Sell - Max one Transaction Allowed

Given an array prices[] of non-negative integers, representing the prices of the stocks on different days, find the maximum profit possible by buying and selling the stocks on different days when at most one transaction is allowed. Here one transaction means 1 buy + 1 Sell. If it is not possible to make a profit then return 0.

Note: Stock must be bought before being sold.

Examples:

Input: prices[] = [7, 10, 1, 3, 6, 9, 2]
Output: 8
Explanation: Buy for price 1 and sell for price 9. 

Input: prices[] = [7, 6, 4, 3, 1]
Output: 0
Explanation: Since the array is sorted in decreasing order, 0 profit can be made without making any transaction.

Input: prices[] = [1, 3, 6, 9, 11]
Output: 10
Explanation: Since the array is sorted in increasing order, we can make maximum profit by buying at price[0] and selling at price[n-1]

1- Brute Force: TC: O(n^2)
2- Optimised: TC: O(n)

*/

/*

int res = 0;

for(int i=0; i<n-1; i++)
{
    for(int j=i+1; j<n; j++)
    {
        res = max(res, a[j] - a[i]);
    }
}

*/

//TC: O(n), SC: O(1)
/*

int main()
{
    int a[] = {7, 6, 4, 3, 1};
    int n = sizeof(a)/sizeof(a[0]);
    int mn = a[0];
    int ans = 0;
    
    for(int i=0; i<n; i++)
    {
        mn = min(mn, a[i]);
        ans = max(ans, a[i] - mn);
        
    }
    
    cout << ans << endl;

}
*/


/*

Maximum product of a triplet (subsequence of size 3) in array


Given an integer array, find a maximum product of a triplet in the array.

Examples: 

Input:  arr[ ] = [10, 3, 5, 6, 20]
Output: 1200
Explanation: Multiplication of 10, 6 and 20

Input:  arr[ ] =  [-10, -3, -5, -6, -20]
Output: -90

Input: arr[ ] =  [1, -4, 3, -6, 7, 0]
Output: 168

*/

/*
2- Sorting: O(nlogn)

sort(a, a+n);
    return max(
        arr[0] * arr[1] * arr[n - 1], 
        arr[n - 1] * arr[n - 2] * arr[n - 3]
        );
}

3 - Optimised: TC: O(n), SC: O(1)

  int maxA = INT_MIN, maxB = INT_MIN, maxC = INT_MIN;
  
   int minA = INT_MAX, minB = INT_MAX;


  for (int i = 0; i < n; i++)
    {
        
        if (arr[i] > maxA)
        {
            maxC = maxB;
            maxB = maxA;
            maxA = arr[i];
        }
        else if (arr[i] > maxB)
        {
            maxC = maxB;
            maxB = arr[i];
        }
        else if (arr[i] > maxC)
            maxC = arr[i];
            
        
        if (arr[i] < minA)
        {
            minB = minA;
            minA = arr[i];
        }
        else if (arr[i] < minB)
            minB = arr[i];
    }
    
    
     return max(minA * minB * maxA, maxA * maxB * maxC);
}
  */
  
/*
1- Brute Force : O(n^3)


    int n = arr.size();

    int maxProduct = INT_MIN;

    for (int i = 0; i < n - 2; i++)
        for (int j = i + 1; j < n - 1; j++)
            for (int k = j + 1; k < n; k++)
                maxProduct = max(maxProduct, arr[i] * arr[j] * arr[k]);

    return maxProduct;
    
*/





/*

Given an array of n integers, the task is to find the third largest element.
All the elements in the array are distinct integers. 

Examples : 

Input: arr[] = {1, 14, 2, 16, 10, 20}
Output: 14
Explanation: Largest element is 20, second largest element is 16 and third largest element is 14

Input: arr[] = {19, -10, 20, 14, 2, 16, 10}
Output: 16
Explanation: Largest element is 20, second largest element is 19 and third largest element is 16 


1- Brute Force: sorting  : O(nlogn)
2- Optimised: 3 different loops: TC: O(n)
3- Optimised : 1 loop: TC: O(n)
*/

/*

    int n = arr.size();
    
    int first = INT_MIN, second = INT_MIN,
    third = INT_MIN;
    
for(int i=0; i<n; i++)
{
    if (arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        }
    
    else if (arr[i] > second) {
            third = second;
            second = arr[i];
        }
        
    else if (arr[i] > third) {
            third = arr[i];
        }
}
*/     
        
    
/*

    int first = INT_MIN;
    for (int i=0; i<n; i++) {
        if (arr[i] > first) 
            first = arr[i];
    }
    
    
    int second = INT_MIN;
    for (int i=0; i<n; i++) {
        if (arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }
    
    
    int third = INT_MIN;
    for (int i=0; i<n; i++) {
        if (arr[i] > third && arr[i] < second) {
            third = arr[i];
        }
    }
*/

    
    
    
    
    

/*

int main() {
    
    int a[] = {19, -10, 20, 14, 2, 16, 10};
    
    int n = sizeof(a)/sizeof(a[0]);
    
    sort(a, a+n);
    
    cout << a[n-3] << endl;

}
*/
