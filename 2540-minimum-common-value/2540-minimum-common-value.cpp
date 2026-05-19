class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();
        int i=0, j=0;
        int commanEle = -1;

        while(i < n && j < m){
            if(nums1[i] == nums2[j]){
                commanEle = nums1[i];
                break;
            }
            if(nums1[i] < nums2[j]){
                i++;
            }
            else{
                j++;
            }
        }

        return (commanEle == -1) ? -1 : commanEle;
    }
};