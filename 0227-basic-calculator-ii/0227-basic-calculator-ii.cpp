class Solution {
public:
    int calculate(string s) {
        int num = 0;
        char op = '+';
        stack<int> st;
        s+='+';

        for(auto ch:s){
            if(ch == ' ') continue;

            if(isdigit(ch)){
                num = num*10 + (ch - '0');
            }
            else{
                if(op == '+'){
                    st.push(num);
                }
                else if(op == '-'){
                    st.push(-num);
                }
                else if(op == '*'){
                    int ele = st.top();
                    st.pop();
                    int product = ele*num;
                    st.push(product);
                }
                else if(op == '/'){
                    int ele = st.top();
                    st.pop();
                    int div = ele/num;
                    st.push(div);
                }
                op = ch;
                num = 0;
            }
        }

        int res = 0;
        while(!st.empty()){
            res += st.top();
            st.pop();
        }

        return res;
    }
};