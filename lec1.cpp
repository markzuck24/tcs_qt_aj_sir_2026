#include <bits/stdc++.h>
using namespace std;

/*

Move all Zeros to End of Array

Given an array of integers arr[], move all the zeros to the end of the array while maintaining the relative order of all non-zero elements.

Examples: 

Input: arr[] = [1, 2, 0, 4, 3, 0, 5, 0]
Output: [1, 2, 4, 3, 5, 0, 0, 0]
Explanation: There are three 0s that are moved to the end.

Input: arr[] = [10, 20, 30]
Output: [10, 20, 30]
Explanation: No change in array as there are no 0s.

Input: arr[] = [0, 0]
Output: [0, 0]
Explanation: No change in array as there are all 0s.

1 - with using extra array
2- without using extra array
*/

/*

    int temp[n];

    int j = 0;

    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
            temp[j++] = arr[i];
    }

    
    while (j < n)
    {
        temp[j++] = 0;
    }

    
    for (int i = 0; i < n; i++)
        arr[i] = temp[i];
        
*/

int main()
{
    int a[] = {3,0,6,7,5,0,0,3,0,4};
    
    int n = sizeof(a)/sizeof(a[0]);
    
    int j =0;
    
    for(int i=0; i<n; i++)
    {
        if(a[i] != 0)
        {
            a[j++] = a[i];    
        }
        
    }
    
    for(int k=j;k<n;k++)
    {
        a[k] = 0;
    }
    
    for(int i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }
    
}
/*

Missing ranges of numbers


You have an inclusive interval [lower, upper] and a sorted array of unique integers arr[], all of which lie within this interval. A number x is considered missing if x is in the range [lower, upper] but not present in arr. Your task is to return the smallest set of sorted ranges that includes all missing numbers, ensuring no element from arr is within any range, and every missing number is covered exactly once.

Examples

Input: arr[] = [14, 15, 20, 30, 31, 45], lower = 10, upper = 50
Output: [[10, 13], [16, 19], [21, 29], [32, 44], [46, 50]]
Explanation: These ranges represent all missing numbers between 10 and 50 not present in the array

Input: arr[] = [-48, -10, -6, -4, 0, 4, 17], lower = -54, upper = 17
Output: [[-54, -49], [-47, -11], [-9, -7], [-5, -5], [-3, -1], [1, 3], [5,16]]
Explanation: These ranges represent all missing numbers between -54 and 17 not present in the array.


   if (lower < arr[0])
        res.push_back({lower, arr[0] - 1});
        
        
     for (int i = 0; i < n - 1; ++i)
        if (arr[i + 1] - arr[i] > 1)
            res.push_back(arr[i] +1 , arr[i+1] -1)
       
       
        
  if (n > 0 && upper > arr[n - 1])
        res.push_back({arr[n - 1] + 1, upper});
        
*/


/*

Reverse an Array in groups of given size


Given an array arr[] and an integer k, find the array after reversing every subarray of consecutive k elements in place. If the last subarray has fewer than k elements, reverse it as it is. Modify the array in place, do not return anything.

Examples: 

Input: arr[] = [1, 2, 3, 4, 5, 6, 7, 8], k = 3
Output: [3, 2, 1, 6, 5, 4, 8, 7]
Explanation: Elements is reversed: [1, 2, 3] → [3, 2, 1], [4, 5, 6] → [6, 5, 4], and the last group [7, 8](size < 3) is reversed as [8, 7]. 

Input: arr[] = [1, 2, 3, 4, 5], k = 3
Output: [3, 2, 1, 5, 4]
Explanation: First group consists of elements 1, 2, 3. Second group consists of 4, 5.

Input: arr[] = [5, 6, 8, 9], k = 5
Output: [9, 8, 6, 5]
Explanation: Since k is greater than array size, the entire array is reversed.


*/

/*
 
    int n = arr.size();  

    for (int i = 0; i < n; i += k) {
        int left = i;

        
        int right = min(i + k - 1, n - 1);

        
        while (left < right)  
        {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            
            left++;
            right--;
        }
    }
*/
    
/*

Missing and Repeating in an Array


Given an unsorted array arr[] of size n, containing elements from the range 1 to n, it is known that one number in this range is missing, and another number occurs twice in the array, find both the duplicate number and the missing number.

Examples: 

Input: arr[] = [3, 1, 3]
Output: [3, 2]
Explanation: 3 is occurs twice and 2 is missing.

Input: arr[] = [4, 3, 6, 2, 1, 1]
Output: [1, 5] 
Explanation: 1 is occurs twice and 5 is missing.
*/


