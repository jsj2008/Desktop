//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class UILabel, UIView;

@interface MRTCalendarCollectionToolTipView : UICollectionReusableView
{
    UILabel *_rangeLabel;
    UIView *_bubbleView;
}

@property(retain, nonatomic) UIView *bubbleView; // @synthesize bubbleView=_bubbleView;
@property(retain, nonatomic) UILabel *rangeLabel; // @synthesize rangeLabel=_rangeLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)applyLayoutAttributes:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
