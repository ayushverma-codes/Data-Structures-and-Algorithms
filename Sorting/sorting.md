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
