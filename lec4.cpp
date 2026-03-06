#include <bits/stdc++.h>
using namespace std;


/*

Sentence Palindrome


Given a sentence s, determine whether it is a palindrome sentence or not. A palindrome sentence is a sequence of characters that reads the same forward and backward after:

Converting all uppercase letters to lowercase.
Removing all non-alphanumeric characters (i.e., ignore spaces, punctuation, and symbols).

Examples: 
part-1 - only alphabets are involved. (uppercase + lowercase)

Input: s = "Too hot to hoot."
Output: true
Explanation: If we remove all non-alphanumeric characters and convert all uppercase letters to lowercase, string s will become "toohottohoot" which is a palindrome.


part-2 : any characters can be present.

Input: s = "Abc 012..##  10cbA"
Output: true
Explanation: If we remove all non-alphanumeric characters and convert all uppercase letters to lowercase, string s will become "abc01210cba" which is a palindrome.

Input: s = "ABC $. def01ASDF.."
Output: false
Explanation: If we remove all non-alphanumeric characters and convert all uppercase letters to lowercase, string s will become "abcdef01asdf" which is not a palindrome.

*/
   
   //TC: O(n), SC: O(1)
   
   int i = 0, j = s.length() - 1;
   
    while (i < j) {
        
        
         if (!isalnum(s[i]))
            i++;
         else if (!isalnum(s[j]))
            j--;
         else if (tolower(s[i]) == tolower(s[j]))
            i++, j--;
        else
            return false;
    }
/*

    TC: O(n), SC: O(n)

    string s1 = "";
    for (char ch : s) {
        if (isalnum(ch)) {
            s1.push_back(tolower(ch));
        }
    }
    
    string rev = s1;
    reverse(rev.begin(), rev.end());
    
    if(s1 == rev)
    {
        return True;
    }
    else
    {
        return False;
    }

*/



/*

2 Sum - Pair Sum Closest to Target


Given an array arr[] of n integers and an integer target, find a pair of elements from the array such that the sum of the pair is closest to the given target.
Note:

Return the pair in sorted order.
If multiple pairs have the same closest sum, return the one with the maximum absolute difference (i.e., |a - b| is largest).
If no valid pair exists (i.e., array has fewer than 2 elements), return an empty array.
Examples:

Input: arr[] = [10, 30, 20, 5], target = 25
Output: [5, 20]
Explanation: Out of all the pairs, [5, 20] has sum = 25 which is closest to 25.

Input: arr[] = [5, 2, 7, 1, 4], target = 10
Output: [2, 7]
Explanation: As (4, 7) and (2, 7) both are closest to 10, but absolute difference of (2, 7) is 5 and (4, 7) is 3. Hence, [2, 7] has maximum absolute difference and closest to target.

Input: arr[] = [10], target = 10
Output: []
Explanation: As the input array has only 1 element, return an empty array.


1- Brute Force: TC: O(n^2)
2 - Sorting : O(nlogn)


    sort(a, a+n);
    
    int left = 0, right = n - 1;

    while (left < right) {
        int currSum = arr[left] + arr[right];
        
         if (abs(target - currSum) < minDiff) {
            minDiff = abs(target - currSum);
            res = {arr[left], arr[right]};
        }
        
        
         if (currSum < target)
            left++;
            
        else if (currSum > target)
            right--;
            
        else
            return res;
    }
 */
 
        
/*

int minDiff = INT_MAX;

  for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            
            int currSum = arr[i] + arr[j];
            int currDiff = abs(currSum - target);
            
            
             if (currDiff < minDiff) 
             {
                minDiff = currDiff;
                res = { min(arr[i], arr[j]), max(arr[i], arr[j]) };
            }
            
             else if (currDiff == minDiff && 
                       (res[1] - res[0]) < abs(arr[i] - arr[j])) {
                res = { min(arr[i], arr[j]), max(arr[i], arr[j]) };
            }
        }
    }
*/

    

