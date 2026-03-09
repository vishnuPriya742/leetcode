class Solution {
public:
    int minOperations(string s) {
        string a = s;
        int n = s.size();
        sort(a.begin(),a.end());
        if(a==s){
            return 0;
        }
        if(n==2) return -1;
        string b=s, c=s;
        sort(b.begin()+1,b.end());
        sort(c.begin(),c.end()-1);
        if(b==a || c==a){
            return 1;
        }
        sort(b.begin(),b.end()-1);
        sort(c.begin()+1,c.end());
        if(b==a || c==a){
            return 2;
        }
        return 3;
    }
};