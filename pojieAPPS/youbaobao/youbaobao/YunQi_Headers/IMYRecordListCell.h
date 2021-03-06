//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class IMYMoodGridImageView, IMYRM80AttributedLabel, UILabel, UIScrollView;

@interface IMYRecordListCell : UITableViewCell
{
    UILabel *_dayLabel;
    UILabel *_monthLabel;
    UIScrollView *_iconsView;
    IMYRM80AttributedLabel *_dt_content;
    IMYMoodGridImageView *_gridImageView;
}

+ (void)releaseCalculateLabel;
+ (double)getCellHeight:(id)arg1;
+ (id)calculateLabel;
+ (void)initialize;
@property(retain, nonatomic) IMYMoodGridImageView *gridImageView; // @synthesize gridImageView=_gridImageView;
@property(retain, nonatomic) IMYRM80AttributedLabel *dt_content; // @synthesize dt_content=_dt_content;
@property(retain, nonatomic) UIScrollView *iconsView; // @synthesize iconsView=_iconsView;
@property(retain, nonatomic) UILabel *monthLabel; // @synthesize monthLabel=_monthLabel;
@property(retain, nonatomic) UILabel *dayLabel; // @synthesize dayLabel=_dayLabel;
- (void).cxx_destruct;
- (id)removeNewLine:(id)arg1;
- (id)monthString:(long long)arg1;
- (void)showIcons:(id)arg1;
- (void)layoutViews:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)awakeFromNib;

@end

