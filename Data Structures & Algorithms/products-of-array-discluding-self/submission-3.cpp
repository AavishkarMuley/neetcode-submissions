class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n,1);
        int mul = 1;
        int zeroes = 0;
        for(int i=0;i<n;i++){
            if(nums[i] == 0){
                zeroes++;
            }
            else {
                mul *= nums[i];
            }
            
        }
        if(zeroes > 1){return vector<int>(nums.size(), 0);}
        for(int i=0;i<n;i++){
            if(zeroes > 0){
                result[i] = (nums[i] == 0) ? mul : 0;
            }
            else { 
                result[i] = mul / nums[i];
            }
        }
        return result;
    }
};
