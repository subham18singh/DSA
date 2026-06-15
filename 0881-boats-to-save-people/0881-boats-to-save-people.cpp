class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int st = 0;
        int en = people.size()-1;
        int boat = 0;
        sort(people.begin(),people.end());
        while(st <= en){
            if(people[st] + people[en] <= limit){
                boat++;
                st++;
                en--;
            }
            else{
                if(people[st] >= people[en]){
                    boat++;
                    st++;
                }
                else{
                    en--;
                    boat++;
                }
            }
        }
        return boat;
    }
};