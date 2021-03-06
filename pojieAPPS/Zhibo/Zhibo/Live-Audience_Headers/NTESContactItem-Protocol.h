//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIImage;

@protocol NTESContactItem <NSObject>
- (_Bool)showAccessoryView;
- (NSString *)avatarUrl;
- (UIImage *)icon;
- (NSString *)nick;
- (NSString *)badge;
- (NSString *)cellName;
- (NSString *)reuseId;
- (double)uiHeight;
- (NSString *)userId;
- (NSString *)vcName;

@optional
- (NSString *)selName;
@end

