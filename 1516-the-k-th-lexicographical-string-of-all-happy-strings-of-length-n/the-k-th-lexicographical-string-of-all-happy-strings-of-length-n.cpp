class Solution {
public:
void generateStrings(int n,int k,vector<string>&vec,string temp){
    if(temp.size()==n){
        vec.push_back(temp);
        return;
    }
    for(char i='a';i<='c';i++){
        if( temp.size()>0  && temp.back()==i){
            continue;
        }
        generateStrings(n,k,vec,temp+i);
    }
}
    string getHappyString(int n, int k) {
        string temp = "";
        vector<string>vec;
        generateStrings(n,k,vec,temp);
        if(vec.size()<k){
            return "";
        }
        return vec[k-1];
    }
};