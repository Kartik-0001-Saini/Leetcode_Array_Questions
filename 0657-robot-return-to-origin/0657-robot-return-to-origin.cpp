class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0;
        for(auto move:moves){
            if(move == 'U') x++;
            if(move == 'D') x--;

            if(move == 'L') y++;
            if(move == 'R') y--;
        }

        return x==0 && y==0;
    }
};