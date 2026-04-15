class Solution {
public:
    int closestTarget(vector<string>& words, string tar, int st) {
        int n = words.size();
        
        for(int step = 0; step < n; step++){
            int left = (st + step) % n;
            int right = (st - step + n) % n;

            if(words[left] == tar || words[right] == tar){
                return step;
            }
        }

        return -1;
    }
};