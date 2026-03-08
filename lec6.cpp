#include <bits/stdc++.h>
using namespace std;




HW1

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


HW-2

String to Integer 

Given a string s, convert it into integer format without utilizing any built-in functions.

Skip any leading whitespaces.
Check for a sign (‘+’ or ‘-‘), default to positive if no sign is present.


Input: s = "-123"
Output: -123

Input: s = "   -"
Output: 0
Explanation: No digits are present, therefore 0.



HW-3

Rearrange Array Elements by Sign

Given an array arr[] of size n, the task is to rearrange it in alternate positive and negative manner without changing the relative order of positive and negative numbers. In case of extra positive/negative numbers, they appear at the end of the array.

Note: The rearranged array should start with a positive number and 0 (zero) should be considered as a positive number.

Examples: 

Input:  arr[] = [1, 2, 3, -4, -1, 4]
Output: arr[] = [1, -4, 2, -1, 3, 4]

Input:  arr[] = [-5, -2, 5, 2, 4, 7, 1, 8, 0, -8]
Output: arr[] = [5, -5, 2, -2, 4, -8, 7, 1, 8, 0]




/*


Check if two Strings are Anagrams of each other


Given two non-empty strings s1 and s2 of lowercase letters, determine if they are anagrams — i.e., if they contain the same characters with the same frequencies.


Input: s1 = "allergy", s2 = "allergyy"
Output: false
Explanation: Although the characters are mostly the same, s2 contains an extra 'y' character. Since the frequency of characters differs, the strings are not anagrams.



Input: s1 = "listen", s2 = "lists"
Output: false
Explanation: The characters in the two strings are not the same — some are missing or extra. So, they are not anagrams.


s1 = "ate" s2 = "tea"

approach1:
m1 - 
a-1
t-1
e-1

m2-
t-1
e-1
a-1 


 if(s1.size() != s2.size()){
        return false;
    }
    
    
unordered_map<char, int> charCount;



 for(char ch: s1) 
    charCount[ch] += 1;
    
    
 for(char ch: s2) 
    	charCount[ch] -= 1;
    	
    	
 for (auto& pair : charCount) {
        if (pair.second != 0) {
            return false;
        }
    }
    	
    
*/

    
/*

approach2:
ate--> aet
tea--> aet

TC: O(nlogn + mlogm)

int main()
{
    string s1 = "aet";
    string s2 = "ate";
    
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    
    
    if(s1 == s2)
    {
        cout << "Anagrams!";
    }
    else{
        cout << "Not Anagrams!";
    }
    
    
    
}

*/





/*

Roman to Integer Conversion


Given a string s representing a Roman numeral, find it's corresponding integer value.
Roman numerals are formed using the following symbols: 
I = 1, V = 5, X = 10, L = 50, C = 100, D = 500, and M = 1000.

Numbers are typically formed by combining these symbols from left to right, adding or subtracting their values based on specific rules.

How does the conversion work?

If a smaller value symbol comes before, we subtract. Otherwise, we add.
In IV, I comes before V and V has a larger value 5. So our result is 5 - 1 = 4.

In VI, V comes before I and I has a smaller value 1. So our result is 5 + 1 = 6.

In II, we have same values, so we add and get 1 + 1 = 2

In case of more than 2 characters, we traverse from left to right and group only when we see a greater value character after a smaller value character. For example MXVII is 1000 + 10 + 5 + 1 + 1 = 1017. And XLVII is (50 - 10) + 5 + 1 + 1 = 47. Note that L is larger and comes after X.


Examples:

Input: s = "IX"
Output: 9
Explanation: IX is a Roman symbol which represents 10 - 1 = 9

Input: s = "XL"
Output: 40
Explanation: XL is a Roman symbol which represents 50 - 10 = 40

Input: s = "MCMIV"
Output: 1904
Explanation: M is 1000, CM is 1000 - 100 = 900, and IV is 4. So we have total as 1000 + 900 + 4 = 1904



int value(char r) 
{
    if (r == 'I')
        return 1;
        
    if (r == 'V')
        return 5;
        
    if (r == 'X')
        return 10;
        
    if (r == 'L')
        return 50;
        
    if (r == 'C')
        return 100;
        
    if (r == 'D')
        return 500;
        
    if (r == 'M')
        return 1000;
        
    return -1;
}


int romanToDecimal(string& s) {
int res = 0; 

for (int i = 0; i < s.length(); i++) {

 int s1 = value(s[i]);
 
  if (i + 1 < s.length()) {
    int s2 = value(s[i + 1]);

    if (s1 >= s2) {
                    res += s1;
                }
    else {
        
        res += (s2 - s1);
        i++;
    }
}
else {
    res += s1;
}
}

return res;
}

*/



