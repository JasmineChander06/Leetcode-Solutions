class Solution {
public:
    bool check(vector<int>& nums, int zero, int step) {
        int n = nums.size();

        for (int i = 1; i < n; i++) {
            int idx = (zero + i * step + n) % n;
            int prev = (zero + (i - 1) * step + n) % n;

            if (nums[idx] < nums[prev])
                return false;
        }

        return true;
    }

    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int zero = find(nums.begin(), nums.end(), 0) - nums.begin();

        int ans = INT_MAX;
        if (check(nums, zero, 1)) {
            ans = min(ans, zero);
            ans = min(ans, n - zero + 2);
        }
        if (check(nums, zero, -1)) {
            ans = min(ans, zero + 2);
            ans = min(ans, n - zero);
        }

        return ans == INT_MAX ? -1 : ans;
    }
};