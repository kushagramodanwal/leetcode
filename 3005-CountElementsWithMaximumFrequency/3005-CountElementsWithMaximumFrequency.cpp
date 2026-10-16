// Last updated: 16/10/2026, 19:44:58
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mpp;

        for(auto x:nums){
            mpp[x]++;
        }
        int count = 0;
        int maxi = INT_MIN;
        for(auto x : mpp){
            maxi = max(maxi,x.second);
        }
        for(auto x : mpp){
          if(maxi == x.second)
          count++;
        }
        return count*maxi;
    }
};
