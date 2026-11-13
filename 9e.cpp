class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        else{
        int original = x;
        long long rever=0;
        while(x!=0){
        rever = (rever*10)+x%10;
        x/=10;
        }
        if(rever==original){
            return true ;
        }
        else{
            return false;
        }
        }
    }
};