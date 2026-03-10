#include <bits/stdc++.h>
using namespace std;

HW-1
Matrix Chain Multiplication


Given the dimension of a sequence of matrices in an array arr[], where the dimension of the ith matrix is (arr[i-1] * arr[i]), the task is to find the most efficient way to multiply these matrices together such that the total number of element multiplications is minimum. When two matrices of size m*n and n*p when multiplied, they generate a matrix of size m*p and the number of multiplications performed is m*n*p.

Examples:

Input: arr[] = [2, 1, 3, 4]
Output: 20
Explanation: There are 3 matrices of dimensions 2x1, 1x3, and 3x4, 
Let the input 3 matrices be M1, M2, and M3. There are two ways to multiply ((M1 x M2) x M3) and (M1 x (M2 x M3)), 
Please note that the result of M1 x M2 is a 2 x 3 matrix and result of (M2 x M3) is a 1 x 4 matrix.
((M1 x M2) x M3)  requires (2 x 1 x 3)  +  (2 x 3 x 4) = 30 
(M1 x (M2 x M3))  requires (1 x 3 x 4) +  (2 x 1 x 4) = 20 
The minimum of these two is 20.

Input: arr[] = [1, 2, 3, 4, 3]
Output: 30
Explanation: There are 4 matrices of dimensions 1×2, 2×3, 3×4, 4×3. Let the input 4 matrices be M1, M2, M3 and M4. The minimum number of multiplications are obtained by ((M1M2)M3)M4. The minimum number is 1*2*3 + 1*3*4 + 1*4*3 = 30

Input: arr[] = [3, 4]
Output: 0
Explanation: As there is only one matrix so, there is no cost of multiplication.



HW-2

Count number of ways to cover a distance

Given a distance 'dist', count total number of ways to cover the distance with 1, 2 and 3 steps. 

Examples: 

Input: n = 3
Output: 4
Explanation: Below are the four ways
=> 1 step + 1 step + 1 step
=> 1 step + 2 step
=> 2 step + 1 step
=> 3 step



Input: n = 4
Output: 7
Explanation: Below are the four ways
=> 1 step + 1 step + 1 step + 1 step
=> 1 step + 2 step + 1 step
=>  2 step + 1 step + 1 step 
=>  1 step + 1 step + 2 step
=>  2 step + 2 step
=>  3 step + 1 step
=>  1 step + 3 step



HW-3: Longest Increasing Subsequence (LIS)


Given an array arr[] of size n, the task is to find the length of the Longest Increasing Subsequence (LIS) i.e., the longest possible subsequence in which the elements of the subsequence are sorted in increasing order.

Examples:            

Input: arr[] = [3, 10, 2, 1, 20]
Output: 3
Explanation: The longest increasing subsequence is 3, 10, 20

Input: arr[] = [30, 20, 10]
Output:1
Explanation: The longest increasing subsequences are [30], [20] and [10]

Input: arr[] = [2, 2, 2]
Output: 1
Explanation:  We consider only strictly increasing.

Input: arr[] = [10, 20, 35, 80]
Output: 4
Explanation: The whole array is sorted



HW-4: Word Break


Given a string s and y a dictionary of n words dictionary, check if s can be segmented into a sequence of valid words from the dictionary, separated by spaces.

Examples:

Input:  s = "ilike", dictionary[] = ["i", "like", "gfg"]
Output: true
Explanation: The string can be segmented as "i like".

Input:  s = "ilikegfg", dictionary[] = ["i", "like", "man", "india", "gfg"]
Output: true
Explanation: The string can be segmented as "i like gfg".

Input: "ilikemangoes", dictionary = ["i", "like", "gfg"]
Output: false
Explanation: The string cannot be segmented.



/*


Coin Change - Count Ways to Make Sum


Given an integer array coins[ ] representing different denominations of currency and an integer sum. We need to find the number of ways we can make sum by using different combinations from coins[ ].

Note: Assume that we have an infinite supply of each type of coin. Therefore, we can use any coin as many times as we want.

Examples: 

Input: sum = 4, coins[] = [1, 2, 3]
Output: 4
Explanation: There are four solutions: [1, 1, 1, 1], [1, 1, 2], [2, 2] and [1, 3]

Input: sum = 10, coins[] = [2, 5, 3, 6]
Output: 5
Explanation: There are five solutions: 
[2, 2, 2, 2, 2], [2, 2, 3, 3], [2, 2, 6], [2, 3, 5] and [5, 5]



int count(vector<int>& coins, int sum) {
    int n = coins.size();

    vector<vector<int> > dp(n + 1, vector<int>(sum + 1, 0));

    dp[0][0] = 1;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= sum; j++) {

           
            dp[i][j] += dp[i - 1][j];

            if ((j - coins[i - 1]) >= 0) {

                
                dp[i][j] += dp[i][j - coins[i - 1]];
            }
        }
    }
    return dp[n][sum];

*/


/*

Longest Common Subsequence (LCS)


Given two strings, s1 and s2, the task is to find the length of the Longest Common Subsequence. If there is no common subsequence, return 0. A subsequence is a string generated from the original string by deleting 0 or more characters, without changing the relative order of the remaining characters.

For example, subsequences of "ABC" are "", "A", "B", "C", "AB", "AC", "BC" and "ABC". In general, a string of length n has 2n subsequences.

Examples:

Input: s1 = "ABC", s2 = "ACD"
Output: 2
Explanation: The longest subsequence which is present in both strings is "AC".

Input: s1 = "AGGTAB", s2 = "GXTXAYB"
Output: 4
Explanation: The longest common subsequence is "GTAB".

Input: s1 = "ABC", s2 = "CBA"
Output: 1
Explanation: There are three longest common subsequences of length 1, "A", "B" and "C".



    int m = s1.size();
    int n = s2.size();
    
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
    
    
     for (int i = 1; i <= m; ++i) 
     {
        for (int j = 1; j <= n; ++j) 
        {
            if (s1[i - 1] == s2[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    
    
    
     return dp[m][n];

*/

        

