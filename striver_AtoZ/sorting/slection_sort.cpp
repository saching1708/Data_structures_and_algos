#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {4, 3, 5, 1, 2};
    vector<int> v(arr, arr+5);
    int n = v.size();
    for(int i=0; i<n-1; i++) {
        int minI = i;
        for(int j=i+1; j<n; j++) {
            if (v[j] < v[minI]) {
                minI = j;
            }
        }
        swap(v[i], v[minI]);
    }
    cout<<"Sorted array: ";
    for(int i=0; i<n; i++) {
        cout<<v[i]<<" ";
    }
    return 0;
}