# Array

## 1. Find the Largest element in an array

**Problem Statement:** Given an array, we have to find the largest element in the array.

**Example 1:**
Input: arr[] = {2,5,1,3,0};

Output: 5

Explanation: 5 is the largest element in the array. 
<br>

**Example2:**
Input: arr[] = {8,10,5,7,9};

Output: 10

Explanation: 10 is the largest element in the array. 


### Brute Force Approach

1. Set a variable largest_elements.
2. Loop through the array and compare the current element with largest_elements.
3. if the current element is smaller than largest_elements, then move to next.
4. if the current element is larger than largest_elements, then update the largest_elements and move to next.
5. Return the largest_elements at the last.

**Time Complexity:** O(n)

**Space Complexity:** O(1)

<br>

### Brute Force Approach [Another Method from Video]

1. Sort the array.
2. Return the arr[n-1]

**Time Complexity:** O(n*logn)

**Space Complexity:** O(n)