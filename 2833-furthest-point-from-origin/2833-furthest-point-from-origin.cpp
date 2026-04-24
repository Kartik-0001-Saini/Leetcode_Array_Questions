class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int leftTurn = 0, rightTurn = 0, blank = 0;
        for(int i=0; i<moves.size(); i++){
            if(moves[i] ==  'L'){
                leftTurn += 1;
            }
            else if(moves[i] == 'R'){
                rightTurn += 1;
            }
            else{
                blank += 1;
            }
        }

        return abs(rightTurn - leftTurn) + blank;
    }
};