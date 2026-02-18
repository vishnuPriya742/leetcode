class Solution {
public:
    bool hasAlternatingBits(int n) {
        int prev = n%2;
        n=n/2;
        while(n!=0){
            int rem = n%2;
            n=n/2;
            if(prev==rem){
                return false;
                break;
            }
            prev = rem;
        }
        return true;
    }
};