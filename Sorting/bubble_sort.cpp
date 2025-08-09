# include <bits/stdc++.h>
using namespace std;

# without optimization
void bubble_sort(vector<int> &arr, int n){
    for (int i = n-1; i >= 0; i--)
    {
        for (int j = 0; j<i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
        
    }
    
}

# with optimization
void bubble_sort_optimized(vector<int> &arr, int n){
    for (int i = n-1; i >= 0; i--)
    {
        swapped = false;
        for (int j = 0; j<i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        
        //check if swap happened. If not then array is sorted
        if(!swapped){
            break;
        }
    }
    
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

}