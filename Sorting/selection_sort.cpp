#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[] = {9, 8, 11, 4, 10, 1, 13, 5, 3, 7};
    int n = sizeof(a)/sizeof(a[0]);
    for(int i = 0; i < n; i++){
        int minIndex = i;

        for(int j = i+1; j < n; j++){ //find the lowst index
            if(a[j] < a[minIndex]){
                minIndex = j;
            }
        }

        if(minIndex != i){
            swap(a[i], a[minIndex]);
        }
    }

    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}