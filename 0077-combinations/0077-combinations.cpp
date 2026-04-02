class Solution {
public:

    void getAllCombination(int n, int k, int st, vector<int>& allCombine, vector<vector<int>>& res){
        if(allCombine.size() == k){
            res.push_back(allCombine);
            return;
        }

        if(st > n) return;

        allCombine.push_back(st);
        getAllCombination(n, k, st+1, allCombine, res);
        allCombine.pop_back();
        getAllCombination(n, k, st+1, allCombine, res);

    }

    vector<vector<int>> combine(int n, int k) {
        vector<int> allCombine;
        vector<vector<int>> res;

        getAllCombination(n, k, 1, allCombine, res);
        return res;
    }
};