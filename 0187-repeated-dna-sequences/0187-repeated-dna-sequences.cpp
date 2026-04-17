class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        if(s.size() < 10) return {};

        unordered_map<string, int> mp;
        for(int i=0; i<=s.size()-10; i++){
            string res = "";
            for(int j=0; j<10; j++){
                res+=s[i+j];
            }
            mp[res]++;
        }

        vector<string> ans;
        for(auto i:mp){
            if(i.second > 1){
                ans.push_back(i.first);
            }
        }

        return ans;
    }
};