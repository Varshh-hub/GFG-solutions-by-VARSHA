class Solution {
  public:
    string removeChars(string str1, string str2) {
        map<char, bool> mark;

        for (char ch : str2) {
            mark[ch] = true;
        }

        string result;
        for (char ch : str1) {
            if (!mark[ch]) {
                result += ch;
            }
        }

        return result;
    }
};
