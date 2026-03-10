class Solution {
public:
    long long minCost(string s, int encCost, int flatCost) {
        int x = 0;
        int n = s.size();
        long long cost;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                x++;
            }
        }
        if(x==0) cost = flatCost;
        else cost = 1ll*x*n*encCost;
        if(n%2==0){
        long long left = minCost(s.substr(0,n/2),encCost,flatCost);
        long long right = minCost(s.substr(n/2,n-1),encCost,flatCost);
        cost = min(cost,left+right);
        }
        return cost;
    }
};