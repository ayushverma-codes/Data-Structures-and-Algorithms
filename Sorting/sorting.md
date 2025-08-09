# Sorting

## Selection Sort

1. Finds the smallest element in the unsorted part of the array.
2. Places it at the start of the unsorted section.
3. Repeats for the rest of the array.

So, in each pass: One element is placed in its correct final position.

<img src="../images/selection_sort.png" alt="selection sort" width="500"/>

#CODE;
```
#include<bits/stdc++.h>

using namespace std;
void selection_sort(int arr[], int n) {
  // selection sort
  for (int i = 0; i < n - 1; i++) {
    int mini = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[mini]) {
        mini = j;
      }
    }
    int temp = arr[mini];
    arr[mini] = arr[i];
    arr[i] = temp;
  }

  cout << "After selection sort: " << "\n";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";

}
int main() {
  int arr[] = {13,46,24,52,20,9};
  int n = sizeof(arr) / sizeof(arr[0]);
   cout << "Before selection sort: " << "\n";
   for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";
  selection_sort(arr, n);
  return 0;
}


Output:

Before selection sort:
13 46 24 52 20 9
After selection sort:
9 13 20 24 46 52
```

**Time complexity:** Selection Sort always takes O(N²) time in best, worst, and average cases.
The outer loop runs N−1 times, and the inner loop runs decreasingly from N−1 to 1, giving (N-1) + (N-2) + .... + 1 = N(N-1)/2

**Space Complexity:** O(1)


## Bubble Sort

Bubble Sort repeatedly traverses the array, compares adjacent elements, and swaps them if they’re in the wrong order. 

With each pass, the largest element among the unsorted section “bubbles up” to its correct position at the end.

<img src="../images/bubble_sort.png" alt="selection sort" width="500"/>

**For optimization:**

Add a flag (e.g., swapped = false) before the inner loop.

Whenever you swap two elements, set swapped = true.

After the inner loop, check:

  If swapped is still false, break out — no more passes are needed.

<br>

**Time complexity:** O(N²) (where N = size of array)

The outer loop runs about N times.

The inner loop runs fewer times each pass:

1st pass → N-1 times
2nd pass → N-2 times
…
Last pass → 1 time

If we add them up:
(N−1)+(N−2)+…+2+1=N(N−1)/2

This simplifies to about N²/2 steps.

**Effect on optimization on time complexity:**
1. **Best case (already sorted):** Only one pass → O(N) time.
2. **Worst case:** Still O(N²) (when the array is reversed).

**Space Complexity:** O(1)