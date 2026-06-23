class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int left=0;
        int product=1;
        int right=0;
        int ans=0;
        while(right<nums.size()){
       product *=nums[right]; // formula for finding product
       while(product >=k && left<= right){
        product /= nums[left];   // deleting left one
        left++;
       }
       ans +=right-left+1; // it shows length of array
       right++;
        }
        return ans;
    }
};