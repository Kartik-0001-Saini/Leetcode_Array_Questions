class Solution {
public:
    bool isPalindrome(string s) {
        string res = "";
        for(auto ch:s){
            if(isalpha(ch)){
                res+=(tolower(ch));
            }
            else if(isdigit(ch)){
                res+=ch;
            }
        }

        int i=0, j=res.size()-1;
        while(i<j){
            if(res[i] != res[j]){
                return false;
            }
            i++;
            j--;
        }

        return true;
    }
};