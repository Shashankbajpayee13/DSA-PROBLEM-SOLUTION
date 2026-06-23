class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,r=height.size()-1,ans=0;
        while(l<r){
            int h=min(height[l],height[r]); 
            int w=r-l; //width by finding diff btw left and right wall
             ans= max(ans,h*w);  // area 
            if(height[l]<height[r]){
            l++;
        }
        else
        r--;
        }
        return ans;
    }
};