#include<bits/stdc++.h>
using namespace std;

void countingSort(int arr[], int size){ //applicable for non-negative integer and limited range
    int max = arr[0];
    for(int i = 1; i < size; i++){ //find the maximum value from the array
        if(arr[i] > max){
            max = arr[i];
        }
    }

    int count[max+1] = {0};         //count array from index 0 to max
    for(int i = 0; i < size; i++){
        // int n = arr[i];
        // count[n]++;
        count[arr[i]]++;            //increase the count of value x in index x
    }

    int index = 0;                  //override arr[] from index zero
    for(int i = 0; i <= max; i++){  //every value of count array
        while(count[i] > 0){        //until the count is zero
            arr[index] = i;         //index is the actual value
            index++;
            count[i]--;
        }
    }

}

int main(){
    int a[] = {4, 5, 6, 8, 1, 3, 6, 3, 2, 6, 7, 4, 0, 2, 0, 8, 5, 8};
    int n = sizeof(a)/sizeof(a[0]);
    countingSort(a, n);

    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}