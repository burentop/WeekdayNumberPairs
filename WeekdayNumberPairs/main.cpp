//
//  main.cpp
//  WeekdayNumberPairs
//
//  Created by Brent Perry on 7/13/16.
//  Copyright © 2016 Brent Perry. All rights reserved.
//

#include "../../../std_lib_facilities.h"

int main()
{
    string input_day;
    int intput_number;
    int bad_entries = 0;
    vector<int> sunday;
    vector<int> monday;
    vector<int> tuesday;
    vector<int> wednesday;
    vector<int> thursday;
    vector<int> friday;
    vector<int> saturday;
    
    cout << "Enter a day of the week, followed by a space, followed by a whole number.\n";
    cout << "Enter 'quit quit' to quit.\n";
    while (cin >> input_day >> intput_number) {
        if (input_day == "Sunday" || input_day == "sunday" || input_day == "Sun" || input_day == "sun") {
            sunday.push_back(intput_number);
        } else if (input_day == "Monday" || input_day == "monday" || input_day == "Mon" || input_day == "mon") {
            sunday.push_back(intput_number);
        } else if (input_day == "Tuesday" || input_day == "tuesday" || input_day == "Tue" || input_day == "tue") {
            sunday.push_back(intput_number);
        } else if (input_day == "Wednesday" || input_day == "wednesday" || input_day == "Wed" || input_day == "wed") {
            sunday.push_back(intput_number);
        } else if (input_day == "Thursday" || input_day == "thursday" || input_day == "Thur" || input_day == "thur") {
            sunday.push_back(intput_number);
        } else if (input_day == "Friday" || input_day == "friday" || input_day == "Fri" || input_day == "fri") {
            sunday.push_back(intput_number);
        } else if (input_day == "Saturday" || input_day == "saturday" || input_day == "Sat" || input_day == "sat") {
            sunday.push_back(intput_number);
        } else {
            ++bad_entries;
        }
    }
    
    cout << "You entered " << bad_entries << " invalid days.\n";
}
