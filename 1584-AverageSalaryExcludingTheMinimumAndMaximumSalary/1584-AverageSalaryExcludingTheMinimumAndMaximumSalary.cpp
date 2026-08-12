// Last updated: 12/08/2026, 10:47:11
class Solution {
public:
    double average(vector<int>& salary) {
        int n = salary.size();
        int count=0;
        double summ=0;
    sort(salary.begin(),salary.end());

    for (int i = 1; i < n-1; i++)
    {
        summ = summ + salary[i];
        count++;
    }
    
    return summ /count;
    }
};