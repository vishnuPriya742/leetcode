class Solution {
public:
    string decodeString(string s) {
        string ans = "";
        string num = "";
        stack<int> cnt;
        stack<string> st;
        for (int i=0;i<s.size();i++) {
            if (isdigit(s[i])) {
                num+=s[i];
            }
            else if (s[i] == '[') {
                int num1 = stoi(num);
                cnt.push(num1);
                st.push(ans);
                num = "";
                ans = "";
            }
            else if (s[i] == ']') {
                int times = cnt.top(); cnt.pop();
                string prev = st.top(); st.pop();
                string temp = "";
                for (int k=0;k<times;k++) {
                    temp += ans;
                }
                ans = prev + temp;
            }
            else {
                ans += s[i];
            }
        }
        return ans;
    }
};