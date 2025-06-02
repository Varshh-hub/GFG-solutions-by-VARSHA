class Solution {
public:
    string getBinaryRep(int n) {
        string res = "";
        for (int i = 31; i >= 0; i--) {
            res += (((n >> i) & 1) ? '1' : '0');
        }
        return res;
    }
};
