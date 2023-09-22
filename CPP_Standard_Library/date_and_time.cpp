#include <iostream>
#include <ctime>
using namespace std;

int main() {
    // Get the current system time
    time_t currentTime;
    time(&currentTime);

    // Convert the current time to a string
    char* timeString = ctime(&currentTime);

    cout << "Current time: " << timeString;

    // Create a tm struct to represent a specific date and time
    struct tm specificTime;
    specificTime.tm_year = 121; // Year - 1900 (2021)
    specificTime.tm_mon = 8;   // Month (September)
    specificTime.tm_mday = 22; // Day of the month
    specificTime.tm_hour = 12; // Hour
    specificTime.tm_min = 30;  // Minute
    specificTime.tm_sec = 0;   // Second

    // Convert the tm struct to a time_t value
    time_t specificTime_t = mktime(&specificTime);

    // Convert the time_t value to a string
    char* specificTimeString = ctime(&specificTime_t);

    cout << "Specific time: " << specificTimeString;

    // Formatting time using strftime
    char formattedTime[100];
    strftime(formattedTime, sizeof(formattedTime), "Formatted time: %Y-%m-%d %H:%M:%S", &specificTime);
    cout << formattedTime << endl;

    return 0;
}
