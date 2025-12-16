class Solution {
public:
    int numDifferentIntegers(string word) {
        set<string> s;
        int i = 0;
        int n = word.size();
        while (i < n) {
            if (!isdigit(word[i])) {
                i++;
                continue;
            }
            string temp = "";
            while (i < n && isdigit(word[i])) {
                temp += word[i];
                i++;
            }
            int j = 0;
            while (j < temp.size()) {
                if (temp[j] == '0') {
                    j++;
                } else
                    break;
            }
            temp = temp.substr(j);
            s.insert(temp);
        }
        return s.size();
    }
};