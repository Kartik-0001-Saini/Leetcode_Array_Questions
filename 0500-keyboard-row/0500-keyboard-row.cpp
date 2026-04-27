class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_set<char> st1 = {'q', 'w', 'e', 'r', 't',
                                   'y', 'u', 'i', 'o', 'p'};
        unordered_set<char> st2 = {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'};
        unordered_set<char> st3 = {'z', 'x', 'c', 'v', 'b', 'n', 'm'};
        vector<string> res;
        for (auto str : words) {
            int count1 = 0, count2 = 0, count3 = 0;
            for (auto ch : str) {
                ch = tolower(ch);
                if (st1.find(ch) != st1.end()) {
                    count1++;
                } else if (st2.find(ch) != st2.end()) {
                    count2++;
                } else {
                    count3++;
                }
            }

            if (count1 == str.size() || count2 == str.size() ||
                count3 == str.size()) {
                res.push_back(str);
            }
        }

        return res;
    }
};