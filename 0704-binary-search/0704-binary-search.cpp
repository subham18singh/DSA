class Solution {
public:
    int search(vector<int>& arr, int key) {
      int st = 0;
      int en = arr.size()-1;
      int mid = (st+en)/2;
      while(st <= en){
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            st = mid+1;
        }
        else{
            en = mid-1;
        }
        mid = (st+en) / 2;
      }
      return -1;
    }
};