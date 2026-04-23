class Solution {
public:
    string removeDuplicateLetters(string s) {
        unordered_map<char, int> mp;
        for(int i=0; i<s.size(); i++){
            mp[s[i]] = i;
        }

        unordered_set<char> visit;
        stack<char> st;
        for(int i=0; i<s.size(); i++){
            if(visit.count(s[i])) continue;
            while(!st.empty() && st.top() > s[i] && i < mp[st.top()]){
                visit.erase(st.top());
                st.pop();
            }
            visit.insert(s[i]);
            st.push(s[i]);
        }

        string res = "";
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }

        reverse(res.begin(), res.end());

        return res;
    }
};