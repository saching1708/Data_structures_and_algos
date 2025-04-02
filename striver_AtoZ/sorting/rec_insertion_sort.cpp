#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rIsort(vector<int> &v, int i, int n) {
    if(i==n) {
        return;
    }
    int j = i-1;  
    while(j>=0 && v[j]>v[j+1]) {
        swap(v[j+1], v[j]);
        j--;
    }
    rIsort(v, i+1, n);
    
}

int main() {
    int arr[] = {4, 5, 1, 2, 8, 3, 7, 9, 6};
    vector<int> v(arr, arr+9);
    int n = v.size();
    rIsort(v, 1, n);   
    cout<<"Sorted array: ";
    for(int i=0; i<n; i++) {
        cout<<v[i]<<" ";
    }
    return 0;
}