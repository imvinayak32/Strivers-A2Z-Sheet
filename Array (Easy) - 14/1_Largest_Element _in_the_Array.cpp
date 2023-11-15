#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {

    int i = 0;
    int j = 1;
    for(; j < n;){

        if(arr[i] < arr[j]){
            i = j;
        }
        j++;
    }
    return arr[i];
}
