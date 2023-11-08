vector<int> getSecondOrderElements(int n, vector<int> a) {
    
    int i = 0;
    int j = 1;
    int secLarge = 0;
    for(; j < n;){
        if(a[i] < a[j]){
            secLarge = i;
            i = j;
        }
        else{
            if(a[secLarge] < a[j]){
                secLarge = j;
            }
        }
        j++;
    }
    if(i == 0){
        secLarge = 1;
    }

    i = 0, j = 1;
    int secSmall = 0;
    for(; j < n;){
        if(a[i] > a[j]){
            secSmall = i;
            i = j;
        }
        else{
            if(a[secSmall] > a[j]){
                secSmall = j;
            }
        }
        j++;
    }
    if(i == 0){
        secSmall = 1;
    }

    vector<int> ans;
    ans.push_back(a[secLarge]);
    ans.push_back(a[secSmall]);

    return ans;

}
