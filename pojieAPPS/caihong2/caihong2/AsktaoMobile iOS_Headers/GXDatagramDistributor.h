//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface GXDatagramDistributor : NSObject
{
    NSMutableDictionary *distributeRules_;
}

- (void).cxx_destruct;
- (void)distributeFinishBuildDatagram:(id)arg1;
- (void)distributeDatagrams:(id)arg1;
- (void)removeRuleWithCmdId:(unsigned char)arg1 delegate:(id)arg2;
- (void)addRule:(unsigned char)arg1 withDelegate:(id)arg2;
- (void)dealloc;
- (void)cleanup;
- (id)init;

@end
