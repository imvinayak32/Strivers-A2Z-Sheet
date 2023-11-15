// Approach 1 -
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        vector<int> answer;

        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == 1){
                count++;
            }
            else{
                answer.push_back(count);
                count = 0;
            }
        }
// Important Condition -> [1, 1, 0, 1, 1, 1] 
// The last sequence will be counted through this !!
        if(count != 0){
            answer.push_back(count);
        }

        return *max_element(answer.begin(),answer.end());
    }
};

// Approach 2 -
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

    int count = 0;
    int maxCount = 0;

    for(int i = 0; i < nums.size(); i++){

        if(nums[i] == 1) {
            count++;
            if(maxCount < count) maxCount = count;
        }
        else{
            count = 0;
        }
    }
    return maxCount;
}
};
