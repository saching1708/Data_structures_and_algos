#include <iostream>
#include <vector> 
#include <algorithm>
using namespace std;

void Isort(vector<int> &v, int n) {
    for(int i=1; i<n; i++) {
        int key = v[i];
        int j = i-1;
        while(j>=0 && v[j]>key) {
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = key;
    }   
}

int main() {
    int arr[] = {4, 3, 5, 1, 2};
    vector<int> v(arr, arr+5);
    int n = v.size();
    Isort(v,n);
    cout<<"Sorted array: ";
    for(int i=0; i<n; i++) {
        cout<<v[i]<<" ";
    }
    return 0;
}
