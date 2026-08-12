// Last updated: 12/08/2026, 10:47:51
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> record;

        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] == "+") {
                int n = record.size();
                record.push_back(record[n - 1] + record[n - 2]);
            }
            else if (operations[i] == "D") {
                record.push_back(2 * record.back());
            }
            else if (operations[i] == "C") {
                record.pop_back();
            }
            else {
                record.push_back(stoi(operations[i]));
            }
        }

        int sum = 0;
        for (int x : record) sum += x;

        return sum;
    }
};
