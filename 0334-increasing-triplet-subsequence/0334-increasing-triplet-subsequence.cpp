class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        // this is the similar question like we have to find the second smallest number without
        // using sort function or indexing..
        int firstEle = INT_MAX, secondEle = INT_MAX;
        int n = nums.size();
        for(auto num:nums){
            // Here we get the smallest element
            if(num <= firstEle){
                firstEle = num;
            }
            // Here we get the middle one
            else if(num <= secondEle){
                secondEle = num;
            }
            // Here largest so we return true
            else{
                return true;
            }
        }

        return false;
    }
};