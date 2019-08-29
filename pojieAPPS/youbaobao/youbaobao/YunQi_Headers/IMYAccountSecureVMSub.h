//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IMYAccountSecureVMSub : NSObject
{
    long long _tag;
    CDUnknownBlockType _icon;
    NSString *_title;
    CDUnknownBlockType _content;
    CDUnknownBlockType _isBind;
    CDUnknownBlockType _isLogin;
}

+ (id)createSecondSectionModelsWithAccount:(id)arg1 subs:(id)arg2;
+ (id)createSecondSectionSubsWithAccount:(id)arg1;
+ (id)createFirstSectionModelsWithAccount:(id)arg1 subs:(id)arg2;
+ (id)createFirstSectionSubsWithAccount:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType isLogin; // @synthesize isLogin=_isLogin;
@property(copy, nonatomic) CDUnknownBlockType isBind; // @synthesize isBind=_isBind;
@property(copy, nonatomic) CDUnknownBlockType content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) CDUnknownBlockType icon; // @synthesize icon=_icon;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
- (id)init;

@end
