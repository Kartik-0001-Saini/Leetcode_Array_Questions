class Solution {
public:
    char processStr(string s, long long k) {
        long long len = 0;
        // finding the total length of the string
        for(char c:s){
            if(c == '*'){
                len = max((long long)0, len-1);
            }
            else if(c == '#'){
                len *= 2;
            }
            else if(c != '%'){
                len++;
            }
        }
        // edge condition
        if(k >= len) return '.';
        // backward checking to the string 
        // in backward checking we are doing completly inverse operation whcih we are doing in forward
        for(int i=(int)s.size()-1; i>=0; i--){
            char c = s[i];
            if(c == '*'){
                // in forward we are subtracting the length of the string so now in backward we are simply adding the len
                len++;
            }

            else if(c == '#'){
                // in forward condition we are dubling the string now we are going to half the string..
                long long half = len/2;
                if(k >= half){
                    k -= half;
                }
                len = half;
            }

            else if(c == '%'){
                // in this we are reversing the string for finding the index from reversing we have to find apply the formula which works on reverse string to find the idx of the string in reverse manner
                k = len-1-k;
            }

            else{
                // at last if we see the charcter then we have to find the idx is maching to it or not if matching then we have to retun the charcter otherwise we have to decrease the lenght of the string by 1
                if(k == len - 1){
                    return c;
                }
                len--;
            }
        }

        return '.';
    }
};