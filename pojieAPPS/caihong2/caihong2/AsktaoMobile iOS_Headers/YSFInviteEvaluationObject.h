//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YSF_NIMCustomAttachment-Protocol.h"

@class NSDictionary, NSString;

@interface YSFInviteEvaluationObject : NSObject <YSF_NIMCustomAttachment>
{
    long long _command;
    long long _sessionId;
    NSDictionary *_evaluationData;
    NSString *_inviteText;
    NSString *_thanksText;
}

+ (id)objectByDict:(id)arg1;
@property(copy, nonatomic) NSString *thanksText; // @synthesize thanksText=_thanksText;
@property(copy, nonatomic) NSString *inviteText; // @synthesize inviteText=_inviteText;
@property(retain, nonatomic) NSDictionary *evaluationData; // @synthesize evaluationData=_evaluationData;
@property(nonatomic) long long sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) long long command; // @synthesize command=_command;
- (void).cxx_destruct;
- (id)encodeAttachment;
- (id)thumbText;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
