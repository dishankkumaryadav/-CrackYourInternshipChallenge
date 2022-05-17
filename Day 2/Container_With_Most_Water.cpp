// Question Link: https://leetcode.com/problems/container-with-most-water/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0, r=height.size()-1, maxH=0;
        while(l<r){
            int lh = height[l], rh = height[r];
            int minH = min(lh, rh);
            maxH = max(maxH, minH*(r-l));
            if(lh<rh)
                l++;
            else
                r--;
        }
        return maxH;
    }
};