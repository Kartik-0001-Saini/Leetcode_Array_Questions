class Solution {
public:
    int minMoves(vector<int>& nums, int limit) {
        int n = nums.size();
        vector<int> diff(2*limit+2, 0);
        int fst, lst, low, high, sum;

        for(int i=0; i<n/2; i++){
            int fst = nums[i];
            int lst = nums[n-1-i];

            low = min(fst, lst) + 1;
            high = max(fst, lst) + limit;

            sum = fst + lst;
            diff[2] += 2;
            diff[2*limit+1] -= 2;

            diff[low] -= 1;
            diff[high+1] += 1;

            diff[sum] -= 1;
            diff[sum+1] += 1;
        }

        int ans = INT_MAX;
        int moves = 0;

        for(int tar=2; tar<=2*limit; tar++){
            moves +=  diff[tar];
            ans = min(ans, moves);
        }

        return ans;
    }
};