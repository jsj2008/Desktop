//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, UIScrollView;

@interface YBBToolsMusicAssistantCartoonCell : UITableViewCell
{
    UIScrollView *_cellScrollView;
    NSArray *_itemsView;
}

+ (double)musicAssistantCartoonCellPadding;
+ (double)musicAssistantCartoonCellMargin;
+ (double)musicAssistantCartoonCellWidth;
+ (double)musicAssistantCartoonCellHeight;
@property(retain, nonatomic) NSArray *itemsView; // @synthesize itemsView=_itemsView;
@property(retain, nonatomic) UIScrollView *cellScrollView; // @synthesize cellScrollView=_cellScrollView;
- (void).cxx_destruct;
- (void)addItemViewsWithModel:(id)arg1;
- (void)configureViewWithModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
