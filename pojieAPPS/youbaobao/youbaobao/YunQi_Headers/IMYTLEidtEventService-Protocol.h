//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, RACSignal;

@protocol IMYTLEidtEventService <NSObject>
+ (RACSignal *)editEventWhithEventId:(long long)arg1 takenDate:(double)arg2 title:(NSString *)arg3 rule:(long long)arg4 markId:(long long)arg5 markName:(NSString *)arg6 deleteTimelines:(NSArray *)arg7;
@end

