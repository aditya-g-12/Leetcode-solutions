class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       int maxc=0;
       int current1=0;
       for(int i : nums){
        if(i==1){
            current1++;
        }
        else{
            if(current1>maxc){
                maxc=current1;
            }
            current1=0;
        }
       } 
       if(current1>maxc){
                maxc=current1;
            }
       return maxc;
    }
};