# include <bits/stdc++.h>
using namespace std;


void bubble_sort(vector<int> &arr, int n){
    if(n==1)    return;

    for (int i = 0; i <= n-2; i++)
    {
        if (arr[i]>arr[i+1])
        {
            swap(arr[i], arr[i+1]);
        }
    }

    bubble_sort(arr, n-1);
}


void bubble_sort_optimized(vector<int> &arr, int n){
    if(n==1)    return;

    bool swapped = false;

    for (int i = 0; i <= n-2; i++)
    {
        if (arr[i]>arr[i+1])
        {
            swap(arr[i], arr[i+1]);
            swapped = true;
        }

    }

    if(!swapped) return;

    bubble_sort_optimized(arr, n-1);
}



int main(){

    vector<int> arr = {13,46,24,52,20,9};
    int n = arr.size();

    // bubble_sort(arr, n);
    bubble_sort_optimized(arr, n);

    cout << "Sorted Array:" << endl;
    for(int i = 0; i<=n-1; i++){
        cout << arr[i] << "\t";
    }

    return 0;

}