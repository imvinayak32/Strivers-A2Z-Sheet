int removeDuplicates(vector<int> &arr, int n) {

	int j = 1;
	vector<int> answer;

	for(int i = 0; i<n; i++){
		if(arr[i] == arr[j]){
			j++;
			continue;
			
		}
		answer.push_back(arr[i]);
		j++;
	}
	int len = answer.size();
	return len;
}
