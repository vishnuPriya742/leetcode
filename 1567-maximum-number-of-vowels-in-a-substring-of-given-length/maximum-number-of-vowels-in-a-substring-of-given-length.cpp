class Solution {
public:
    int maxVowels(string s, int k) {
        int n=s.size();
        int vc=0;
        for(int i=0;i<k;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' ||s[i]=='u'){
                vc++;
            }
        }
            int j=0;
            int res=vc;
            for(int i=k;i<n;i++){
                if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' ||s[i]=='u'){
                    vc++;
                }
                if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' ||s[j]=='u'){
                    vc--;
                }
                
                res=max(vc,res);
                j++;

            }
            return res;
    
        
    }
};