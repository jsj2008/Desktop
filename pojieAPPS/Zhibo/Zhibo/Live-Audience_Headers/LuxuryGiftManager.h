//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, UIView;

@interface LuxuryGiftManager : NSObject
{
    _Bool _isBaoBaoGiftView;
    _Bool _isGiftView;
    NSMutableArray *_giftDataArray;
    UIView *_giftView;
}

+ (id)instanceWithLuxuryGiftManageSuperView:(id)arg1;
@property(retain, nonatomic) UIView *giftView; // @synthesize giftView=_giftView;
@property(nonatomic) _Bool isGiftView; // @synthesize isGiftView=_isGiftView;
@property(nonatomic) _Bool isBaoBaoGiftView; // @synthesize isBaoBaoGiftView=_isBaoBaoGiftView;
@property(retain, nonatomic) NSMutableArray *giftDataArray; // @synthesize giftDataArray=_giftDataArray;
- (void).cxx_destruct;
- (void)animationEnd;
- (void)giftClassification;
- (void)addLuxuryGiftData:(id)arg1;

@end
