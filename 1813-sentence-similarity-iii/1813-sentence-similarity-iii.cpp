class Solution {
public:
    void splitFunction(string sentence, vector<string>& words){
        string res = "";

        for(auto ch:sentence){
            if(ch != ' '){
                res+=ch;
            }
            else{
                words.push_back(res);
                res = "";
            }
        }
        
        if(!res.empty()){
            words.push_back(res);
        }
    }

    bool areSentencesSimilar(string sentence1, string sentence2) {
        vector<string> word1, word2;

        splitFunction(sentence1, word1);
        splitFunction(sentence2, word2);

        if(word1.size() < word2.size()) swap(word1, word2);

        int st = 0, end = 0;
        int n1 = word1.size(), n2 = word2.size();

        while(st < n2 && word1[st] == word2[st]) st++;

        while(end < n2 && word1[n1-end-1] == word2[n2-end-1]) end++;

        return st+end >= n2;
    }
};