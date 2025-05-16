#include<bits/stdc++.h>
using namespace std;

/* Bubble sort has a time complexity of O(n²) in the worst
and average case and O(n) in the best case*/

void bubble_sort(int arr[], int n){
    for(int i = n-1; i >= 1; i--){
        for (int j = 0; j <= i-1; j++){
            // ignore sorted elements from last
            if (arr[j]>arr[j+1]){
                int temp = arr[j]; // swapping
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
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
    bubble_sort(arr,n);
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
