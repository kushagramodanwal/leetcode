class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        
        int maxi = 0;
        int n = gain.size();
        vector<int>prefix(n+1,0);
        for(int i =1;i<=gain.size();i++){

           prefix[i] = prefix[i-1] +gain[i-1];


        }
         for(int i =0;i<prefix.size();i++){


            maxi = max(maxi,prefix[i]);

        }
        return maxi;
    }
};