class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<int> leftArr, rightArr;
        int mid = (n + 1) / 2;

        for(int i=0; i<mid; i++){
            leftArr.push_back(nums[i]);
        }

        for(int i=mid; i<n; i++){
            rightArr.push_back(nums[i]);
        }

        reverse(leftArr.begin(), leftArr.end());
        reverse(rightArr.begin(), rightArr.end());

        int i=0, j=0, k=0;
        int sz=leftArr.size(), m=rightArr.size();
        while(i<sz && j<m){
            nums[k++] = leftArr[i++];
            nums[k++] = rightArr[j++];
        }

        while(i<sz){
            nums[k++] = leftArr[i++];
        }
    }
};