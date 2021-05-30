#ifndef POKEDIAMOND_GF_RTC_H
#define POKEDIAMOND_GF_RTC_H

#include "RTC_api.h"

enum RTC_Month
{
    RTC_MONTH_JANUARY = 1,
    RTC_MONTH_FEBRUARY,
    RTC_MONTH_MARCH,
    RTC_MONTH_APRIL,
    RTC_MONTH_MAY,
    RTC_MONTH_JUNE,
    RTC_MONTH_JULY,
    RTC_MONTH_AUGUST,
    RTC_MONTH_SEPTEMBER,
    RTC_MONTH_OCTOBER,
    RTC_MONTH_NOVEMBER,
    RTC_MONTH_DECEMBER,
};

enum RTC_TimeOfDay
{
    RTC_TIMEOFDAY_MORN = 0,
    RTC_TIMEOFDAY_DAY,
    RTC_TIMEOFDAY_EVE,
    RTC_TIMEOFDAY_NITE,
    RTC_TIMEOFDAY_LATE,
};

#endif //POKEDIAMOND_GF_RTC_H