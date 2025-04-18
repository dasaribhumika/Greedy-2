// https://leetcode.com/problems/queue-reconstruction-by-height/description/
// Test Complexity: O(n^2)
// Space Complexity: O(n)

class Solution {
    public:
        static bool comp(vector<int> &a, vector<int> &b){
            if(a[0] == b[0]) return a[1] < b[1];
            return a[0] > b[0];
        }
        vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
            sort(people.begin(), people.end(), comp);
            vector<vector<int>> ans;
            for(auto person:people){
                ans.insert(ans.begin() + person[1], person);
            }
            return ans;
        }
    };