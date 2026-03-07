#include <bits/stdc++.h>
using namespace std;

/*

HW-3 Pair Sum in a Sorted and Rotated Array


Given an array arr[] of size n, which is sorted and then rotated around an unknown pivot, the task is to check whether there exists a pair of elements in the array whose sum is equal to a given target value.

Examples : 

Input: arr[] = [11, 15, 6, 8, 9, 10], target = 16
Output: true
Explanation: There is a pair (6, 10) with sum 16.

Input: arr[] = [11, 11, 15, 26, 38, 9, 10], target = 35
Output: true
Explanation: There is a pair (26, 9) with sum 35.

Input: arr[] = [9, 10, 10, 11, 15, 26, 38], target = 45
Output: false
Explanation: There is no pair with sum 45.



HW-2 Smallest subarray with sum greater than a given value


Given an array arr[] of integers and a number x, the task is to find the smallest subarray with a sum strictly greater than x.

Examples:

Input: x = 51, arr[] = [1, 4, 45, 6, 0, 19]
Output: 3
Explanation: Minimum length subarray is [4, 45, 6]

Input: x = 100, arr[] = [1, 10, 5, 2, 7]
Output: 0
Explanation: No subarray exist




HW-1 Intersection of Two Arrays with Distinct Elements



Given two arrays a[] and b[] with distinct elements of size n and m respectively, the task is to find intersection (or common elements) of the two arrays. We can return the answer in any order.

Note: Intersection of two arrays can be defined as a set containing distinct common elements between the two arrays.



nput: a[] = { 5, 6, 2, 1, 4 }, b[] = { 7, 9, 4, 2 }
Output: { 2, 4 }
Explanation: The only common elements in both arrays are 2 and 4.

Input: a[] = { 4, 5, 2, 3 } , b[] = { 1, 7 }
Output: { }
Explanation: There are no common elements in array a[] and b[]


*/

/*
Reverse a string preserving space positions


Given a string s, the task is to reverse the given string while preserving the position of spaces.

Input : "abc de"
Output: edc ba
Explanation : Reversing the characters without spaces "edcba" and inserting space at original place"edc ba"

Input  "Help others"
Output: sreh topleH
Explanation : Reversing the characters without spaces "srehtopleH" and inserting space at original place"sreh topleH"


//TC: O(n), SC: O(1)
    int start = 0;
    int end = n - 1;
    
    while (start < end) {
        
         if (str[start] == ' ') {
            start++;
            continue;
        }
        
        else if (str[end] == ' ') {
            end--;
            continue;
        }
        
        else {
            swap(str[start], str[end]);
            start++;
            end--;
        }
    }
    
    
    }
*/



/*
public class P6 {

    static String reverseStr(String str){

        char[] result = new char[str.length()];


        for(int i = 0; i < str.length(); i++){
            if(str.charAt(i) == ' '){
                result[i] = ' ';
            }
        }

        int j = str.length() - 1;

        for(int i = 0; i < str.length(); i++){

            if(str.charAt(i) != ' '){

                while(result[j] == ' '){
                    j--;
                }

                result[j] = str.charAt(i);
                j--;
            }
        }

        return new String(result);
    }

    public static void main(String[] args) {

        String str = "ab cd ef";

        System.out.println(reverseStr(str));

    }
}
*/



