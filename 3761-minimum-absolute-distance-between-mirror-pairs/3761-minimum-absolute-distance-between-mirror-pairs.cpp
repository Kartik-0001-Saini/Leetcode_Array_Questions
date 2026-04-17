class Solution {
public:

    int reverse(int num){
        int revNum = 0;
        while(num > 0){
            revNum = revNum * 10 + num%10;
            num /= 10;
        }

        return revNum;
    }

    int minMirrorPairDistance(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;
        
        int cls = INT_MAX;
        for(int i=0; i<n; i++){
            if(mp.find(nums[i]) !=  mp.end()){
                cls = min(cls, abs(i-mp[nums[i]]));
            }

            int ele = reverse(nums[i]);
            mp[ele] = i;
        }


        return cls == INT_MAX ? -1 : cls;
    }
};