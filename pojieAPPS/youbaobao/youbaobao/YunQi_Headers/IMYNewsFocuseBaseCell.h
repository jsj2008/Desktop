//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYBaseTableViewCell.h"

@class IMYNewsFocuseOperationalView, IMYNewsFocuseUserInfoView, IMYRM80AttributedLabel, UIView;
@protocol IMYNewsFocuseBaseCellDelegate;

@interface IMYNewsFocuseBaseCell : IMYBaseTableViewCell
{
    id <IMYNewsFocuseBaseCellDelegate> _delegate;
    IMYRM80AttributedLabel *_titleLabel;
    IMYNewsFocuseUserInfoView *_userInfoView;
    IMYNewsFocuseOperationalView *_operationalView;
    UIView *_richView;
}

@property(readonly, nonatomic) UIView *richView; // @synthesize richView=_richView;
@property(retain, nonatomic) IMYNewsFocuseOperationalView *operationalView; // @synthesize operationalView=_operationalView;
@property(retain, nonatomic) IMYNewsFocuseUserInfoView *userInfoView; // @synthesize userInfoView=_userInfoView;
@property(retain, nonatomic) IMYRM80AttributedLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <IMYNewsFocuseBaseCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)feedbackTouchUpInside:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (double)calculateRichHeightWith:(id)arg1;
- (double)calculateHeightWith:(id)arg1;
- (double)setCellModelForRich:(id)arg1;
- (_Bool)setCellModelForTitle:(id)arg1;
- (void)setCellModelForOperational:(id)arg1;
- (void)setCellModel:(id)arg1;
- (void)prepareUI;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end
