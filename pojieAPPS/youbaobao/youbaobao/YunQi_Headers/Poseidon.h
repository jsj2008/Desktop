//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface Poseidon : NSObject
{
}

+ (void)testCDNImages;
+ (void)stopTimer;
+ (void)startTimer;
+ (void)remoteInitWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
+ (void)handleReachabilityChanged:(long long)arg1;
+ (void)startRadioAccess;
+ (void)startReachability;
+ (void)updateRadioAccessType:(id)arg1;
+ (_Bool)updateReachabilityStatus:(id)arg1;
+ (void)startInternal;
+ (void)logPage:(id)arg1 startAt:(double)arg2 endAt:(double)arg3;
+ (void)startWithArgumentsInternal:(id)arg1;
+ (void)applicationDidFinishLaunchingNotification:(id)arg1;
+ (void)load;
+ (void)upload;
+ (_Bool)elementEnabled:(Class)arg1;
+ (void)deleteAllData;
+ (id)elementClasses;
+ (void)setDebugMode:(_Bool)arg1;
+ (void)setIgnoreWebView:(CDUnknownBlockType)arg1;
+ (void)setIgnoreDB:(CDUnknownBlockType)arg1;
+ (void)setIgnoreRequest:(CDUnknownBlockType)arg1;
+ (void)startWithArguments:(id)arg1;
+ (void)event:(id)arg1;
+ (void)event:(id)arg1 label:(id)arg2;
+ (void)event:(id)arg1 label:(id)arg2 counter:(int)arg3;

@end
