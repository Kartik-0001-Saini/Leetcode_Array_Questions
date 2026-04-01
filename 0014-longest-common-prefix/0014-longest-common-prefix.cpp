class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string res = strs[0];

        for(int i=1; i<n; i++){
            int idx = 0;
            for(auto ch:res){
                if(ch == strs[i][idx]){
                    idx++;
                }
                else{
                    break;
                }
            }
            res = res.substr(0, idx);
        }

        return res;
    }
};