class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int fst = INT_MAX, scd = INT_MAX;

        for(int num:nums){
            if(num <= fst){
                fst = num;
            }
            else if(num <= scd){
                scd = num;
            }
            else{
                return true;
            }
        }

        return false;
    }
};