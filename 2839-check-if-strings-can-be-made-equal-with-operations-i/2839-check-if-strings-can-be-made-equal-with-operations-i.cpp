class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        string str1 = s2, str2 = s2, str3 = s2;

        swap(str1[0], str1[2]);
        swap(str2[1], str2[3]);

        swap(str3[0], str3[2]);
        swap(str3[1], str3[3]);

        if(s1 == str1 || s1 == str2 || s1 == str3 || s1 == s2){
            return true;
        }
        else{
            return false;
        }
    }
};