class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for(int x: nums){
            if(s.count(x)) return true;
            s.insert(x);
        }
        return false;
    }
};
    