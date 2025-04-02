#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void merge(vector<int> &v, int i, int mid, int j) {
    vector<int> temp;
    int p = i, q = mid+1;
    while(p<=mid && q<=j) {
        if(v[p]<=v[q]){
            temp.push_back(v[p]);
            p++;
        } else {
            temp.push_back(v[q]);
            q++;
        }
    }
    while(p<=mid) {
        temp.push_back(v[p]);
        p++;
    }
    while(q<=j) {
        temp.push_back(v[q]);
        q++;
    }
    for(int k = i; k <= j; k++) {
        v[k] = temp[k - i];
    }
}

void mSort(vector<int> &v, int i, int j) {
    if(i>=j) {
        return;
    }
    int mid = (i+j)/2;
    mSort(v, i, mid);
    mSort(v, mid+1, j);
    merge(v, i, mid, j);
}

int main() {
    int arr[] = {4, 5, 1, 2, 8, 3, 7, 9, 6};
    vector<int> v(arr, arr+9);
    int n = v.size();
    mSort(v, 0, n-1);
    cout<<"Sorted array: ";
    for(int i=0; i<n; i++) {
        cout<<v[i]<<" ";
    }
    return 0;
}