/*

3 Sum - Triplet Sum in Array

Given an array arr[] and an integer sum, check if there is a triplet in the array which sums up to the given target sum.


Examples: 

Input: arr[] = [1, 4, 45, 6, 10, 8], target = 13
Output: true
Explanation: The triplet [1, 4, 8] sums up to 13

Input: arr[] = [1, 2, 4, 3, 6, 7], target = 10 
Output: true
Explanation: The triplets [1, 3, 6] and [1, 2, 7] both sum to 10. 

Input: arr[] = [40, 20, 10, 3, 6, 7], sum = 24 
Output: false
Explanation:  No triplet in the array sums to 24.


1- Brute Force:  TC: O(n^3)
2 - TC: O(n^2) , SC: O(n)
3 -Sorting + two pointer- TC: O(n^2) , SC: O(1)

    
    sort(a, a+n)
    
     for (int i = 0; i < n - 2; i++) {
         
         int l = i + 1, r = n - 1;
         
         int requiredSum = target - arr[i];


         while(l < r) 
         {
            if(arr[l] + arr[r] == requiredSum)
                return true;
            if(arr[l] + arr[r] < requiredSum)
                l++;
            else if(arr[l] + arr[r] > requiredSum)
                r--;
        }
    } 
*/

    
/*


 for (int i = 0; i < n ; i++) {
     
      for (int j = i + 1; j < n ; j++) {
          
           for (int k = j + 1; k < n; k++) { 
                if (arr[i] + arr[j] + arr[k] == target)
                    return true; 
            } 
        } 
    } 
    
*/

    
/*
Maximum sum of a subarray of size k


Given an array of integers arr[] and an integer k, find the maximum possible sum among all contiguous subarrays of size exactly k.
A subarray is a sequence of consecutive elements from the original array. Return the maximum sum that can be obtained from any such subarray of length k.

Examples: 

Input  : arr[] = [100, 200, 300, 400],  k = 2
Output : 700
Explanation: We get maximum sum by adding subarray [300,400] of size 2

Input  : arr[] = [1, 4, 2, 10, 23, 3, 1, 0, 20], k = 4 
Output : 39
Explanation: We get maximum sum by adding subarray [4, 2, 10, 23] of size 4.

Input  : arr[] = [2, 3], k = 1
Output : 3
Explanation: The subarrays of size 1 are [2] and [3]. The maximum sum is 3.

TC: O(n), SC: O(1)



public class P4 {
    public static void main(String[] args) {

        int[] arr = {1,2,4,5,1,7};
        int op = maxSub(arr,2);
        System.out.println(op);


    }

    static int maxSub(int arr[] , int k ){
        int n = arr.length;

        if(k>n) return -1 ;

        int winSum = 0 ;

        for(int i = 0 ; i<k ; i++){
            winSum += arr[i] ;

        }

        int maxSum = winSum ;

        for(int i = k ; i<n ; i++){
            winSum = winSum - arr[i-k] + arr[i] ;

            if(winSum>maxSum){
                maxSum = winSum ;
            }
        }

        return maxSum ;
    }
}

*/


/*

//TC: O(n*k)

  for (int i = 0; i <= n - k; i++) {
        int currSum = 0;
        
        //window of size k starting at i.
        for (int j = 0; j < k; j++) {
            currSum += arr[i + j];
        }
        
         maxSum = max(maxSum, currSum);
    }
*/


/*

Smallest window containing 0, 1 and 2

Given a string S of size N consisting of the characters 0, 1 and 2, the task is to find the length of the smallest substring of string S that contains all the three characters 0, 1 and 2. If no such substring exists, then return -1.

Examples:

Input: S = "01212"
Output: 3
Explanation: The substring 012 is the smallest substring that contains the characters 0, 1 and 2.

Input:  S = "12121"
Output: -1
Explanation:  As the character 0 is not present in the string S, therefore no substring containing all the three characters 0, 1 and 2 exists. Hence, the answer is -1 in this case.

1- Brute Force:


 bool zero = false, one = false, two = false;
int flag = 0;
    int n = S.length();

 for (int i = 0; i < n; i++) 
 {
        if (S[i] == '0') {
            zero = true;
            zeroindex = i;
        }
        else if (S[i] == '1') {
            one = true;
            oneindex = i;
        }
        else if (S[i] == '2') {
            two = true;
            twoindex = i;
        }

     
        if (zero and one and two)
        {
            flag = 1;
            res = min(res,
                      max({ zeroindex, oneindex, twoindex })
                          - min({ zeroindex, oneindex, twoindex }) + 1);
        }
        }
            
    
    if(flag == 0)
    {
        return -1;
    }
    
    return res;
    
*/


