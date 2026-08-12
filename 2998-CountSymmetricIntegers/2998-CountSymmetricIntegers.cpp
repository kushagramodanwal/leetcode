// Last updated: 12/08/2026, 10:45:50
class Solution
{
public:
    int countSymmetricIntegers(int low, int high)
    {
        int count = 0;

        for (int num = low; num <= high; num++)
        {
            vector<int> v;
            int x = num;

            while (x > 0)
            {
                v.push_back(x % 10);
                x /= 10;
            }
            reverse(v.begin(), v.end());

            if (v.size() == 2)
            {
                if (v[0] == v[1])
                    count++;
            }
            else if (v.size() == 4)
            {
                if (v[0] + v[1] == v[2] + v[3])
                    count++;
            }
        }

        return count;
    }
};
