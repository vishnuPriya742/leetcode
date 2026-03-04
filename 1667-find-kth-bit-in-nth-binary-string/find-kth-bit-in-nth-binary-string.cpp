class Solution {
public:
    char findKthBit(int n, int k) {
        string str="";
        str+='0';
        for(int i=2;i<=n;i++){
            //str+='1';
            string temp = str;
            str += "1";
            for(int j=0;j<temp.size();j++){
                if(temp[j]=='1'){
                    temp[j]='0';
                }
                else{
                    temp[j]='1';
                }
            }
       //     cout << temp << endl;
            reverse(temp.begin(),temp.end());
            str+=temp;
        }
        return str[k-1];
    }
};