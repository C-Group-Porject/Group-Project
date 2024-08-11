#include <iostream>

class Date {
private:
    int day, month, year;

    // Helper function to determine if a year is a leap year
    bool isLeapYear(int year) const {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }

    // Helper function to find the number of days in a given month
    int daysInMonth(int month, int year) const {
        if (month == 2) { // February
            return isLeapYear(year) ? 29 : 28;
        }
        // April, June, September, November have 30 days, others have 31
        return (month == 4 || month == 6 || month == 9 || month == 11) ? 30 : 31;
    }

