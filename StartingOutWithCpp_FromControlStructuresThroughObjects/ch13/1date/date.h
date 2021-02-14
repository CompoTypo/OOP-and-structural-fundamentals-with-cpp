#ifndef DATE_H
#define DATE_H

#include <string>

#include <iostream>
using namespace std;

class Date {
    private:
        int month;
        int day;
        int year;
        int currentYear = 2018;

    public:
        Date() {
            month = 1;
            day = 1;
            year = currentYear;
        }

        Date(int m, int d, int y) {
            month = m;
            day = d;
            year = y;
        }

        void setDay(int d) {
            day = d;
        }

        void setMonth(int m) {
            month = m;
        }

        void setYear(int y) {
            year = y;
        }

        int getDay() {
            return day;
        }

        int getMonth() {
            return month;
        }

        string getMonthStr()
        {
            string monthStr = "";
            switch (month)
            {
            case 1:
                monthStr = "january";
                break;
            case 2:
                monthStr = "february";
                break;
            case 3:
                monthStr = "march";
                break;
            case 4:
                monthStr = "april";
                break;
            case 5:
                monthStr = "may";
                break;
            case 6:
                monthStr = "june";
                break;
            case 7:
                monthStr = "july";
                break;
            case 8:
                monthStr = "august";
                break;
            case 9:
                monthStr = "september";
                break;
            case 10:
                monthStr = "october";
                break;
            case 11:
                monthStr = "november";
                break;
            case 12:
                monthStr = "december";
                break;
            default:
                break;
            }
            return monthStr;
        }

        int getYear() {
            return year;
        }

        void printDate1() {

            cout << month << "/" << day << "/" << year << endl;

        }

        void printDate2() {
            string monthS = getMonthStr();
            cout << monthS << " " << day << "," << year << endl;
        }

        void printDate3() {
            string monthS = getMonthStr();
            cout << day << " " << monthS << "," << year << endl;
        }

};
#endif
