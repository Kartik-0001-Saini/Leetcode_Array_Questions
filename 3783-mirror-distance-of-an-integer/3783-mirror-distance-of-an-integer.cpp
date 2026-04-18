class Solution {
public:

    int reverse(int num){
        int revNum = 0;
        while(num > 0){
            revNum = revNum*10 + num%10;
            num /= 10;
        }

        return revNum;
    }

    int mirrorDistance(int n) {
        int rev = reverse(n);

        return abs(rev - n);
    }
};