class Solution {
public:
    string getHint(string secret, string guess) {
        int n = secret.size();
        int bulls = 0, cows = 0;
        vector<int> sarr(10, 0);
        vector<int> garr(10, 0);

        for(int i=0; i<n; i++){
            if(secret[i] == guess[i]) bulls++;

            else{
                sarr[secret[i] - '0']++;
                garr[guess[i] - '0']++;
            }
        }

        for(int i=0; i<10; i++){
            cows+=min(sarr[i], garr[i]);
        }

        return to_string(bulls) + "A" + to_string(cows) + "B";
    }
};