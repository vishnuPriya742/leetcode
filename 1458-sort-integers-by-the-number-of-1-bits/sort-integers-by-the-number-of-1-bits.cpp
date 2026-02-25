class Solution {
public:
static int count(int num){
    int cnt = __builtin_popcount(num);
    return cnt;
}
 static bool compare(int a,int b){
        if(count(a)==count(b)){
            return a<b;
        }
        return count(a)<count(b);
    }
    vector<int> sortByBits(vector<int>& arr) {
      sort(arr.begin(),arr.end(),compare);
      return arr;
    }
};