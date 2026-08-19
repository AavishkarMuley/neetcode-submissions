class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int count = 1;
        int max_len = 1;
        sort(nums.begin(), nums.end());
        if(n == 0){
            return 0;
        }
        for(int i=1;i<n;i++){
            if(nums[i] == nums[i-1] && n>0) continue;
            else if(nums[i] - nums[i-1] == 1 && n>0) {
                count++; 
            }
            else {
                max_len = max(max_len , count);
                count = 1;
            }
        }
        return max(max_len , count);
    }
};
