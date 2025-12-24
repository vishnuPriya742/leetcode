class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& c) {
        sort(c.begin(),c.end());
        int sum = 0;
        for(int i=0;i<apple.size();i++){
            sum+=apple[i];
        }
        int idx = 0;
        for(int i=c.size()-1;i>=0;i--){
            sum-=c[i];
            if(sum<=0){
                break;
            }
            idx++;
        }
        return idx+1;
    }
};