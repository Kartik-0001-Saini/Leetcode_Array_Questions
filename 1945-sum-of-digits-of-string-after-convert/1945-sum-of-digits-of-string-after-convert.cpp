class Solution {
public:
    int getLucky(string s, int k) {
        int count = 0;
        for(auto ch:s){
            int num = ch - 'a' + 1;
            // int currSum = 0;
            while(num > 0){
                int dig = num % 10;
                count += dig;
                num /= 10;
            }
        }
        
        for(int i=1; i<k; i++){
            int newSum = 0;
            while(count > 0){
                newSum += count %10;
                count /= 10;
            }
            count = newSum;
        }

        return count;
    }
};