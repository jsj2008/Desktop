//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface YBBToolsOvulateManager : NSObject
{
    _Bool _isUploading;
    _Bool _isNotOvulateDateChange;
}

+ (id)sharedManager;
@property(nonatomic) _Bool isNotOvulateDateChange; // @synthesize isNotOvulateDateChange=_isNotOvulateDateChange;
@property(nonatomic) _Bool isUploading; // @synthesize isUploading=_isUploading;
- (void)updateOvulateLocal:(CDUnknownBlockType)arg1;
- (void)cudefaultDataReSave;
- (void)updateOvulateServer;
- (void)updateOvulateServer:(CDUnknownBlockType)arg1;
- (void)synchroData:(CDUnknownBlockType)arg1;
- (void)deleteTempData;
- (void)postOvulateTestToServer:(CDUnknownBlockType)arg1;
- (void)getOvulateTestListWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)updateOldOvulateData171;
- (id)getOvulatesWithOperationState:(unsigned long long)arg1;
- (id)turnWeakWithStartData:(long long)arg1 endDate:(long long)arg2;
- (id)turnStrongWithStartData:(long long)arg1 endDate:(long long)arg2;
- (id)getLocalOvulate;
- (id)getOvulateDataWithPeriodStartDate:(long long)arg1 endDate:(long long)arg2;
- (id)getOvulateBeforeFirstPeriodStartDate:(long long)arg1;
- (id)getOvulateCountWithPeriodsStartDateArray:(id)arg1;
- (void)saveOvulates:(id)arg1;

@end
