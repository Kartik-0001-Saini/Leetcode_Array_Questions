class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        int n = arr.size();
        queue<int> q;
        q.push(start);
        vector<bool> visit(n, false);

        while(!q.empty()){
            int i = q.front();
            q.pop();

            if(i < 0 || i >= n || visit[i]){
                continue;
            }

            if(arr[i] == 0) return true;

            visit[i] = true;
            q.push(i+arr[i]);
            q.push(i-arr[i]);
        }

        return false;
    }
};