#include<stdio.h>

typedef struct{
    int hour;
    int min;
    int sec;
}Time;

typedef struct {
    int day;
    int month;
    int year;
} Date;

typedef struct {
    Date date;
    Time time;
} DateTime;


int isLeapYear(int year) {
    return (year % 4 == 0);
}


int daysInMonth(int month, int year) {
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && isLeapYear(year)) {
        return 29;
    }
    return days[month - 1];
}
long long dateTimeToSeconds(DateTime dt) {
    long long totalSeconds = 0;
    for (int year = 1; year < dt.date.year; year++) {
        totalSeconds =totalSeconds+ (isLeapYear(year) ? 366 *24* 3600 :365 *24* 3600);
    }

    for (int month = 1; month < dt.date.month; month++) {
        totalSeconds=totalSeconds+ (daysInMonth(month, dt.date.year) *24* 3600);
    }
    
    totalSeconds += (dt.date.day - 1) * 24 * 3600;
    totalSeconds += dt.time.hour * 3600;
    totalSeconds += dt.time.min * 60;
    totalSeconds += dt.time.sec;

    return totalSeconds;
}

void calculatedifference(DateTime dt1, DateTime dt2) {
    long long seconds1 = dateTimeToSeconds(dt1);
    long long seconds2 = dateTimeToSeconds(dt2);

    long long diff=seconds1> seconds2? seconds1 -seconds2:seconds2- seconds1;

    
    int days = diff / (24 * 3600);
    diff=diff% (24 * 3600);
    int hours = diff / 3600;
    diff=diff% 3600;
    int minutes = diff / 60;
    int seconds= diff % 60;

    printf("Diff is %d days, %d hours, %d minutes, %d seconds\n", days, hours, minutes, seconds);
}


int main(){


    DateTime dt1,dt2;

    dt1.date.day=7;
    dt1.date.month=4;
    dt1.date.year=2004;
    dt1.time.hour=8;
    dt1.time.min=30;
    dt1.time.sec=30;

    dt2.date.day=20;
    dt2.date.month=10;
    dt2.date.year=2002;
    dt2.time.hour=10;
    dt2.time.min=40;
    dt2.time.sec=40;

    calculatedifference(dt1,dt2);
}