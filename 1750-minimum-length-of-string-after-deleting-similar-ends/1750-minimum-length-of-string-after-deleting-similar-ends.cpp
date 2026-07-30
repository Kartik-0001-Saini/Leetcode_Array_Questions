class Solution {
public:
    int minimumLength(string s) {
        int n = s.size();
        int left = 0, right = n-1;

        while(left < right){
            if(s[left] != s[right]){
                return right - left + 1;
            }
            char curr = s[left];
            while(left <= right && curr == s[left]){
                left++;
            }
            while(left <= right && curr == s[right]){
                right--;
            }
        }

        return right - left + 1;
    }
};