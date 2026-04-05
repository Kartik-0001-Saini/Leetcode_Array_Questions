class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int st = 0, end = n-1;
        int maxArea = 0;
        // in this we simply we take two pointer..
        while(st < end){
            // finding the min. height b/w both the pointer
            int ht = min(height[st], height[end]);
            // finding width 
            int wth = end - st;
            // calculating area
            maxArea = max(maxArea, wth*ht);
            // if 1st pointer is less than 2nd one than we proceed pointer to next
            if(height[st] < height[end]){
                st++;
            }
            else{
                end--;
            }
        }

        return maxArea;
    }
};