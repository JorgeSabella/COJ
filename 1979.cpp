#include <iostream>

using namespace std;

int main()
{
    int day = 11;
    int hour = 11;
    int minute = 11;

    int endDay, endHour, endMinute;
    cin >> endDay >> endHour >> endMinute;
    int Result = 0;
    if(endDay > day){
        Result += (endDay - day) * 24 *60;
        if(endHour != hour){
            Result += (endHour - hour) * 60;
            if(endMinute != minute){
                Result += (endMinute - minute);
            }
        } else{
            if(endMinute != minute){
                Result += (endMinute - minute);
            }
        }

    } else if(endDay == day){
        if(endHour > hour){
            Result += (endHour - hour) * 60;
            if(endMinute != minute){
                Result += (endMinute - minute);
            }
        } else if(endHour == hour){
            if(endMinute != minute){
                Result += (endMinute - minute);
            }
        } else {
            Result = -1;
        }
    } else if(endDay < day){
        Result = -1;
    }

    cout << Result << endl;
    return 0;
}
