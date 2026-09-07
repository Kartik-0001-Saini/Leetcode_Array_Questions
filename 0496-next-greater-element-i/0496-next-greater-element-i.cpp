class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp;
        stack<int> st;
        int n = nums2.size();
        for(int i=n-1; i>=0; i--){
            // Here we are finding the element which is greater to present element
            while(st.size() > 0 && st.top() <= nums2[i]){
                st.pop();
            }

            // If we didn't find any element which is greater to present element then nums[i] = -1 else we assign the element with the help of stack
            if(st.empty()){
                mp[nums2[i]] = -1;
            }
            else{
                mp[nums2[i]] = st.top();
            }

            // Here we are storing all the elements either smaller or greater.
            st.push(nums2[i]);
        }

        vector<int> res;
        for(int i=0; i<nums1.size(); i++){
            res.push_back(mp[nums1[i]]);
        }

        return res;
    }
};