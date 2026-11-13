class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector <string> result;
        if(target[0]==1){
            result.push_back("Push");
        }
        else{
        for(int j=0;j<(target[0]-1);j++){
                    result.push_back("Push");
                    result.push_back("Pop");
        }
        result.push_back("Push");
        }

        for(int i=0;i<(target.size())-1;i++){
            int diff=target[i+1]-target[i];
            if(diff==1){
                result.push_back("Push");
            }
            else{
                for(int j=0;j<(diff-1);j++){
                    result.push_back("Push");
                    result.push_back("Pop");
                }
                result.push_back("Push");
            }
        }
        return result;
    }
};