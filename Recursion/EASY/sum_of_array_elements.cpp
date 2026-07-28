class Solution{	
	public:
		int arraySum(vector<int>& nums){
			return sum(nums , 0);
		}
        int sum(vector<int>&nums , int i){
            if(i >= nums.size()) return 0;
            return nums[i] + sum(nums , i+1);
        }
};