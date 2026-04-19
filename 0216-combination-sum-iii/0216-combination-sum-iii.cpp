class Solution {
public:

    void backtrack(int k, int tar, int st, vector<int>& ans, vector<vector<int>>& res){
        if(ans.size() > k || tar < 0){
            return;
        }

        if(tar == 0 && ans.size() == k){
            res.push_back(ans);
            return;
        }

        for(int i=st; i<=9; i++){
            ans.push_back(i);
            backtrack(k, tar-i, i+1, ans, res);
            ans.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int tar) {
        vector<int> ans;
        vector<vector<int>> res;

        backtrack(k, tar, 1, ans, res);
        return res;
    }
};