/*

class Solution {
    public int smallestSubstring(String s) {
        
        int n = s.length();
        
        int left = 0;
        int minLen = Integer.MAX_VALUE;
        
        int count0 = 0, count1 = 0, count2 = 0;
        
        for(int right = 0; right < n; right++){
            
            char ch = s.charAt(right);
            
            if(ch == '0') count0++;
            if(ch == '1') count1++;
            if(ch == '2') count2++;
            
            while(count0 > 0 && count1 > 0 && count2 > 0){
                
                minLen = Math.min(minLen, right - left + 1);
                
                char leftChar = s.charAt(left);
                
                if(leftChar == '0') count0--;
                if(leftChar == '1') count1--;
                if(leftChar == '2') count2--;
                
                left++;
            }
        }
        
        if(minLen == Integer.MAX_VALUE) return -1;
        
        return minLen;
    }
}
*/



/*

Product of Array Except Self


Given an array arr[] of n integers, construct a product array res[] (of the same size) such that res[i] is equal to the product of all the elements of arr[] except arr[i]. 



Example: 

Input: arr[] = [10, 3, 5, 6, 2]
Output: [180, 600, 360, 300, 900]
Explanation: 
For i=0, res[i] = 3 * 5 * 6 * 2 is 180.
For i = 1, res[i] = 10 * 5 * 6 * 2 is 600.
For i = 2, res[i] = 10 * 3 * 6 * 2 is 360.
For i = 3, res[i] = 10 * 3 * 5 * 2 is 300.
For i = 4, res[i] = 10 * 3 * 5 * 6 is 900.

Input: arr[] = [12, 0]
Output: [0, 12]
Explanation: 
For i = 0, res[i] = 0.
For i = 1, res[i] = 12.


1- Brute force: 



2 - Optimised: TC: O(n), SC: O(1) 
count of 0s:

0- prod of all / a[i]
1- set all elements to 0, except where 0 is present - product of all the non-zero elements.
>1- all the elements will be 0.



    int zeros = 0, idx = -1;
    int prod = 1;
    
    int n = sizeof(a)/sizeof(a[0]);
     for (int i = 0; i <n; i++) {
        if (arr[i] == 0) {
            zeros++;
            idx = i;
        } else {
            prod *= arr[i];
        }
    }
    
    int res[n] = {0};
    
    if (zeros == 0) {
        for (int i = 0; i < arr.size(); i++)
            res[i] = prod / arr[i];
    }
    
    else if (zeros == 1)
        res[idx] = prod;
        
   
   return res;
    
    
*/
  
    
/*

TC : O(n), SC: O(n)

public class P3 {
    public static void main(String[] args) {

        int[] arr = {2,4,1,5,7,3};
        int n = arr.length;

        int[] result = new int[n];

        result[0] = 1;

        
        for(int i = 1; i < n; i++){
            result[i] = result[i-1] * arr[i-1];
        }

        int suffix = 1;

       
        for(int i = n-1; i >= 0; i--){
            result[i] = result[i] * suffix;
            suffix = suffix * arr[i];
        }

        for(int i = 0; i < n; i++){
            System.out.print(result[i] + " ");
        }
    }
}
*/



/* This code fails when there are 0s in the array
public class P3 {
    public static void main(String[] args) {

        int[] arr = {2,0,7,3};
        //expected output: {0, 42, 0, 0}
        int[] arr2 = new int[arr.length];

        int prd = 1;

        for(int i = 0; i < arr.length; i++){
            prd = prd * arr[i];
        }

        for(int i = 0; i < arr.length; i++){
            arr2[i] = prd / arr[i];
        }

        for(int j = 0; j < arr2.length; j++){
            System.out.print(arr2[j] + " ");
        }
    }
}
*/
