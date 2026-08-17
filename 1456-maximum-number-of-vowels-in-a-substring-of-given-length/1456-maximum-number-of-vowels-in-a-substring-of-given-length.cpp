class Solution {
public:
    int maxVowels(string s, int k) {
        int maxLen = 0;
        int left = 0;
        int res = 0;
        unordered_set<char> st = {'a', 'e', 'i', 'o', 'u'};
        
        for(int i=0; i<s.size(); i++){
            if(st.find(s[i]) != st.end()) res++;

            if(i - left + 1 == k){
                maxLen = max(res, maxLen);
                if(st.find(s[left]) != st.end()) res--;
                left++;
            }
        }

        return maxLen;
    }
};