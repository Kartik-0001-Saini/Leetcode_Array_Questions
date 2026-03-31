class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        // area for first rec.
        int area1 = (ax2-ax1) * (ay2-ay1);
        // area for second rec.
        int area2 = (bx2-bx1) * (by2-by1);

        // calculate overlap region
        int ovlLen = min(ax2, bx2) - max(ax1, bx1);
        int ovlWth = min(ay2, by2) - max(ay1, by1);
        int ovl = 0;

        if(ovlLen > 0 && ovlWth > 0){
            ovl = ovlLen * ovlWth;
        }

        return area1 + area2 - ovl;
    }
};