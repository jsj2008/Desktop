//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView;

@interface YBBPregnancyBabyView : UIView
{
    long long index;
    UIImageView *_babyView;
    UIImageView *_bgView;
    NSString *_babyImage;
}

@property(copy, nonatomic) NSString *babyImage; // @synthesize babyImage=_babyImage;
@property(retain, nonatomic) UIImageView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UIImageView *babyView; // @synthesize babyView=_babyView;
- (void).cxx_destruct;
- (void)showAnimation;
- (id)initWithFrame:(struct CGRect)arg1;

@end

