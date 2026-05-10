class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0, j = height.size()-1;
        int maxWater = 0;
        // int minHeight;/
        while(i < j){
            int width = j-i;
            int minHeight = min(height[i], height[j]);
            maxWater = max(maxWater, width * minHeight);
            if(height[i] < height[j]){
                i++;
            }
            else{
                j--;
            }
        }

        return maxWater;
    }
};