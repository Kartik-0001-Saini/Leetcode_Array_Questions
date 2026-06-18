class Solution {
public:
    double angleClock(int hour, int minutes) {
        double hourHand = (hour%12)*30 + minutes * 0.5;
        double minuteHand = minutes * 6;

        double diff = abs(hourHand - minuteHand);
        return min(diff, 360-diff);
    }
};