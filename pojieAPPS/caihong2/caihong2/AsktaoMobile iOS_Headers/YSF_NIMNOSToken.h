//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YSF_NIMKeyValueProtocol-Protocol.h"

@class NSString;

@interface YSF_NIMNOSToken : NSObject <YSF_NIMKeyValueProtocol>
{
    NSString *_token;
    NSString *_bucketName;
    NSString *_objectName;
    NSString *_context;
}

+ (id)tokenBy:(id)arg1;
+ (id)tokenByDict:(id)arg1;
@property(copy, nonatomic) NSString *context; // @synthesize context=_context;
@property(copy, nonatomic) NSString *objectName; // @synthesize objectName=_objectName;
@property(copy, nonatomic) NSString *bucketName; // @synthesize bucketName=_bucketName;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)dictForToken;
- (id)value;
- (id)key;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
