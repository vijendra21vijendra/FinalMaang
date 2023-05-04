//https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;

        for(int i=0;i<nums.size();++i){
            int val = target - nums[i];
            if(mp.count(val) >= 1){
               return {i, mp[val]};
            }else{
               mp.insert(make_pair(nums[i], i));
            }
        }
        return {-1,-1};
    }
};