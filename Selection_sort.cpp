#include<bits/stdc++.h>
using namespace std;

/* selection sort has a time complexity of O(n²) */

void selection_sort(int arr[], int n){
    for(int i = 0; i <= n-2; i++){
        int mini = i;
        for (int j = i; j <= n-1; j++){
            // ignore sorted elements 
            if (arr[j]<arr[mini]) mini = j; 
        }
        int temp = arr[mini]; // swapping
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    selection_sort(arr,n);
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
