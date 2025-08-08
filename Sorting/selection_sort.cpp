#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {13,24,46,20,52,9};
    int n = arr.size();

    for(int i = 0; i<=n-2; i++){
        int smallest_index = i;
        for(int j=i; j<=n-1; j++){
            if(arr[j] < arr[smallest_index]){
                smallest_index = j;
            }
        }
        swap(arr[i], arr[smallest_index]);
    }

    for(int i=0; i<=n-1; i++){
        cout << arr[i] << "\t";
    }
    return 0;
}
