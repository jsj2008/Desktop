//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMYTLSyncService-Protocol.h"

@class NSString, NSTimer;
@protocol IMYTLListService;

@interface IMYTLSyncService : NSObject <IMYTLSyncService>
{
    _Bool _syncing;
    _Bool _registered;
    _Bool _isRequestEventID;
    id <IMYTLListService> _timelineService;
    double _timeInterval;
    NSTimer *_autoSyncTimer;
}

+ (id)sharedService;
@property(nonatomic) _Bool isRequestEventID; // @synthesize isRequestEventID=_isRequestEventID;
@property(nonatomic) _Bool registered; // @synthesize registered=_registered;
@property(nonatomic) _Bool syncing; // @synthesize syncing=_syncing;
@property(retain, nonatomic) NSTimer *autoSyncTimer; // @synthesize autoSyncTimer=_autoSyncTimer;
@property(nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
@property(retain, nonatomic) id <IMYTLListService> timelineService; // @synthesize timelineService=_timelineService;
- (void).cxx_destruct;
- (void)syncBabyInfo;
- (void)syncTimeLine;
- (_Bool)syncEventIdByCreateTime:(id)arg1 serviceEvents:(id)arg2;
- (_Bool)syncEventIdByUniqueKey:(id)arg1 serviceEvents:(id)arg2;
- (void)syncPublishEvents;
- (void)showErrorAlertWithEvent:(id)arg1;
- (void)registerNotification;
- (void)stopAutoSyncTimer;
- (void)starAutoSyncTimer;
- (void)syncData;
- (void)stopSync;
- (void)startSync;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

