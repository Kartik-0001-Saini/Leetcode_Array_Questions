class Solution {
public:
    string frequencySort(string s) {
        string ans = "";
        map<char, int> mp;
        for(auto ch:s){
            mp[ch]++;
        }
        // this is the max priority queue which we are making
        // int this queue we are basically giving the priority to lager element first...
        priority_queue<pair<int, char>> freq;
        for(auto val:mp){
            freq.push({val.second, val.first});
        }

        while(!freq.empty()){
            auto it = freq.top();
            freq.pop();
            // this is the most important line in this i will give an example so
            // i learn for futher question
            // suppose i have a ('a', 2) --> this is in the priority queue
            // in this 'a' is the char and 2 is the frequency this will append 
            //  'a' in ans string for 2 times...
            // then futher it will proceed....      ans = "aa"
            ans += string(it.first, it.second);
        }

        return ans;
    }
};