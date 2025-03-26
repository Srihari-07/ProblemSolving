string timeConversion(string s) {
    int hour = stoi(s.substr(0, 2));  // Extract hour as an integer
    string minutes_seconds = s.substr(2, 6); // Extract ":mm:ss"
    string period = s.substr(8, 2);  // Extract "AM" or "PM"

    // Convert hour based on AM/PM rules
    if (period == "AM" && hour == 12) {
        hour = 0;  // Convert "12 AM" to "00"
    } else if (period == "PM" && hour != 12) {
        hour += 12;  // Convert "01 PM" to "13", "02 PM" to "14", etc.
    }

    // Format hour as two digits and return the final time
    return (hour < 10 ? "0" : "") + to_string(hour) + minutes_seconds;
}
