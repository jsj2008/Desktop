//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ADBMobile.h"

@class NSString;

@interface MRTAudienceManagerHelper : ADBMobile
{
    NSString *_completionIdentifier;
}

+ (id)sharedSession;
@property(copy, nonatomic) NSString *completionIdentifier; // @synthesize completionIdentifier=_completionIdentifier;
- (void).cxx_destruct;
- (void)updateWithLocation:(id)arg1;
- (void)configureAudienceManager;

@end
