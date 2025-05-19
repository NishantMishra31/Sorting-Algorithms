#include<bits/stdc++.h>
using namespace std;

/* Quick sort has a time complexity of o(nlogn) for best and average cases
and O(n^2) in the worst case (due to bad choice of pivot element).
It has the optimal space complexity of O(1) as it uses no auxillary space.*/ 

int partition(vector <int> &arr, int low,int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while (i < j){
        while (arr[i] <= pivot && i < high){
            i++;
        }
        while (arr[j] > pivot && j > low){
            j--;
        }
        /* For descending quick_sort
        while (arr[i]>=pivot && i<high){
            i++;
        }
        while (arr[j]<pivot && j>low){
            j--;
        }*/
        if (i < j) swap(arr[i], arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}
void qs(vector <int> &arr, int low,int high){
    if (low < high){
        int pindex = partition(arr, low, high);
        qs(arr, low, pindex - 1);
        qs(arr, pindex + 1, high);
    }
}
vector <int> quick_sort(vector <int> &arr){
    qs(arr, 0, arr.size() - 1);
    return arr;
}
int main(){
    int n;
    cin >> n;
    vector <int> arr(n);
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    quick_sort(arr);
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
