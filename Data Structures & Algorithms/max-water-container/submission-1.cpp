class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int l = 0;
        int r = n-1;
        int maxarea = 0;
        
        // for(int i=1;i<n-1;i++){
        //     maxarea = (r - l) * (min(heights[l], heights[r]));
        //     if(heights[l] < heights[l+1]){
        //         l++;
        //     }
        //     else if(heights[r] < heights[r-1]){
        //         r--;
        //     }
        // }
        while(l<r){
            int carea = (r - l) * (min(heights[l], heights[r]));
            maxarea = max(carea,maxarea);
            if(heights[l] <= heights[r]){
                l++;
            }
            else {
                r--;
            }

        }
        return maxarea;
        
    }
};
