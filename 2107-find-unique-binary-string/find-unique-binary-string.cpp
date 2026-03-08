class Solution {
public:
string res = "";
void fun(string &curr,int n,set<string>&s){
    if(!res.empty()) return;
    if (curr.size() == n) {
        if (s.find(curr) == s.end()) {
           res = curr;
         }
        return;
    }
    curr.push_back('0');
    fun(curr,n,s);
    curr.pop_back();
    curr.push_back('1');
    fun(curr,n,s);
    curr.pop_back();
}
    string findDifferentBinaryString(vector<string>& nums) {
        set<string>s;
        int n = nums.size();
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        string curr = "";
        fun(curr,n,s);
        return res;

    }
};