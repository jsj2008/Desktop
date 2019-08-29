//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BTReaderItemCellView.h"

@class BTVideoItemCellViewModel, CALayer, MMUILabel, UIImageView, UIView;

@interface BTVideoItemCellView : BTReaderItemCellView
{
    CALayer *m_maskLayer;
    UIView *m_playerBtnContainerView;
    UIImageView *m_playBtnView;
    MMUILabel *m_timeLabel;
}

- (void).cxx_destruct;
- (void)layoutSubviewsNormalItem;
- (void)layoutSubviewsTopItem;
- (void)updateTimeLabel;
- (void)initTimeLabel;
- (void)initPlayBtnView;
- (void)onUpdateViewModel;
- (void)initCoverMaskLayer;
- (void)initNormalReaderItem;
- (void)initTopReaderItem;

// Remaining properties
@property(readonly, nonatomic) BTVideoItemCellViewModel *viewModel; // @dynamic viewModel;

@end