/*

Subset Sum Problem


Given an array arr[] of non-negative integers and a value sum, the task is to check if there is a subset of the given array whose sum is equal to the given sum. 

Examples: 

Input: arr[] = [3, 34, 4, 12, 5, 2], sum = 9
Output: True
Explanation: There is a subset (4, 5) with sum 9.

Input: arr[] = [3, 34, 4, 12, 5, 2], sum = 30
Output: False
Explanation: There is no subset that add up to 30.



 int n = arr.size();
 
 
   vector<vector<bool>> dp(n + 1, vector<bool>(sum + 1, false));

  for (int i = 0; i <= n; i++)
    dp[i][0] = true;
    
    
    
    
    for (int i = 1; i <= n; i++) {
      
        for (int j = 1; j <= sum; j++) 
        {
            if (j < arr[i - 1]) {
              
                    dp[i][j] = dp[i - 1][j]; 
            }
            else {
              
                dp[i][j] = dp[i - 1][j] 
                || dp[i - 1][j - arr[i - 1]];
            }
        }
                
     return dp[n][sum];

*/


/*

0/1 Knapsack Problem


Given two arrays, val[] and wt[], where each element represents the value and weight of an item respectively, also given an integer W representing the maximum capacity of the knapsack (the total weight it can hold).Put the items into the knapsack such that the sum of values associated with them is the maximum possible, without exceeding the capacity W.

Note: We can either include an item completely or exclude it entirely - we cannot include a fraction of an item.

Examples:

Input:  W = 4, val[] = [1, 2, 3], wt[] = [4, 5, 1]
Output: 3
Explanation: There are two items with weight less than or equal to 4. If we select the item with weight 4, the possible value is 1, and if we select the item with weight 1, the possible value is 3. Hence, the maximum possible value is 3. We cannot put both items with weights 4 and 1 together because the capacity of the bag is 4.

Input: W = 3, val[] = [1, 2, 3], wt[] = [4, 5, 6]
Output: 0 
Explanation: All the item weights are greater than the knapsack capacity.

*/

/*

    int n = wt.size();
    vector<vector<int>> dp(n + 1, vector<int>(W + 1));
    
     for (int i = 0; i <= n; i++) 
     {
        for (int j = 0; j <= W; j++) {
            
             if (i == 0 || j == 0)
                dp[i][j] = 0;
            else {
                int pick = 0;
                
                 if(wt[i - 1] <= j)
                    pick = val[i - 1] + dp[i - 1][j - wt[i - 1]];
                    
                    
                int notPick = dp[i - 1][j];
                
                dp[i][j] = max(pick, notPick);
            }
        }
                    
                    
        return dp[n][W];
     }
                
  */
  




/*

HW - 3: Reverse a String using Stack

Given a string str, the task is to reverse it using stack. 

*/

/*

int main()
{
    string s= "Aditya Jain";
    string s1 = "";
    
    stack<char> st;
    
    for(char c: s)
    {
        st.push(c);
    }
    
    
    while(!st.empty())
    {
        s1 += st.top();
        st.pop();
    }
    
    cout << s1 << endl;
}

*/


/*

HW - 2 : Delete middle element of a stack

Given a stack with push(), pop(), and empty() operations, The task is to delete the middle element of it without using any additional data structure.

Input: s = [10, 20, 30, 40, 50]
Output: [50, 40, 20, 10]
Explanation: The bottom-most element will be 10 and the top-most element will be 50. Middle element will be element at index 3 from bottom, which is 30. Deleting 30, stack will look like [10, 20, 40, 50].

Input: s = [5, 8, 6, 7, 6, 6, 5, 10, 12, 9]
Output: [9, 12, 10, 5, 6, 7, 6, 8, 5]

*/



/*

// TC: O(n), SC: O(n)

    int n = st.size();
    stack<int> tempSt;
    int count = 0;

    while (count < n / 2) {
        int c = st.top();
        st.pop();
        tempSt.push(c);
        count++;
    }

    st.pop();

    while (!tempSt.empty()) {
        st.push(tempSt.top());
        tempSt.pop();
    }
    
     while (!st.empty()) {
        int p = st.top();
        st.pop();
        cout << p << " ";
    }
    
*/ 
    
    
/*
    vector<int> v;
    
    while(!st.empty()) 
    {
        v.push_back(st.top());
        st.pop();
    }


    int mid = size / 2;


    v.erase(v.begin() + mid);


     for(int i = v.size() - 1; i >= 0; i--) 
     {
        st.push(v[i]);
    }
}
*/



/*

HW - 1 : Reverse individual words


Given string str, we need to print the reverse of individual words.

Examples:

Input: Hello World
Output: olleH dlroW
Explanation: Each word in "Hello World" is reversed individually, preserving the original order, resulting in "olleH dlroW".

hint: use a stack.



int main()
{
    stack<char> st;
    string result = "";
    int n = str.length();
    
    for (int i = 0; i < n; i++) 
    {
        if (str[i] != ' ') {
            st.push(str[i]);
        } else {
            while (!st.empty()) {
                result += st.top();
                st.pop();
            }
            result += " "; 
        }
     
    }
    
    while (!st.empty()) {
                result += st.top();
                st.pop();
            }
        
        return result;    
}       

*/
