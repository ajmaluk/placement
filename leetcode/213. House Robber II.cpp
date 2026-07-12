class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n<1){
            return 0;
        }
        if(n==1){
            return nums[0];
        }
        if(n==2){
            return max(nums[0],nums[1]);
        }

        int total_skip_first[n-1];
        int total_skip_last[n-1];

        total_skip_first[0] = nums[1];
        total_skip_first[1] = max(nums[1],nums[2]);
        for(int i=2;i<n-1;i++){
            total_skip_first[i] = max(nums[i+1]+total_skip_first[i-2],total_skip_first[i-1]);
        }

        total_skip_last[0] = nums[0];
        total_skip_last[1] = max(nums[0],nums[1]);

        for(int i=2;i<n-1;i++){
            total_skip_last[i] = max(nums[i]+total_skip_last[i-2],total_skip_last[i-1]);
        }

        return max(total_skip_last[n-2],total_skip_first[n-2]);
    }
};