/*

Two Sum - Pair with given Sum

Given an array arr[] of n integers and a target value, check if there exists a pair  whose sum equals the target. 


Input: arr[] = [0, -1, 2, -3, 1], target = -2
Output: true
Explanation: There is a pair (1, -3) with the sum equal to given target, 1 + (-3) = -2.

Input: arr[] = [1, -2, 1, 0, 5], target = 0
Output: false
Explanation: There is no pair with sum equals to given target.


1- Brute Force: TC: O(n^2), SC: O(1)
2 - Sorting + Binary Search
3 - Sorting + 2 pointer approach: TC: O(nlogn)
4 - TC: O(n)


*/


/*
int main()
{
      unordered_set<int> s;
      int n = sizeof(a)/sizeof(a[0]);
      
        for (int i = 0; i < n; i++)
        {

            int complement = target - arr[i];
            
            if (s.find(complement) != s.end())
                return true;
                
                
            s.insert(arr[i]);
            
        }
            
    return false;
}
 */      
        

/*

    sort(a, a+n);
    int n = sizeof(a)/sizeof(a[0]);
    
    int left = 0, right = n-1;
    
    
     while (left < right)
     {
        int sum = arr[left] + arr[right];
        
         if (sum == target)
            return true;
        
        else if(sum < target)
        {
            left++;
        }
        else
        {
            right--;
        }
     }    
            
     
      return false;   
*/


/*

    //TC: O(n^2), SC: O(1)
    
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        
         for (int j = i + 1; j < n; j++) {
              
              if (arr[i] + arr[j] == target) 
              {
                return true;
            }
        }
    }
    
*/


        
        

/*

Sort an array of 0s, 1s and 2s


Given an array arr[] consisting of only 0s, 1s, and 2s. The objective is to sort the array, i.e., put all 0s first, then all 1s and all 2s in last.

Examples:

Input: arr[] = [0, 1, 2, 0, 1, 2]
Output: [0, 0, 1, 1, 2, 2]
Explanation: [0, 0, 1, 1, 2, 2] has all 0s first, then all 1s and all 2s in last.

Input: arr[] = [0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1]
Output: [0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2]
Explanation: {0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2} has all 0s first, then all 1s and all 2s in last.

1- Sorting : TC: O(nlogn)
2 - Optimised: TC: O(n)
*/

/*
//TC: O(nlogn)

int main()
{
    int a[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    
    int n = sizeof(a)/sizeof(a[0]);
    
    sort(a, a+n);
    
    for(int i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }
}

*/

/*

//TC: O(n), SC: O(1)

    int n = arr.size();
    
    int c0 = 0, c1 = 0, c2 = 0;

    // count 0s, 1s and 2s
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0)
            c0 += 1;
        else if (arr[i] == 1)
            c1 += 1;
        else
            c2 += 1;
    }

    int idx = 0;
    
     for (int i = 0; i < c0; i++)
        arr[idx++] = 0;
        
     for (int i = 0; i < c1; i++)
        arr[idx++] = 1;
        
    for (int i = 0; i < c2; i++)
        arr[idx++] = 2;
        
 */
  
  
        
        

/*

Remove duplicates from Sorted Array


Given a sorted array arr[] of size n, the goal is to rearrange the array so that all distinct elements appear at the beginning in sorted order. Additionally, return the length of this distinct sorted subarray.

Note: The elements after the distinct ones can be in any order and hold any value, as they don't affect the result.

Examples: 

Input: arr[] = [2, 2, 2, 2, 2]
Output: [2]
Explanation: All the elements are 2, So only keep one instance of 2.

Input: arr[] = [1, 2, 2, 3, 4, 4, 4, 5, 5]
Output: [1, 2, 3, 4, 5]

Input: arr[] = [1, 2, 3]
Output: [1, 2, 3]
Explanation : No change as all elements are distinct.

TC: O(n), SC: O(n)

int main() {
	
	unordered_set<int> s; 
	
	
	int idx = 0;  
    int n = arr.size();
    
    for (int i = 0; i < n; i++) 
    {
        if (s.find(arr[i]) == s.end()) 
        { 
            s.insert(arr[i]);  
            arr[idx++] = arr[i];  
        }
    }

}
*/

