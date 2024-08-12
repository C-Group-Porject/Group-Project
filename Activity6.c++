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
public:
    // Constructor
    Date(int d = 1, int m = 1, int y = 2000) : day(d), month(m), year(y) {}

    // Overload relational operators
    bool operator<(const Date& other) const {
        return (year < other.year) || 
               (year == other.year && month < other.month) || 
               (year == other.year && month == other.month && day < other.day);
    }

    bool operator<=(const Date& other) const {
        return *this < other || *this == other;
    }

    bool operator>(const Date& other) const {
        return !(*this <= other);
    }

    bool operator>=(const Date& other) const {
        return !(*this < other);
    }

    bool operator==(const Date& other) const {
        return day == other.day && month == other.month && year == other.year;
    }

    bool operator!=(const Date& other) const {
        return !(*this == other);
    }
 // Overload ++ operator to increment the date by one day
    Date& operator++() {
        day++;
        if (day > daysInMonth(month, year)) {
            day = 1;
            month++;
            if (month > 12) {
                month = 1;
                year++;
            }
        }
        return *this;
    }
 // Overload + operator to add a given number of days
    Date operator+(int days) const {
        Date newDate = *this;
        while (days > 0) {
            ++newDate;
            days--;
        }
        return newDate;
    }

    // Conversion to int to get the number of days elapsed in the current year
    operator int() const {
        int daysElapsed = day;
        for (int m = 1; m < month; m++) {
            daysElapsed += daysInMonth(m, year);
        }
        return daysElapsed;
    }

    // Function to display the date
    void display() const {
        std::cout << day << "/" << month << "/" << year << std::endl;
    }
};

int main() {
    int d, m, y, daysToAdd;

    // Get user input for the date
    std::cout << "Enter the date (day month year): ";
    std::cin >> d >> m >> y;

    // Create a Date object with user input
    Date dt(d, m, y);

    // Display the original date
    std::cout << "Original date: ";
    dt.display();

    // Incrementing the date by one day
    ++dt;
    std::cout << "After incrementing by one day: ";
    dt.display();

    // Get user input for the number of days to add
    std::cout << "Enter the number of days to add: ";
    std::cin >> daysToAdd;

    // Adding the specified number of days to the date
    Date newDate = dt + daysToAdd;
    std::cout << "After adding " << daysToAdd << " days: ";
    newDate.display();

    // Converting Date to int to get the number of days elapsed in the current year
    int daysElapsed = newDate;
    std::cout << "Days elapsed in the current year up to this date: " << daysElapsed << std::endl;

    return 0;
}


