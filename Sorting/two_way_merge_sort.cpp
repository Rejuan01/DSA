#include<bits/stdc++.h>
using namespace std;

void twoWaySort(int a[], int b[], int c[], int n1, int n2){
    int i = 0, j = 0, k = 0;
    while(i < n1 && j < n2){
        if(a[i] < b[j]){
            c[k++] = a[i++];
        }
        else{
            c[k++] = b[j++];
        }
    }

    while(i < n1){
        c[k++] = a[i++];
    }

    while(j < n2){
        c[k++] = b[j++];
    }

}
int main(){
    int a[] = {2, 5, 7, 9, 12, 16, 18, 22, 34, 97};
    int b[] = {1, 4, 9, 13, 19, 20};
    int n1 = sizeof(a)/sizeof(a[0]);
    int n2 = sizeof(b)/sizeof(b[0]);
    int c[n1+n2];
    twoWaySort(a, b, c, n1, n2);

    for(int i = 0; i < n1+n2; i++){
        cout << c[i] << " ";
    }
}