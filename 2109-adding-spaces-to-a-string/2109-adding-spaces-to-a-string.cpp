class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string res = "";
        int n = s.size();
        int i=0, j=0;
        while(i < n && j < spaces.size()){
            if(i != spaces[j]){
                res+=s[i];
                i++;
            }
            else{
                res+=" ";
                res+=s[i];
                i++;
                j++;
            }
        }

        while(i < n){
            res+=s[i++];
        }

        return res;
    }
};