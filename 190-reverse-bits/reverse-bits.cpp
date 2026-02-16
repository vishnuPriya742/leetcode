class Solution {
public:
    int reverseBits(int n) {
        string str = "";
        for (int i = 0; i < 32; i++) {
            int bit = n % 2;
            str += to_string(bit);
            n = n / 2;
        }
        unsigned int ans = 0;
        for (int i = 0; i < 32; i++) {
            if (str[i] == '1') {
                ans += (1u << (31 - i)); 
            }
        }

        return ans;
    }
};
