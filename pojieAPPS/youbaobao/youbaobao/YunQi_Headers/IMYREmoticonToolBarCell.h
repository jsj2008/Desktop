//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IMYAnimatedImageView, UIImageView;

@interface IMYREmoticonToolBarCell : UICollectionViewCell
{
    _Bool _beSelected;
    IMYAnimatedImageView *_iconView;
    unsigned long long _lineTowStyle;
    UIImageView *_lineTowLeft;
    UIImageView *_lineTowRight;
    UIImageView *_innerBGView;
}

@property(nonatomic) __weak UIImageView *innerBGView; // @synthesize innerBGView=_innerBGView;
@property(nonatomic) __weak UIImageView *lineTowRight; // @synthesize lineTowRight=_lineTowRight;
@property(nonatomic) __weak UIImageView *lineTowLeft; // @synthesize lineTowLeft=_lineTowLeft;
@property(nonatomic) unsigned long long lineTowStyle; // @synthesize lineTowStyle=_lineTowStyle;
@property(nonatomic) _Bool beSelected; // @synthesize beSelected=_beSelected;
@property(nonatomic) __weak IMYAnimatedImageView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (void)showLineTowLeft:(unsigned long long)arg1;
- (void)layoutSubviews;
- (void)awakeFromNib;

@end
