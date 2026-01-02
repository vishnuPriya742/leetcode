class Solution {
public:
    string reorderSpaces(string text) {
        int spacecnt = 0;
        vector<string>s;
        string temp = "";
        for(int i=0;i<text.size();i++){
            if(text[i]==' '){
                spacecnt++;
                if(temp.size()!=0){
                s.push_back(temp);
                 temp.clear();
                }
            }
            else{
                temp+=text[i];
            }
        }
        if(!temp.empty()){
        s.push_back(temp);
        }
        if(s.size()==1){
            return s[0]+string(spacecnt,' ');
        }
            int cnt1 = spacecnt/(s.size()-1);
            int cnt2 = spacecnt%(s.size()-1);
            string ans = s[0];
            for(int i=1;i<s.size();i++){
                ans+=string(cnt1,' ')+s[i];
            }
            if(cnt2){
                ans+=string(cnt2,' ');
            }
            return ans;
    }
};