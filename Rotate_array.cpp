vector<int> rotateArray(vector<int>arr, int k) {

    int n = arr.size();
    for(int m = 1; m<=k; m++){
        int shiftedElement = arr[0];

        for(int i = 0; i<n; i++){
            arr[i] = arr[i + 1];
        }
        arr[n-1] = shiftedElement;

    }
        return arr;
}

