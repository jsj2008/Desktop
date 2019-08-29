//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface JDKCrashModel : NSObject
{
    int _ID;
    NSString *_date;
    NSString *_pageInfo;
    NSString *_crashType;
    NSString *_crashReason;
    NSString *_callStack;
    NSString *_userInfo;
    NSString *_osVersion;
    NSString *_appVersion;
    NSString *_appBuild;
    NSString *_appKey;
    NSString *_sdkVersion;
    NSString *_sdkName;
    NSString *_keplerVersion;
    NSString *_keplerName;
    NSString *_tag;
}

+ (id)model;
@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(copy, nonatomic) NSString *keplerName; // @synthesize keplerName=_keplerName;
@property(copy, nonatomic) NSString *keplerVersion; // @synthesize keplerVersion=_keplerVersion;
@property(copy, nonatomic) NSString *sdkName; // @synthesize sdkName=_sdkName;
@property(copy, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property(copy, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
@property(copy, nonatomic) NSString *appBuild; // @synthesize appBuild=_appBuild;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(copy, nonatomic) NSString *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSString *callStack; // @synthesize callStack=_callStack;
@property(copy, nonatomic) NSString *crashReason; // @synthesize crashReason=_crashReason;
@property(copy, nonatomic) NSString *crashType; // @synthesize crashType=_crashType;
@property(copy, nonatomic) NSString *pageInfo; // @synthesize pageInfo=_pageInfo;
@property(copy, nonatomic) NSString *date; // @synthesize date=_date;
@property(nonatomic) int ID; // @synthesize ID=_ID;
- (void).cxx_destruct;

@end
