class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // ***** sol 1 ******
        //int i;
        // for( i=0;i<nums.size();i++){
        //     if(nums[i]==target) return i;
        //     if(target<nums[i])  return i;
        // }

        // if(i==nums.size()-1)    return i+1;
        // return i;



        // ***** sol 2 *****
        int start=0,end=nums.size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target )   return mid;
            else if ( target<nums[mid]) end=mid-1;
            else start=mid+1;
        }
        
        return start;
        
    }
};