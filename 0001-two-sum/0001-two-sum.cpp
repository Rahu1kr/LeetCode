class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            for(int j=1; j<nums.size(); j++){
                if(i==j){
                    break;
                }else{
                    if(nums[i] + nums[j] == target){
                    ans.push_back(i);
                    ans.push_back(j);
                    break;
                }
                }
            }
        }
        return ans;
    }
};