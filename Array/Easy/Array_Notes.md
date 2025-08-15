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

# 2. Second Largest Element in an Array without sorting

**Problem Statement:** Given an array, find the second smallest and second largest element in the array. Print ‘-1’ in the event that either of them doesn’t exist.

**Example 1:**
Input: [1,2,4,7,7,5]

Output: Second Smallest : 2        <t>,     Second Largest : 5

Explanation: The elements are as follows 1,2,3,5,7,7 and hence second largest of these is 5 and second smallest is 2

**Example 2:**
Input: [1]

Output: Second Smallest : -1      <t>,      Second Largest : -1

Explanation: Since there is only one element in the array, it is the largest and smallest element present in the array. There is no second largest or second smallest element present.


### Brute Force Approach

1. Sort the array
2. return the arr[n-1] and arr[1]

**Time Complexity:** O(n*logn)

**Space Complexity:** O(n)

### Better Approach

**Approach 1**

1. Take two pointers largest, second_largest and smallest, second_smallest.
2. loop through the array and compare the current element with largest, second_largest and smallest, second_smallest.
3. if the current element is larger than largest then update it and second_largest with the largest.
4. if the current element is smaller than largest then compare with second_largest. If second_largest is smaller then update it if the current elemnt is not equal to the largets.
5. if the current element is smaller then the second_largest then compare it with smallest. If it is smaller than update smallest. If not then if it is smaleer than second_smallest smallest update and move to next.
6. return the second_largest and second_smallest at the end.


**Time Complexity:** O(n)

**Space Complexity:** O(1)

**Mistakes:**
1. if the first element is the smallest, the "smallest" will never be assigned its true value and so does the second_smallest.


**Approach 2**


