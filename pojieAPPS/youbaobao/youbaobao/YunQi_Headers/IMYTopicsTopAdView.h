//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYBaseAdView.h"

@class UILabel, UITapGestureRecognizer;

@interface IMYTopicsTopAdView : IMYBaseAdView
{
    _Bool _isHaveMoveToWindow;
    UILabel *_tagLabel;
    UILabel *_titleLabel;
    UITapGestureRecognizer *_tap;
}

+ (double)heightWithModel:(id)arg1;
@property(retain, nonatomic) UITapGestureRecognizer *tap; // @synthesize tap=_tap;
@property(nonatomic) _Bool isHaveMoveToWindow; // @synthesize isHaveMoveToWindow=_isHaveMoveToWindow;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *tagLabel; // @synthesize tagLabel=_tagLabel;
- (void).cxx_destruct;
- (void)willMoveToWindow:(id)arg1;
- (void)clickAd;
- (void)layoutWithModel:(id)arg1;
- (void)setupSubviews;
- (void)dealloc;

@end
