#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {3, 4, 5, 11, 1, 9};
    int min = arr[0];
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 1; i < n; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }

    cout << min << endl;
}