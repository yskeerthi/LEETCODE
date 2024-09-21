class Solution {
public:
    int dayOfYear(string date) {
        int year = stoi(date.substr(0, 4));
        int month = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8, 2));

        // Days in each month for a non-leap year
        vector<int> daysInMonth = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        // Check if it's a leap year
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            daysInMonth[1] = 29; // February has 29 days in a leap year
        }

        // Sum the days from the previous months and add the current month's days
        int sum = 0;
        for (int i = 0; i < month - 1; i++) {
            sum += daysInMonth[i];
        }
        sum += day;

        return sum;
    }
};
