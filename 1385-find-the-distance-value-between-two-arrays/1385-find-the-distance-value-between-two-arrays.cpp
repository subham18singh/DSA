class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int cnt = 0;
        for(int i = 0;i<arr1.size();i++){
            int cn = 0;
            for(int j = 0;j<arr2.size();j++){
                if(abs(arr1[i] - arr2[j]) <= d){
                    break;
                }
                else{
                    cn++;
                }
            }
            if(cn == arr2.size()){
                cnt++;
            }
        }
        return cnt;
    }
};