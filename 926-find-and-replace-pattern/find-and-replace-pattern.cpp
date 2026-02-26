class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        int n = pattern.size();
        vector<string>ans;
        for(int i=0;i<words.size();i++){
            string s1 = words[i];
            unordered_map<char,char>mp1;
            unordered_map<char,char>mp2;
            bool flag = true;
            for(int j=0;j<n;j++){
                char a = s1[j];
                char b = pattern[j];
                if(mp1.count(a) && mp1[a]!=b) flag = false;
                if(mp2.count(b) && mp2[b]!=a) flag = false;
                mp1[a] = b;
                mp2[b] = a;
            }
            if(flag==true){
                ans.push_back(s1);
            }
        }
        return ans;
    }
};