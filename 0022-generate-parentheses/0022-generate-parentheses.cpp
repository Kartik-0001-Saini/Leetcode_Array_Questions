class Solution {
public:

    void backtrack(int n, string str, int openPar, int closePar, vector<string>& res){
        if(2*n == str.size()){
            res.push_back(str);
            return;
        }

        if(openPar < n){
            backtrack(n, str+'(', openPar+1, closePar, res);
        }

        if(closePar < openPar){
            backtrack(n, str+')', openPar, closePar+1, res);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> res;
        backtrack(n, "", 0, 0, res);

        return res;
    }
};