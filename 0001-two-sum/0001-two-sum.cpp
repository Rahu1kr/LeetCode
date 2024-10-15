class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
            
    //        int left =0, right= nums.size()-1;
    //        sort(nums.begin(), nums.end());
    //        while(left<right)
    //        {
    //          int sum = nums[left]+nums[right];
    //          if(sum == target)
    //          {
    //            return {left, right};
    //          }
    //          else if(sum<target) 
    //          {
    //            left++;
    //          }
    //          else {
    //            right--;
    //          }
    //        }
    //        return {-1, -1};




        for(int i=0; i<nums.size()-1; i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i]+nums[j]==target){
                    return {i,j};
                }
            }
        }
        return {-1,-1};
    }
};