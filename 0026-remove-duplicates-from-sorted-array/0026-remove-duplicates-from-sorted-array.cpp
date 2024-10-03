class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int prev = nums[0];
	int j = 0;
	int count = 1;
	for(int i=1; i<nums.size(); i++)
	{
		if(nums[i] == prev){
            j++;
            continue;
        }else{
            nums[i-j] = nums[i];
            prev = nums[i];
            count++;
        }
	}
	return count;
    }
};