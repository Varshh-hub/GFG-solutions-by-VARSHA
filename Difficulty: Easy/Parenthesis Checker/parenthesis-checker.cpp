class Solution {
  public:
    bool isBalanced(string& k) {
        stack<char> s;
        int n = k.length();

        for (int i = 0; i < n; i++) {
            char ch = k[i];

            if (ch == '(' || ch == '{' || ch == '[') {
                s.push(ch);
            } else if (ch == ')' || ch == '}' || ch == ']') {
                if (s.empty()) return false;
                char top = s.top();
                s.pop();
                if ((ch == ')' && top != '(') ||
                    (ch == '}' && top != '{') ||
                    (ch == ']' && top != '[')) {
                    return false;
                }
            }
        }

        return s.empty();
    }
};
