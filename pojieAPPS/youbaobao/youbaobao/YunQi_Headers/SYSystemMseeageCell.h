//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface SYSystemMseeageCell : UITableViewCell
{
    UIImageView *_icon;
    UILabel *_name;
    UILabel *_content;
    UILabel *_time;
    UILabel *_auto_419_label;
}

@property(nonatomic) __weak UILabel *auto_419_label; // @synthesize auto_419_label=_auto_419_label;
@property(nonatomic) __weak UILabel *time; // @synthesize time=_time;
@property(nonatomic) __weak UILabel *content; // @synthesize content=_content;
@property(nonatomic) __weak UILabel *name; // @synthesize name=_name;
@property(nonatomic) __weak UIImageView *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
