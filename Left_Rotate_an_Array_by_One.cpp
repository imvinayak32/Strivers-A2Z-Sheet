#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) {
    
    int shiftedElement = arr[0];

    for(int i = 0; i<n; i++){
        arr[i] = arr[i + 1];
    }
    arr[n-1] = shiftedElement;
    return arr;
}
