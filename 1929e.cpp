class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector <int> out(2*(nums.size()));
        for(int i=0;i<nums.size();i++){
            out[i]=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            out[nums.size()+i]=nums[i];
        }
        return out;
    }
};