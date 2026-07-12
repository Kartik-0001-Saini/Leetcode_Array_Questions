class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        if(arr.size() == 0) return {};
        
        unordered_map<int, int> mp;
        int n = arr.size();
        vector<int> num = arr;
        vector<int> rankArr(n, 0);
        sort(num.begin(), num.end());
        rankArr[0] = 1;
        for(int i=1; i<n; i++){
            if(num[i] > num[i-1]){
                rankArr[i] = rankArr[i-1] + 1;
            }
            else{
                rankArr[i] = rankArr[i-1];
            }
        }

        for(int i=0; i<n; i++){
            mp[num[i]] = rankArr[i];
        }

        for(int i=0; i<n; i++){
            rankArr[i] = mp[arr[i]];
        }
        return rankArr;
    }
};