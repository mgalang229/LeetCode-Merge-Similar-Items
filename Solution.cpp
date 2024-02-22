class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        map<int, int> mp;
        for (vector<int>& vec : items1) {
            mp[vec[0]] += vec[1];
        }
        for (vector<int>& vec : items2) {
            mp[vec[0]] += vec[1];
        }
        vector<vector<int>> ans;
        for (auto& x : mp) {
            ans.push_back({x.first, x.second});
        }
        return ans;
    }
};
