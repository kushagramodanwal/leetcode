class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int i = 0;
        int j = 0;
        int n = arr.size();
        double sum = 0;
        int cnt=0;
        double maxi = INT_MIN;

        while (j < n) {

            sum = sum + arr[j];
            if (j - i + 1 < k)
                j++;

            else if (j - i + 1 == k) {
                double avg = sum / k;
                if(avg >= threshold) cnt++;
                sum = sum - arr[i];
                i++;
                j++;
            }
        }
        return cnt;
    }
};
