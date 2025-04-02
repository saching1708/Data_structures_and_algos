#include <iostream>
#include <vector> 
#include <algorithm>
using namespace std;

void rBsort(vector<int> &v, int n) {
    if(n==1) {
        return;
    }

    for(int i=0; i<n-1; i++){
        if(v[i]>v[i+1]){
            swap(v[i], v[i+1]);
        }
    }

    rBsort(v, n-1);
}

int main() {
    int arr[] = {4, 5, 1, 2, 8, 3, 7, 9, 6};
    vector<int> v(arr, arr+9);
    int n = v.size();
    rBsort(v,n);
    cout<<"Sorted array: ";
    for(int i=0; i<n; i++) {
        cout<<v[i]<<" ";
    }
    return 0;
}