//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTQPageViewController.h"

#import "TTQSpecialSegmentedViewDataSource-Protocol.h"
#import "TTQSpecialSegmentedViewDelegate-Protocol.h"
#import "TTQSpecialSubjectVCDelegate-Protocol.h"

@class IMYBannerView, IMYButton, IMYTouchEXButton, NSArray, NSString, TTQSpecialSegmentedView, TTQSpecialSubjectInfoView, TTQSpecialSubjectViewModel, UILabel, UIScrollView, UIView;

@interface TTQSpecialSubjectViewController : TTQPageViewController <TTQSpecialSubjectVCDelegate, TTQSpecialSegmentedViewDelegate, TTQSpecialSegmentedViewDataSource>
{
    _Bool _verticalScrollDragging;
    _Bool _subjectBannerClicked;
    long long _special_id;
    long long _entrance;
    UILabel *_navTitleLabel;
    UIView *_navBgView;
    IMYTouchEXButton *_returnButton;
    IMYButton *_navCollectButton;
    IMYButton *_navShareButton;
    UIView *_navigationView;
    UIScrollView *_verticalScrollView;
    IMYBannerView *_bannerView;
    TTQSpecialSegmentedView *_header;
    TTQSpecialSubjectInfoView *_infoView;
    UILabel *_titleLabel;
    UILabel *_detailLable;
    UIView *_topMaskView;
    NSArray *_viewModels;
    TTQSpecialSubjectViewModel *_viewModel;
    double _homeBannerBottom;
}

@property(nonatomic) _Bool subjectBannerClicked; // @synthesize subjectBannerClicked=_subjectBannerClicked;
@property(nonatomic) _Bool verticalScrollDragging; // @synthesize verticalScrollDragging=_verticalScrollDragging;
@property(nonatomic) double homeBannerBottom; // @synthesize homeBannerBottom=_homeBannerBottom;
@property(retain, nonatomic) TTQSpecialSubjectViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) NSArray *viewModels; // @synthesize viewModels=_viewModels;
@property(retain, nonatomic) UIView *topMaskView; // @synthesize topMaskView=_topMaskView;
@property(retain, nonatomic) UILabel *detailLable; // @synthesize detailLable=_detailLable;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TTQSpecialSubjectInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) TTQSpecialSegmentedView *header; // @synthesize header=_header;
@property(retain, nonatomic) IMYBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) UIScrollView *verticalScrollView; // @synthesize verticalScrollView=_verticalScrollView;
@property(retain, nonatomic) UIView *navigationView; // @synthesize navigationView=_navigationView;
@property(retain, nonatomic) IMYButton *navShareButton; // @synthesize navShareButton=_navShareButton;
@property(retain, nonatomic) IMYButton *navCollectButton; // @synthesize navCollectButton=_navCollectButton;
@property(retain, nonatomic) IMYTouchEXButton *returnButton; // @synthesize returnButton=_returnButton;
@property(retain, nonatomic) UIView *navBgView; // @synthesize navBgView=_navBgView;
@property(retain, nonatomic) UILabel *navTitleLabel; // @synthesize navTitleLabel=_navTitleLabel;
@property(nonatomic) long long entrance; // @synthesize entrance=_entrance;
@property(nonatomic) long long special_id; // @synthesize special_id=_special_id;
- (void).cxx_destruct;
- (void)setupFrameForBanner;
- (void)setupFrameForNoBanner;
- (void)setNavigationBarColor:(double)arg1;
- (void)setupNavStyle:(long long)arg1;
- (void)creatInfoView;
- (void)creatSegmentedView;
- (void)creatBannerView;
- (void)setupSpecialSubjectView;
- (double)getHeightWithText:(id)arg1 width:(double)arg2 font:(id)arg3;
- (double)getDetailLabelHeight;
- (void)createMaskTopView;
- (void)configSpecialSubjectView;
- (void)configViewModels;
- (void)specialSubjectViewDidLoad:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)TTQSpecialSegmentedViewDidSelect:(id)arg1 index:(unsigned long long)arg2;
- (double)segmentedViewWidth:(id)arg1 index:(unsigned long long)arg2;
- (id)titleForSegmentedView:(id)arg1 index:(unsigned long long)arg2;
- (unsigned long long)numberOfSegmentedViews:(id)arg1;
- (void)shareButtonAction:(id)arg1;
- (void)collectionButtonAction:(id)arg1;
- (id)createChildViewController:(id)arg1;
- (id)currentViewController;
- (id)viewControllerAtIndex:(long long)arg1;
- (long long)indexOfObject:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)bindViewModel;
- (void)setCollectButtonStatus:(_Bool)arg1;
- (_Bool)isWhiteNavigationBar;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)ga_appendParams;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
