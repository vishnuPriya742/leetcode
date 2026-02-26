class Solution {
public:
    vector<int> diffWaysToCompute(string s) {
        vector<int>ans;
        for(int i=0;i<s.size();i++){
            if(s[i]=='+' || s[i]=='*' || s[i]=='-'){
                vector<int>left = diffWaysToCompute(s.substr(0,i));
                vector<int>right = diffWaysToCompute(s.substr(i+1,s.size()));
                char op = s[i];
                for(int k=0;k<left.size();k++){
                    for(int j=0;j<right.size();j++){
                        if(op=='*'){
                            ans.push_back(left[k]*right[j]);
                        }
                        else if(op=='+'){
                            ans.push_back(left[k]+right[j]);
                        }
                        else{
                            ans.push_back(left[k]-right[j]);
                        }
                    }
                } 
            }
        }
        if(ans.size()==0){
            ans.push_back(stoi(s));
        }
        return ans;
    }
};