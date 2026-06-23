class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) { 
        unordered_map<int,int>sb;
        int j=0,i=0;
     for(int i = 0; i < nums.size(); i++) {
            int need = target - nums[i];

            if(sb.count(need)) {
                return {sb[need], i};   
            }
            sb[nums[i]] = i;
        }
        return {};
    }
};
        