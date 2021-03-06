//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTQTableViewCell.h"

@class NSLayoutConstraint, TTQTagIcon, UIImageView, UILabel;

@interface TTQGoodTableViewCell : TTQTableViewCell
{
    UILabel *_titleLabel;
    UILabel *_priceLabel;
    UILabel *_promotionLable;
    UILabel *_originalPriceLabel;
    UILabel *_purchaseLable;
    UIImageView *_thumbImageView;
    TTQTagIcon *_iconBug;
    NSLayoutConstraint *_priceLabelBottom;
}

@property(nonatomic) __weak NSLayoutConstraint *priceLabelBottom; // @synthesize priceLabelBottom=_priceLabelBottom;
@property(retain, nonatomic) TTQTagIcon *iconBug; // @synthesize iconBug=_iconBug;
@property(nonatomic) __weak UIImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(nonatomic) __weak UILabel *purchaseLable; // @synthesize purchaseLable=_purchaseLable;
@property(nonatomic) __weak UILabel *originalPriceLabel; // @synthesize originalPriceLabel=_originalPriceLabel;
@property(nonatomic) __weak UILabel *promotionLable; // @synthesize promotionLable=_promotionLable;
@property(nonatomic) __weak UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (double)bindModel:(id)arg1 heightForRowAtIndexPath:(id)arg2 viewModel:(id)arg3;
- (id)bindModel:(id)arg1 cellForRowAtIndexPath:(id)arg2 viewModel:(id)arg3;
- (void)commonInit;

@end

