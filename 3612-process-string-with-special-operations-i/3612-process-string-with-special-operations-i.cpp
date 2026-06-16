class Solution {
public:
    string processStr(string s) {
        string res = "";
        for(int i=0; i<s.size(); i++){
            if(isalpha(s[i])){
                res+=s[i];
            }
            else if(s[i] == '#'){
                int n = res.size();
                for(int i=0; i<n; i++){
                    res += res[i];
                }
            }
            else if(s[i] == '%' && res.size() > 0){
                reverse(res.begin(), res.end());
            }
            else if(s[i] == '*' && res.size() > 0){
                res.pop_back();
            }
        }

        return res;
    }
};