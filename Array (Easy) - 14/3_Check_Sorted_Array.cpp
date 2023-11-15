int isSorted(int n, vector<int> a) {
    int i = 0;

    for(int j = 1; j < n; j++){
        
        if(a[i] > a[j]){
            return 0;
        }
        i++;
    }
    return 1;
}
