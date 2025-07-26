class Solution {
public:
    vector<int> findDuplicates(vector<int>& arr) {
        int n = arr.size();
        map<int, int> m;
        vector<int> duplicates;

        for (int i = 0; i < n; i++) {
            m[arr[i]]++;
        }

        for (auto& i : m) {
            if (i.second > 1) {
                duplicates.push_back(i.first);
            }
        }

        return duplicates;
    }
};
