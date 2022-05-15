// Question Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0, j=1, k=nums.size()-1;
        while(j<=k){
            if(nums[i] == nums[j]){
                j++;
            }
            else{
                i++;
                nums[i] = nums[j];
                j++;
            }
        }
        return i+1;
    }
};


// Another Solution
class Solution{
    public:
    int removeDuplicates(vector<int>& nums){
        if (nums.length == 0)
            return 0;
        int i=0;
        for (int j=1;j<nums.length; j++){
            if (nums[j] != nums[i]){
                i++;
                nums [i]=nums[j];
            }
        }
        return i+1;
    }
}