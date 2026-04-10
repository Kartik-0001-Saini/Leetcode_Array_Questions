class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int minDis = INT_MAX;
        int n = nums.size();

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                int currDis = 0;
                for(int z=j+1; z<n; z++){
                    if(nums[i] == nums[j] && nums[j] == nums[z]){
                        currDis = abs(j-i) + abs(z-j) + abs(z-i);
                        minDis = min(currDis, minDis);
                    }
                }
            }
        }

        if(minDis == INT_MAX) return -1;
        else return minDis;
    }
};