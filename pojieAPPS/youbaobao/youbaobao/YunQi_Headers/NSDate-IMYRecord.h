//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDate.h>

@interface NSDate (IMYRecord)
+ (id)lunarYear:(id)arg1;
+ (id)solarterm:(id)arg1;
+ (id)specialHolidayForDate:(id)arg1;
+ (id)commonHolidayForDate:(id)arg1;
+ (id)holidayForDate:(id)arg1;
+ (long long)imy_getDay:(id)arg1;
+ (long long)imy_getMonths:(id)arg1;
+ (long long)imy_getYear:(id)arg1;
+ (id)imy_dateStringNoYearFromDate:(id)arg1;
- (id)imy_getMMddString;
- (id)imy_dateAtLastOfWeek;
- (id)imy_dateAtStartOfWeek;
- (id)imy_getNongliMD;
- (id)imy_getWeekString2;
- (id)imy_getWeekString;
- (long long)imy_compare_day:(id)arg1;
- (id)getDiff:(id)arg1 calendarUnit:(unsigned long long)arg2;
- (long long)imy_calendarGetDayDiff:(id)arg1;
@end
