#include <bits/stdc++.h>
using namespace std;



void insertion_sort(vector<int> &arr, int pos, int n){
    // base case
    if(pos==n-1)  return;

    for (int i = pos; i >=0; i--)
    {
        bool swapped = false;

        if(arr[i]>arr[i+1]){
            swap(arr[i], arr[i+1]);
            swapped = true;
        }

        if(!swapped) break;
    }
    
    insertion_sort(arr, pos+1, n);

}



int main(){

    vector<int> arr = {13,46,24,52,20,9};
    int n = arr.size();

    // insertion_sort(arr,0, n);
    recursiveInsertionSort_classical(arr, n-1);

    cout << "Sorted Array:" << endl;
    for(int i = 0; i<=n-1; i++){
        cout << arr[i] << "\t";
    }

    return 0;

}