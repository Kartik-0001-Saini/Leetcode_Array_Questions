class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<string> arr;
        for(int i=0; i<nums.size(); i++){
            arr.push_back(to_string(nums[i]));
        }

        vector<char> res;
        for(auto ele:arr){
            for(auto ch:ele){
                res.push_back(ch);
            }
        }

        vector<int> ans;
        for(int i=0; i<res.size(); i++){
            ans.push_back(res[i] - '0');
        }

        return ans;
    }
};