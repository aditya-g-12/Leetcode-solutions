class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> freq(nums.size()+1,0);
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        vector <int> out;
        for(int i=1;i<nums.size()+1;i++){
            if(freq[i]==0){
                out.push_back(i);
            }
        }
        return out;
    }
};