class Solution {
public:

    void backtrack(string digits, int idx, string str, unordered_map<char, string>& mp, vector<string>& res){
        if(digits.size() == idx){
            res.push_back(str);
            return;
        }

        string letters = mp[digits[idx]];
        for(auto letter:letters){
            backtrack(digits, idx+1, str+letter, mp, res);
        }
    }

    vector<string> letterCombinations(string digits) {
        unordered_map<char, string> mp{
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
        };

        vector<string> res;
        backtrack(digits, 0, "", mp, res);

        return res;
    }
};