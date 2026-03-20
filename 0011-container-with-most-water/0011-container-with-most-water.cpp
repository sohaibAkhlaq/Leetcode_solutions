class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0,right=height.size()-1,ans=0;
        while(left<right){
            int curr_width=right-left;
            int curr_height=min(height[left],height[right]);

            int area=curr_width*curr_height;
            ans=max(area,ans);

            (height[left]<height[right])?left++:right--;
        }
        return ans;
    }
};