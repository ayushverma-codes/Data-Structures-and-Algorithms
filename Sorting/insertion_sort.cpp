#include <bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int> &arr, int n){
    for (int i = 0; i <= n-1; i++)
    {
        for (int j = i; j>0; j--)
        {
            if (arr[j]<arr[j-1])
            {
                swap(arr[j], arr[j-1]);
            }
            else{
                break;
            }
            
        }
        
    }
    
}


int main(){

    vector<int> arr = {13,46,24,52,20,9};
    int n = arr.size();

    // bubble_sort(arr, n);
    insertion_sort(arr, n);

    cout << "Sorted Array:" << endl;
    for(int i = 0; i<=n-1; i++){
        cout << arr[i] << "\t";
    }

}