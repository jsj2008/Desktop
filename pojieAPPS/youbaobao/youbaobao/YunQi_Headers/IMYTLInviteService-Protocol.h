//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYTLFactoryService-Protocol.h"

@class NSString, RACSignal;

@protocol IMYTLInviteService <IMYTLFactoryService>
@property(readonly, nonatomic) RACSignal *getInviteEnabledSignal;
- (RACSignal *)getTokenWithInviteCode:(NSString *)arg1 andAnswer:(NSString *)arg2;
- (RACSignal *)validateInviteCode:(NSString *)arg1;
- (RACSignal *)getInviteCode:(NSString *)arg1;
@end
