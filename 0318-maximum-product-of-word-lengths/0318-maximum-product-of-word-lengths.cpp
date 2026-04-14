class Solution {
public:

    bool check(string& s1, string& s2){
        vector<int> arr(26, 0);
        for(auto ch:s1){
            arr[ch - 'a'] = 1;
        }

        for(auto ch:s2){
            if(arr[ch-'a'] == 1){
                return false;
            }
        }

        return true;
    }

    int maxProduct(vector<string>& words) {
        int n = words.size();
        vector<int> sizes(n);
        int maxPro = 0;

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(check(words[i], words[j])){
                    int prd = words[i].size() * words[j].size();
                    maxPro = max(maxPro, prd);
                }
            }
        }

        return maxPro;
    }
};