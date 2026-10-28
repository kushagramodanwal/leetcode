
class Solution {
public:
    int atMost(vector<int>& nums, int k) {
        int i = 0, odd = 0, cnt = 0;

        for (int j = 0; j < nums.size(); j++) {
            odd += nums[j] % 2;

            while (odd > k) {
                odd -= nums[i] % 2;
                i++;
            }

            cnt += j - i + 1;
        }

        return cnt;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        return atMost(nums, k) - atMost(nums, k - 1);
    }
};
