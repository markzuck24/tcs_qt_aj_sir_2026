#include <bits/stdc++.h>
using namespace std;


HW - 1 : Reverse individual words


Given string str, we need to print the reverse of individual words.

Examples:

Input: Hello World
Output: olleH dlroW
Explanation: Each word in "Hello World" is reversed individually, preserving the original order, resulting in "olleH dlroW".

hint: use a stack.





HW - 2 : Delete middle element of a stack

Given a stack with push(), pop(), and empty() operations, The task is to delete the middle element of it without using any additional data structure.

Input: s = [10, 20, 30, 40, 50]
Output: [50, 40, 20, 10]
Explanation: The bottom-most element will be 10 and the top-most element will be 50. Middle element will be element at index 3 from bottom, which is 30. Deleting 30, stack will look like [10, 20, 40, 50].

Input: s = [5, 8, 6, 7, 6, 6, 5, 10, 12, 9]
Output: [9, 12, 10, 5, 6, 7, 6, 8, 5]



HW - 3: Reverse a String using Stack

Given a string str, the task is to reverse it using stack. 

/*
Sum of all Subarrays


Given an integer array arr[], compute the sum of all possible sub-arrays of the array. 
A sub-array is a contiguous part of the array.

Examples: 

Input: arr[] = [1, 4, 5, 3, 2]
Output: 116
Explanation: Sum of all possible subarrays of the array [1, 4, 5, 3, 2] is 116.

Input: arr[] = [1, 2, 3, 4]
Output: 50
Explanation: Sum of all possible subarrays of the array [1, 2, 3, 4] is 50.


Input: arr[] = [1, 2, 4]
Output: 23
1 -> 1
2 -> 2 
4 -> 4
1,2 -> 3
2,4 -> 6
1,2,4 -> 7

*/


/*

//Brute force: TC: O(n^2), SC: O(1)
 for (int i = 0; i < n; i++) {
     
    temp = 0;
    
    for (int j = i; j < n; j++) {
            
            temp += arr[j];
            result += temp;
        }
    }
*/

//Optimised: 
Run a for loop 
for i from [0, n-1]: Add arr[i] * (i+1) * (n-i) into the answer at each iteration
/*

Check if given String is Pangram or not


Given a string s, check if it is Pangram or not. 
A pangram is a sentence containing all letters of the English Alphabet.

Examples: 

Input: s = "The quick brown fox jumps over the lazy dog" 
Output: true
Explanation: The input string contains all characters from 'a' to 'z'.

Input: s = "The quick brown fox jumps over the dog"
Output: false
Explanation: The input string does not contain all characters from 'a' to 'z', as 'l', 'z', 'y' are missing



bool checkPangram(string &s) {

  	for(char ch = 'a'; ch <= 'z'; ch++) {
    	bool found = false;
        int n =s.length();
        
        for(int i = 0; i < n; i++) {
        	if(ch == tolower(s[i])) {
            	found = true;
                break;
            }
        }
      
        if(found == false)
            return false;
    }
    return true;
}
*/

/*

Given an integer n, for every positive integer i <= n, the task is to print,

"FizzBuzz" if i is divisible by 3 and 5,
"Fizz" if i is divisible by 3 and not by 5,
"Buzz" if i is divisible by 5 and not by 3
"i" as a string, if none of the conditions are true.


Examples:

Input: n = 3
Output: ["1", "2", "Fizz"]

Input: n = 10
Output: ["1", "2", "Fizz", "4", "Buzz", "Fizz", "7", "8", "Fizz", "Buzz"]

Input: n = 20
Output: ["1", "2", "Fizz", "4", "Buzz", "Fizz", "7", "8", "Fizz", "Buzz", "11", "Fizz", "13", "14", "FizzBuzz", "16", "17", "Fizz", "19", "Buzz"]



int main() 
{
    int n = 10;
    
    for(int i = 1; i <= n; i++) {
        if(i % 3 == 0 && i % 5 == 0) {
            cout << "FizzBuzz" << endl;
        } 
        else if(i % 3 == 0) {
            cout << "Fizz" << endl;
        } 
        else if(i % 5 == 0) {
            cout << "Buzz" << endl;
        } 
        else {
            cout << i << endl;
        }
    }
    return 0;
}

*/





/*

Check if Strings Are Rotations of Each Other

Given two strings s1 and s2 of equal length, determine whether s2 is a rotation of s1.
A string is said to be a rotation of another if it can be obtained by shifting some leading characters of the original string to its end without changing the order of characters.

Examples: 

Input: s1 = "abcd", s2 = "cdab"
Output: true
Explanation: After 2 right rotations, s1 will become equal to s2.

Input: s1 = "aab", s2 = "aba"
Output: true
Explanation: After 1 left rotation, s1 will become equal to s2.

Input: s1 = "abcd", s2 = "acbd"
Output: false
Explanation: Strings are not rotations of each other.


int main()
{
    string s1 = "abcd", s2 = "cdab";
    string ans = "No";
    
     for (int i = 0; i < n; ++i) {
         
         if(s1 == s2)
         {
             ans = "Yes";
             break;
         }
         
        char last = s1.back();
        s1.pop_back();
        s1 = last + s1;
         
     }
}

*/

/*
String to Integer


Given a string s, convert it into integer format without utilizing any built-in functions. 

Skip any leading whitespaces.
Check for a sign (‘+’ or ‘-‘), default to positive if no sign is present.


eg:
s = "-251"
op: -251


int main()
{
    string s = "251";
    
    int a = 0;
    
    int n = s.length();
    int j=0, sign = 1;
    
    if(s[0] == '-')
    {
        sign = -1;
        j = 1;
    }
    
    for(int i=j; i<n; i++)
    {
        a = a*10 + (s[i]-'0'); 
    }
    
    
    cout << sign*a << endl;
}

*/


/*

Rearrange Array Elements by Sign


Given an array arr[] of size n, the task is to rearrange it in alternate positive and negative manner without changing the relative order of positive and negative numbers. In case of extra positive/negative numbers, they appear at the end of the array.

Note: The rearranged array should start with a positive number and 0 (zero) should be considered as a positive number.

Examples: 

Input:  arr[] = [1, 2, 3, -4, -1, 4]
Output: arr[] = [1, -4, 2, -1, 3, 4]

Input:  arr[] = [-5, -2, 5, 2, 4, 7, 1, 8, 0, -8]
Output: arr[] = [5, -5, 2, -2, 4, -8, 7, 1, 8, 0]


1- Two pointer: optimised:  TC: O(n), SC: O(n)






int main() {
	
	int arr[] = {1, 2, 3, -4, -1, 4};
	
	vector<int> pos, neg;
	int n = arr.size();
	
	
	  for (int i = 0; i < n; i++) {
        if (arr[i] >= 0)
            pos.push_back(arr[i]);
        else
            neg.push_back(arr[i]);
    }
	
	
	int posIdx = 0, negIdx = 0;
    int i = 0;
    
    
     while (posIdx < pos.size() && negIdx < neg.size()) {
        if (i % 2 == 0)
            arr[i++] = pos[posIdx++];
        else 
            arr[i++] = neg[negIdx++];
    }
    
    
     while (posIdx < pos.size())
        arr[i++] = pos[posIdx++];
    
    
     while (negIdx < neg.size())
        arr[i++] = neg[negIdx++];
     
} 
        
    
    

}

*/
