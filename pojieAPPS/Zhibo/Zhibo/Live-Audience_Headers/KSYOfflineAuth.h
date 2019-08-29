//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface KSYOfflineAuth : NSObject
{
    NSString *_productID;
    NSString *_ak;
    NSString *_bundleID;
    NSString *_platform;
    NSDate *_expireData;
    unsigned long long _feature;
    NSString *_token;
}

@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(nonatomic) unsigned long long feature; // @synthesize feature=_feature;
@property(readonly, copy, nonatomic) NSDate *expireData; // @synthesize expireData=_expireData;
@property(readonly, copy, nonatomic) NSString *platform; // @synthesize platform=_platform;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(copy, nonatomic) NSString *ak; // @synthesize ak=_ak;
@property(copy, nonatomic) NSString *productID; // @synthesize productID=_productID;
- (void).cxx_destruct;
- (unsigned long long)getUnsignedIntegerByObject:(id)arg1;
- (id)checkAuthInfo:(id)arg1;
- (id)decodeToken:(id)arg1;
- (id)initWithToken:(id)arg1 error:(id *)arg2;

@end
