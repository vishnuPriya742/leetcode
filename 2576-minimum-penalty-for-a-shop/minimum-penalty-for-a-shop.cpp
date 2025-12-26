class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.size();
        int cnt2 = 0;
        int idx = 0;
        int cnt = 0;
        for(int i=0;i<n;i++){
            if(customers[i]=='N'){
                cnt++;
            }
            else{
                cnt--;
            }
            if(cnt<cnt2){
                idx = i+1;
                cnt2 = cnt;
            }
        }
        return idx;
    }
};