/*
Symmetric Tree

Given the root of a binary tree, determine whether it is symmetric around root, i.e., check if the binary tree is a mirror image of itself.



bool isSymmetric(Node* root) {
    if (root == nullptr) {
        return true;
    }
    
    queue<Node*> q;
    
    q.push(root->left);
    q.push(root->right);

    while (!q.empty()) {
        
        Node* node1 = q.front(); 
        q.pop();
        Node* node2 = q.front();
        q.pop();
        
        if (node1 == nullptr && node2 == nullptr) {
            continue;
        }
        
        if (node1 == nullptr || node2 == nullptr || 
            node1->data != node2->data) {
            return false;
        }
        
        q.push(node1->left);
        q.push(node2->right);
        q.push(node1->right);
        q.push(node2->left);
    }
    return true;
}

*/





/*

Check if Two Trees are Identical


Given the roots r1 and r2 of two binary trees, determine whether they are identical.
Two trees are considered identical if they have the same structure and the same node values.


bool isIdentical(Node* r1, Node* r2) {
    
  if (r1 == nullptr && r2 == nullptr)
        return true;
        
    if (r1 == nullptr || r2 == nullptr)
        return false;
        
     return (r1->data == r2->data) &&
           isIdentical(r1->left, r2->left) &&
           isIdentical(r1->right, r2->right);
}

*/

/*
Maximum Depth or Height of a Binary Tree

Given the root of a binary tree, find the maximum depth of the tree.
The maximum depth or height of the tree is the number of edges in the tree from the root to the deepest node.


class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};



int height(Node *root) {
    if (root == nullptr)
        return -1;

    
    int lHeight = height(root->left);
    int rHeight = height(root->right);

    return max(lHeight, rHeight) + 1;
}

*/


/*

Intersection of Two Arrays with Distinct Elements


Given two arrays a[] and b[] with distinct elements of size n and m respectively, the task is to find intersection (or common elements) of the two arrays. We can return the answer in any order.

Note: Intersection of two arrays can be defined as a set containing distinct common elements between the two arrays.

Examples:

Input: a[] = { 5, 6, 2, 1, 4 }, b[] = { 7, 9, 4, 2 }
Output: { 2, 4 }
Explanation: The only common elements in both arrays are 2 and 4.

Input: a[] = { 4, 5, 2, 3 } , b[] = { 1, 7 }
Output: { }
Explanation: There are no common elements in array a[] and b[]

1- Brute Force: TC: O(n*m)
2 - Sorting + 2 pointer:
3 - Hashset -> TC: O(n+m)

    unordered_set<int> s;
    
    for(int i=0; i<n; i++)
    {
        s.insert(a[i]);
    }
    
     for (int i = 0; i < m; i++) {
      
    
      if (st.find(b[i]) != st.end()) {
            res.push_back(b[i]); 
        }
     } 
        
*/
/*
    int n = sizeof(a)/sizeof(a[0]);
    int m = sizeof(b)/sizeof(b[0]);
    
    
    
 for (int i = 0; i < n; i++) {   
      	for (int j = 0; j < m; j++) {
      	    
      	     if (a[i] == b[j]) { 
              	res.push_back(a[i]);
              	break;
            }
            
      	}
 }
 */
 
          
/*

Find a triplet such that sum of two equals to third element


Given an array of integers, you have to find three numbers such that the sum of two elements equals the third element.

Note: triplets need not be consecutive.

Examples:

Input: arr[] = [1, 2, 3, 4, 5]
Output: True
Explanation: The pair (1, 2) sums to 3.

Input: arr[] = [3, 4, 5]
Output: False
Explanation: No triplets satisfy the condition.

Input: arr[] = [2, 7, 9, 13]
Output: True
Explanation: The pair (2, 7) sums to 9.

1- Brute Force: TC: O(n^3)
2 - Sorting + binary search: TC: O(n^2logn)
3 - Two pointer approach: TC: O(n^2)



     sort(arr.begin(), arr.end());
     
     for (int i = 2; i < n; i++) 
     {  
        int left = 0, right = i - 1;  
        
        while (left < right) {
            int sum = arr[left] + arr[right];
            
            if (sum == arr[i])  
                return true;
            else if (sum < arr[i])  
                left++;
            else  
                right--;
        }
    }
    
    

bool search(int sum, start, end,int arr[])//O(logn)
{   
    while (start <= end) {
        int mid = (start + end) / 2;
        if (arr[mid] == sum) {
            return true;
        }
        else if (arr[mid] > sum) {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }
    return false;
}


 sort(arr, arr + n); //O(nlogn)
 
  for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
  
   if (search((arr[i] + arr[j]), j + 1, n - 1, arr)) {
                return true;  
            }
            
            
      }
  }
  
 */
 
 

/*

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a)/sizeof(a[0]);
    
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                 if((a[i] + a[j] == a[k]) || (a[i] + a[k] == a[j]) || (a[j] + a[k] == a[i]))  {
                    return true;
                }
            }
        }
    }
    
}
*/
