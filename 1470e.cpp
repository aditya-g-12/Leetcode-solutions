class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector <int> out(2*n);
        
        for(int i=0;i<n;i++){
            out[2*i]=nums[i];
            out[(2*i)+1]=nums[n+i];
        }
        return out;
    }
};