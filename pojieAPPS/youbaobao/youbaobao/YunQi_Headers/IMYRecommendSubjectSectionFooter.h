//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface IMYRecommendSubjectSectionFooter : UIView
{
    CDUnknownBlockType _moreActionBlock;
    UIView *_backView;
    UILabel *_moreTextLabel;
}

@property(retain, nonatomic) UILabel *moreTextLabel; // @synthesize moreTextLabel=_moreTextLabel;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(copy, nonatomic) CDUnknownBlockType moreActionBlock; // @synthesize moreActionBlock=_moreActionBlock;
- (void).cxx_destruct;
- (void)prepareUI;
- (id)init;

@end
