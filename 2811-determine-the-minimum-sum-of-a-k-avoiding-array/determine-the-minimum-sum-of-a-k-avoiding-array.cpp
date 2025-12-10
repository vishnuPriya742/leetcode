class Solution {
public:
    int minimumSum(int n, int k) {
        vector<int>vec;
        int cnt = 1;
        while(vec.size()<n && cnt<((k/2)+1)){
          vec.push_back(cnt);
          cnt++;
        }
        cnt = k;
        while(vec.size()<n){
            vec.push_back(cnt);
            cnt++;
        }
        int sum = 0;
        for(int i=0;i<vec.size();i++){
            sum+=vec[i];
        }
        return sum;
    }
};