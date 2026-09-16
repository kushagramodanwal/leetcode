// Last updated: 16/09/2026, 11:42:25
class Solution {
public:
    int findMin(vector<int>& nums) {

        int lo = 0;
        int hi = nums.size() - 1;
        int res = -1;
        while (lo <= hi) {
            int mid = (lo + hi) / 2;

            if (nums[mid] > nums[nums.size() - 1]) {
                lo = mid + 1;
            }

            else {

                res = mid;
                hi = mid - 1;
            }
        }
        return nums[res];
    }
};
// array ko do part me tod do  p1 aur p2
// p2 left half hai aur p1 right half

// 5  6  7  | 1  2  3  4
// p2 p2 p2 | p1 p1 p1 p1

// p2 wala part hamesha p1 ke saare elements se bada hi hoga

// to check krlo ki a[mid] <= a[last] hai ya nahi
// agar a[mid] <= a[last]
// to mid p1 me hai (sorted right part)
// aur mid khud bhi answer ho skta hai
// isliye res me mid store krlo aur LEFT jao (kuki isse chota koi element
// ho skta hai jo abhi bhi p1 me hi ho)

// 5 6 7 1 2 3 4
//    mid = 3
// a[mid] = 1, a[n-1] = 4
// 1 <= 4 → mid is in p1
// res = mid
// right = mid - 1  (left jao)

// else (a[mid] > a[last])
// to mid p2 me hai (bada wala left part)
// yaha se answer nahi mil skta, kuki p2 ke saare elements
// p1 ke elements se bade hain
// isliye res update MAT karo, aur RIGHT jao

// 5 6 7 1 2 3 4
// mid = 1
// a[mid] = 6, a[n-1] = 4
// 6 > 4 → mid is in p2
// left = mid + 1  (right jao)

// End me res = p1 ka first occurrence
// aur wahi minimum element ka index hoga