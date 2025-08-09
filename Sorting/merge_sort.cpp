#include <bits/stdc++.h>
using namespace std;

void merge(vector <int> &arr, int low, int mid, int high){
    int left = low;
    int right = mid+1;
    vector<int> temp;

    while (left<=mid && right<=high)
    {
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    //if elements are left in left array
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    
    //if elements are left in right array
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }

    //transfeering the temp eleemts to arr
    for (int i = low; i <=high; i++)
    {
        arr[i] = temp[i-low];
    }
    
}

void merge_sort(vector <int> &arr, int low, int high){
    if(low>=high)
        return;
    
    int mid = (low+high)/2;
    merge_sort(arr, low, mid);
    merge_sort(arr, mid+1, high);
    merge(arr, low, mid, high);
}

int main(){

    vector<int> arr = {13,46,24,52,20,9};
    int n = arr.size();

    // bubble_sort(arr, n);
    merge_sort(arr, 0, n-1);

    cout << "Sorted Array:" << endl;
    for(int i = 0; i<=n-1; i++){
        cout << arr[i] << "\t";
    }

    return 0;
}