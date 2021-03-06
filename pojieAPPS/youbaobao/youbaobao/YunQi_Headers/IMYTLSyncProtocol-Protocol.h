//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYTLPersistProtocol-Protocol.h"

@class NSArray, NSString, RACSignal;

@protocol IMYTLSyncProtocol <IMYTLPersistProtocol>
+ (void)syncSaveSyncTimestamp:(double)arg1;
+ (double)syncGetLatestSyncTimestamp;
+ (NSString *)syncTimestampKey;
+ (RACSignal *)syncHandleShouldSyncToLocalData:(NSArray *)arg1;
+ (NSArray *)syncGetShouldSyncToServerData;
@property(nonatomic) double syncTimestamp;
@property(nonatomic) unsigned long long syncType;
@end

