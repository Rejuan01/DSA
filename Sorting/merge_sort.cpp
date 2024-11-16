#include<bits/stdc++.h>
using namespace std;

void merge(int a[], int low, int mid, int high){
    int temp[high-low+1];       // to store merged array segments
    int k = 0;
    int i = low;
    int j = mid+1;
    while(i <= mid && j <= high){ // till the end of one array segment
        if(a[i] < a[j]){
            temp[k++] = a[i++];
        }
        else{
            temp[k++] = a[j++];
        }
    }
    while(i <= mid){               // left over in first segment
        temp[k++] = a[i++];
    }

    while(j <= high){              // left over in second segment 
        temp[k++] = a[j++];
    }

    for(i = low; i <= high; i++){ //coppy from tem array to main array segment
        a[i] = temp[i-low];
    }
}

void mergerSort(int a[], int low, int high){
    if(low < high){                     // base case is low == high and return (divided into single element)
        int mid = (low + high)/2;
        mergerSort(a, low, mid);        // sort array segment from low to mid 
        mergerSort(a, mid+1, high);     // sort array segment from mid+1 to high

        merge(a, low, mid, high);       // merger two array segment as '2 way merge sorting'
    }
}

int main(){
    int a[] = {3, 18, 11, 9, 2, 7, 10, 22, 14, 9, 5, 15};
    int n = sizeof(a)/sizeof(a[0]);
    mergerSort(a, 0, n);

    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}