/*
    int n = arr.size();  
  
    vector<int> freq(n + 1, 0); 
    int repeating = -1, missing = -1;
    
    
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
    
    
    for (int i = 1; i <= n; i++) {
        if (freq[i] == 0) missing = i;
        else if (freq[i] == 2) repeating = i;
    }
    
    return {repeating, missing};
}
*/



/*

Second Largest Element in an Array


Given an array of distinct positive integers arr[] of size n, the task is to find second largest distinct element in the array.




Input: arr[] = [12, 35, 2, 10, 34, 1]
Output: 34
Explanation: The largest element of the array is 35 and the second largest element is 34.

Input: arr[] = [10, 5, 1]
Output: 5
Explanation: The largest element of the array is 10 and the second largest element is 5.

1- Brute force logic: sort 
*/


//TC: O(nlogn)
/*

int main()
{
     int a[] = {1,2,3,7,8,4};
     //op: 7
     
     int n = sizeof(a)/sizeof(a[0]);
     
    sort(a, a+n);
    
    cout << a[n-2] << endl;
    
}
*/


#include <iostream>
#include <vector>
using namespace std;
int SecLargest(vector<int> &arr) {
    int n = arr.size();

    int largest = -1, secondLargest = -1;

    
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest)
            largest = arr[i];
    }

    
    for (int i = 0; i < n; i++) {

        
        if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}



/*

Given an array of int, print the maximum element in it.
*/

/*

int main()
{
    int a[] = {1,2,3,7,8,4};
    // int a[] = {-5,-6,-3,-8};
    
    int mx = INT_MIN;
    int n = sizeof(a)/sizeof(a[0]);
    
    for(int i=0; i<n; i++)
    {
        mx = max(mx, a[i]);
    }
    
    cout << mx << endl;
    
}
*/

/*

Rotate an Array by d - Counterclockwise or Left

Given an array of integers arr[] of size n, the task is to rotate the array elements to the left by d positions.

Examples:

Input: arr[] = {1, 2, 3, 4, 5, 6}, d = 2
Output: {3, 4, 5, 6, 1, 2}
Explanation: After first left rotation, arr[] becomes {2, 3, 4, 5, 6, 1} and after the second rotation, arr[] becomes {3, 4, 5, 6, 1, 2}

Input: arr[] = {1, 2, 3}, d = 4
Output: {2, 3, 1}
Explanation: The array is rotated as follows:

After first left rotation, arr[] = {2, 3, 1}
After second left rotation, arr[] = {3, 1, 2}
After third left rotation, arr[] = {1, 2, 3}
After fourth left rotation, arr[] = {2, 3, 1}


1, 2, 3, 4, 5, 6, d= 2
reverse(0,1) --> 2, 1, 3, 4, 5, 6
reverse(2,5) --> 2, 1, 6, 5, 4, 3
reverse(0,5) --> 3, 4, 5, 6, 1, 2
*/

/*

class Main {
    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4};
        leftShift(arr, 1);
        
        for (int num : arr)
            System.out.print(num + " ");
    }

    private static void reverse(int[] arr, int l, int r) {
        while (l < r) {
            int temp = arr[l];
            arr[l] = arr[r];
            arr[r] = temp;
            l++;
            r--;
        }
    }

    private static void leftShift(int[] arr, int d) {
        int n = arr.length;
        d = d % n;

        reverse(arr, 0, d - 1);
        reverse(arr, d, n - 1);
        reverse(arr, 0, n - 1);
    }
}
*/

/*

Array Reverse:

Reverse an array arr[]. Reversing an array means rearranging the elements such that the first element becomes the last, the second element becomes second last and so on.

Examples:

Input: arr[] = [1, 4, 3, 2, 6, 5]  
Output:  [5, 6, 2, 3, 4, 1]
Explanation: The first element 1 moves to last position, the second element 4 moves to second-last and so on.

Input: arr[] = [4, 5, 1, 2]
Output: [2, 1, 5, 4]
Explanation: The first element 4 moves to last position, the second element 5 moves to second last and so on.


1 - can use additional array for doing this. TC: O(n), SC: O(n)
2 - without using any additional array: TC: O(n) SC: O(1)
*/

/*
int main() 
{
        int a[] = {1,2,3,7,8,4};
        int n = sizeof(a)/sizeof(a[0]);
        int b[n];
        
        for(int i=0 ; i<n; i++)
        {
            b[i] = a[n-1-i];
        }
        
        for(int i=0; i<n; i++)
        {
            cout << b[i] << " ";
        }
}
    
*/
/*

int main() 
{
        int arr[] = {1,2,3,7,8,4};
        int left = 0;
        int n = sizeof(arr)/sizeof(arr[0]);
        int right = n-1;
        // cout << n << endl;
        while (left < right) 
        {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;

            left++;
            right--;
        }
        
        for(int i=0; i<n; i++)
        {
            cout << arr[i] << " ";
        }
    }
    */
    

