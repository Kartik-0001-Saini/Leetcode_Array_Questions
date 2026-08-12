class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> mp;
        int left = 0, tot = 0, res = 0;

        for(int right=0; right<fruits.size(); right++){
            mp[fruits[right]]++;
            tot++;
            while(mp.size() > 2){
                int ele = fruits[left];
                mp[ele]--;
                tot--;
                left++;
                if(mp[ele] == 0){
                    mp.erase(ele);
                }
            }
            res = max(res, tot);
        }

        return res;
    }
};