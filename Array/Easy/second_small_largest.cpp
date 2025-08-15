# include <bits/stdc++.h>
using namespace std;

void second_smallest_and_largest(vector<int> &arr, int n){
    int smallest = numeric_limits<int>::max(); 
    int second_smallest = numeric_limits<int>::max();  
    int largest = numeric_limits<int>::min();  
    int second_largest = numeric_limits<int>::min();  

    for (int i = 0; i <= n-1; i++)
    {
        if (arr[i]>=largest) largest = arr[i];
        else{
            if(arr[i]>second_largest) second_largest = arr[i];
            else{
                if(arr[i]<=smallest) smallest = arr[i];
                else{
                    if(arr[i]<second_smallest) second_smallest = arr[i];
                }
            }
        }
        
    }

    cout << "second_smallest: " << second_smallest << endl;
    cout << "second_largest: " << second_largest << endl;
    
}


int main(){
    vector<int> arr = {1,2,4,7,7,5};
    int n = arr.size();

    second_smallest_and_largest(arr, n);

    return 0;
}