#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void bSort(vector<int> &v, int n) {
    for(int i=n-1; i>=0; i--) {
        int maxI = i;
        for(int j=0;j<i;j++){
            if(v[j]>v[maxI]){
                maxI = j;
            }
        }
        swap(v[i], v[maxI]);
    }
}

int main() {
    int arr[] = {4, 3, 5, 1, 2};
    vector<int> v(arr, arr+5);
    int n = v.size();
    bSort(v,n);
    cout<<"Sorted array: ";
    for(int i=0; i<n; i++) {
        cout<<v[i]<<" ";
    }
    return 0;
}