// Last updated: 12/08/2026, 10:47:31
class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        string days[] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
        int monthDays[] = {31,28,31,30,31,30,31,31,30,31,30,31};

        auto isLeap = [](int y) {
            return (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0));
        };

        int totalDays = 0;

        for(int y = 1971; y < year; y++)
            totalDays += 365 + (isLeap(y) ? 1 : 0);

        for(int m = 1; m < month; m++) {
            totalDays += monthDays[m-1];
            if(m == 2 && isLeap(year)) totalDays += 1; 
        }

        totalDays += day;

        return days[(totalDays + 4) % 7];
    }
};
