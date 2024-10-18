class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum = 0;
        for(int i=0; i<nums.size(); i++){
            totalSum += nums[i];
        }

        int leftSum = 0;
        for(int j=0; j<nums.size(); j++){
            int rightSum = totalSum - leftSum - nums[j];

            if(rightSum == leftSum){
                return j;
            }

            leftSum += nums[j];
        }
        return -1;
    }
};