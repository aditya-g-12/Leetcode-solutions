class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector <int> out(nums.size());
        vector <int> count(101,0);
        for(int i : nums){
            count[i]++;
        }
        for(int i=0;i<nums.size();i++){
            int sum=0;
            for(int j=0;j<nums[i];j++){
                sum+=count[j];
            }
            out[i]=sum;
        }
        return out;

    }
};