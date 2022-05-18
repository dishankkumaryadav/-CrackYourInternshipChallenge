// Question Link: https://leetcode.com/problems/subarray-sum-equals-k/

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        if(n==0)
            return 0;
        unordered_map<int, int> mpp;
        int sum=0, count=0;
        for(int i=0; i<n; i++){
            sum+=nums[i];
            if(sum == k)
                count++;
            if(mpp.find(sum-k) != mpp.end()){
                count+=mpp[sum-k];
            }
            mpp[sum] += 1;
        }
        return count;
    }
};