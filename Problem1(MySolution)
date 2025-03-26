// Problem Statement : Given a time in 12-hour AM/PM format, convert it to military (24-hour) time.
// My Solution.
string timeConversion(string s) {
    string formattedTime = s;
    int hour = stoi(s.substr(0,2));
    string time = s.substr(s.size()-2, 2);
    
    if(time == "PM" && hour == 12){
        formattedTime[0] = '1';
        formattedTime[1] = '2';
        formattedTime.erase(s.size()-2);
        return formattedTime;
    }
    else if(time == "AM" && hour == 12){
        formattedTime[0] = '0';
        formattedTime[1] = '0';
        formattedTime.erase(s.size()-2);
        return formattedTime;
    }
    else if(time == "PM"){
        hour += 12;
        string newhour = to_string(hour);
        formattedTime[0] = newhour[0];
        formattedTime[1] = newhour[1];
        formattedTime.erase(s.size()-2);
        return formattedTime;
    }
    s.erase(s.size()-2);
    return s;
}
