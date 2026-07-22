class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> smallEleArr, largeEleArr, equalEleArr;
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(nums[i] < pivot){
                smallEleArr.push_back(nums[i]);
            }
            else if(nums[i] == pivot){
                equalEleArr.push_back(nums[i]);
            }
            else{
                largeEleArr.push_back(nums[i]);
            }
        }

        int sml = smallEleArr.size(), lrg = largeEleArr.size(), eql = equalEleArr.size();
        for(int i=0; i<sml; i++){
            nums[i] = smallEleArr[i];
        }
        for(int i=0; i<eql; i++){
            nums[sml+i] = equalEleArr[i];
        }
        for(int i=0; i<lrg; i++){
            nums[sml + eql + i] = largeEleArr[i];
        }

        return nums;
    }
};