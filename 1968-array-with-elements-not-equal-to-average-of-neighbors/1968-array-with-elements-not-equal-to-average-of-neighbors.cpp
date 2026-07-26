class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<int> sorted(n);

        int end = n-1;
        int mid = (n-1)/2;
        for(int i=0; i<n; i++){
            if(i%2==0){
                sorted[i] = nums[mid--];
            }
            else{
                sorted[i] = nums[end--];
            }
        }

        return sorted;
    }
};