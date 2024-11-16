#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[] = {4, 6, 2, 1, 9, 11, 7, 3, 10, 5};
    int n = sizeof(a)/sizeof(a[0]);
    for(int i = 1; i < n; i++){
        int key = a[i]; //first element of unsorted part
        int j = i - 1; // last index of sorted part(biggest)

        while(j >= 0 && a[j] > key){ //find the position ot set the key
            a[j+1] = a[j]; //bigger values than key are being shifted right
            j--;
        }
        
        a[j+1] = key;
    }

    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}