#include<bits/stdc++.h>
using namespace std;

int partition(int a[], int l, int h){
    int i = l-1;
    int pivot = a[h];

    for(int j = l; j < h; j++){
        if(a[j] < pivot){       // j ignores higher value and move forward 
            i++;                // i points previous index of a higher value 
            swap(a[i], a[j]);   // i moved to the higher value and swapped with lower value a[j]
        }
    }

    swap(a[i+1], a[h]);
    return i+1;
}

void quick_sort(int a[], int l, int h){
    if(h > l){
        int p = partition(a, l, h);
        quick_sort(a, l, p-1);
        quick_sort(a, p+1, h); 
    }
}
int main(){
    int a[] = {12, 34, 3, 15, 9, 10, 13, 22, 17, 7};
    int n = sizeof(a)/sizeof(a[0]);
    quick_sort(a, 0, n-1);

    for(int i = 0; i < n; i++){
        cout << a[i] << " ";    
    }
}