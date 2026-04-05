class Solution {
public:

    int nextOne(int n){
        int count = 0;
        while(n > 0){
            int dig = n%10;
            count += (dig*dig);
            n /= 10;
        }

        return count;
    }

    bool isHappy(int n) {
        unordered_set<int> st;
        while(n != 1){
            if(st.find(n) != st.end()){
                return false;
            }

            st.insert(n);
            n = nextOne(n);
        }

        return true;
    }
};