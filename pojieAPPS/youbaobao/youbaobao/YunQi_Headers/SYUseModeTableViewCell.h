//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface SYUseModeTableViewCell : UITableViewCell
{
    _Bool _needSwitch;
    UIImageView *_icon;
    UILabel *_title;
    UILabel *_detailLabel;
    UIImageView *_arrow;
}

@property(retain, nonatomic) UIImageView *arrow; // @synthesize arrow=_arrow;
@property(nonatomic) _Bool needSwitch; // @synthesize needSwitch=_needSwitch;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

