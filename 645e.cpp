class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int x=0;
        for(int i=0;i<nums.size();i++){
            x=x^nums[i];
        }
        for(int i=1;i<nums.size()+1;i++){
            x=x^i;
        }
        int bit=x&(-x);
        int a=0;
        int b=0;
        for(int i:nums){
            if((i&bit)==0){
                b=b^i;
            }
            else{
                a=a^i;
            }
        }
        for(int i=1;i<nums.size()+1;i++){
            if((i&bit)==0){
                b=b^i;
            }
            else{
                a=a^i;
            }
        }
        int c=0;
        vector <int> result (2);
        for(int i : nums){
            if(i==a){
               c++; 
            }
        }
        if(c==0){
            result[0]=b;
            result[1]=a;

        }
        else{
            result[1]=b;
            result[0]=a;

        }
        return result;

    }
};