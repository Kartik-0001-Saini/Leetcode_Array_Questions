class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n = nums.size();
        int maxEle = INT_MIN;
        for(int i=0; i<n; i++){
            if(maxEle < nums[i]){
                maxEle = nums[i];
            }
        }

        unordered_map<int, int> mp;
        for(auto i:nums){
            mp[i]++;
        }

        for(int i=1; i<maxEle; i++){
            if(mp.find(i) == mp.end()){
                return false;
            }

            if(mp[i] > 1){
                return false;
            }
        }

        return mp[maxEle] == 2;
    }
};