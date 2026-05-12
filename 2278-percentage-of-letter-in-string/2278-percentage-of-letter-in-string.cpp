class Solution {
public:
    int percentageLetter(string s, char letter) {
        unordered_map<char, int> mp;
        for(auto ch:s){
            mp[ch]++;
        }

        if(mp.find(letter) == mp.end()){
            return 0;
        }
        else{
            int percentage = (mp[letter] * 100) / s.size();
            return percentage; 
        }
    }
};