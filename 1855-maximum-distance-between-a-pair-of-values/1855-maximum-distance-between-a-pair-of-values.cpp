class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();
        int i = 0, j = 0;
        int distance = INT_MIN;

        while(i < n && j < m){

            if(i > j) j = i;
            
            if(nums1[i] <= nums2[j]){
                distance = max(distance, j-i);
                j++;
            }
            else{
                i++;
            }
        }

        return distance == INT_MIN ? 0 : distance;
    }
};