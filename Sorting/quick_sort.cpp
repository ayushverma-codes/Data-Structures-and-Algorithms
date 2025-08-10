#include <bits/stdc++.h>
using namespace std;


int partition(vector<int> &arr, int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    
    while(i<j){

        //find the larger element in left side
        while (arr[i]<=pivot && i<=high-1)
        {
            i++;
        }
        
        //find the smaller element in right side
        while(arr[j]>pivot && j>=low+1){
            j--;
        }

        if (i<j)
        {
            swap(arr[i],arr[j]);
        }
        
    }
    swap(arr[low], arr[j]);
    return j;
}


void quick_sort(vector<int> &arr, int low, int high){
    if(low<high){
        int partition_index = partition(arr, low, high);
        quick_sort(arr, low, partition_index-1);
        quick_sort(arr, partition_index+1, high);
    }
}


int main(){

    vector<int> arr = {13,46,24,52,20,9};
    int n = arr.size();

    // bubble_sort(arr, n);
    quick_sort(arr, 0, n-1);

    cout << "Sorted Array:" << endl;
    for(int i = 0; i<=n-1; i++){
        cout << arr[i] << "\t";
    }

    return 0;
} 