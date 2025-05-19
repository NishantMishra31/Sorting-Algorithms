#include<bits/stdc++.h>
using namespace std;

/* insertion sort has a time complexity of O(n²) in worst and average cases
and O(n) in the best case */

void insertion_sort(int arr[], int n){
    for(int i = 0; i <= n-1; i++){
        int j = i;
        while(j > 0 && arr[j-1] > arr[j]){
            // insert every element to right pos
            int temp = arr[j]; // swapping
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    insertion_sort(arr,n);
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
