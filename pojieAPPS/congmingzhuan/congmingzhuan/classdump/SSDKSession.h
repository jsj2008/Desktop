//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SSDKSession : NSObject
{
    _Bool _isCancelled;
    long long _platformType;
}

@property(nonatomic) long long platformType; // @synthesize platformType=_platformType;
@property(readonly, nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
- (void)cancel;

@end
