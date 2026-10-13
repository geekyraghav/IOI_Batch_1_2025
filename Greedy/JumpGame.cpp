class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxIdx = 0;
        for(int i=0;i<nums.size();i++){
            // check if yahan tak aa sakte hai ya nahi
            if(i > maxIdx) return false;
            // find the max possible idx
            maxIdx = max(maxIdx,i+nums[i]);
        }
        return true;
    }
};
