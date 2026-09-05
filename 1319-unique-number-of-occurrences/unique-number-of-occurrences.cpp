class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;

        for(int x: arr){
            mp[x]++;
        }

        unordered_set<int> st;

        for(auto it : mp){
            if(st.count(it.second)){
                return false;
            }

            st.insert(it.second);
        }

        return true;
    }
};