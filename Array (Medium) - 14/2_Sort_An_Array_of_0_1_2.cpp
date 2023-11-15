#include <bits/stdc++.h> 
void sortArray(vector<int>& arr, int n)
{
    //Approach 1: Counting Method
    // TC - O(2N) 
    // SC - 0(1)
    int cnt0 = 0, cnt1 = 0, cnt2 = 0;
    int i = 0;
    for( i = 0; i < n; i++){
        if(arr[i] == 0) cnt0++;
        else if(arr[i] == 1) cnt1++;
        else cnt2++;
    }

    for(i = 0; i < cnt0; i++) arr[i] = 0;
    for(i = cnt0; i < cnt0 + cnt1; i++) arr[i] = 1;
    for(i = cnt0 + cnt1; i < n; i++) arr[i] = 2;

    //Approach 2: DNF Algo:
    // TC - O(N) - By single traversal only
    // SC - 0(1)
    int low = 0; int mid = 0; int high = arr.size()-1;
    while(mid <= high){

        if(arr[mid] == 0){
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }

        else if(arr[mid] == 1){
            mid++;
        }
        
        else{
            swap(arr[high], arr[mid]);
            high--;
        }
    }
}
