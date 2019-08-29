//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYPublicBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class IMYCaptionView, NSMutableArray, NSNumber, NSString, UITableView, UIView, YBBToolsBottomBar, YBBToolsBottomItem, YBBToolsEatDoBanFoodInfoModel, YBBToolsSpecialNavigationBar;
@protocol IMYITableViewAdManager;

@interface YBBToolsEatDoFoodInfoVC : IMYPublicBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _hasCollection;
    long long _foodId;
    NSNumber *_toolId;
    UITableView *_tableView;
    NSMutableArray *_infoGroup;
    IMYCaptionView *_captionView;
    YBBToolsEatDoBanFoodInfoModel *_infoModel;
    YBBToolsSpecialNavigationBar *_specialNavBar;
    YBBToolsBottomBar *_bottomBar;
    id <IMYITableViewAdManager> _adManager;
    long long _feedbackSection;
    YBBToolsBottomItem *_collectItem;
    UIView *_backgroundView;
    UIView *_stateView;
    NSString *_contentString;
    double _totalH;
}

@property(nonatomic) double totalH; // @synthesize totalH=_totalH;
@property(copy, nonatomic) NSString *contentString; // @synthesize contentString=_contentString;
@property(retain, nonatomic) UIView *stateView; // @synthesize stateView=_stateView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) YBBToolsBottomItem *collectItem; // @synthesize collectItem=_collectItem;
@property(nonatomic) _Bool hasCollection; // @synthesize hasCollection=_hasCollection;
@property(nonatomic) long long feedbackSection; // @synthesize feedbackSection=_feedbackSection;
@property(retain, nonatomic) id <IMYITableViewAdManager> adManager; // @synthesize adManager=_adManager;
@property(retain, nonatomic) YBBToolsBottomBar *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(retain, nonatomic) YBBToolsSpecialNavigationBar *specialNavBar; // @synthesize specialNavBar=_specialNavBar;
@property(retain, nonatomic) YBBToolsEatDoBanFoodInfoModel *infoModel; // @synthesize infoModel=_infoModel;
@property(retain, nonatomic) IMYCaptionView *captionView; // @synthesize captionView=_captionView;
@property(retain, nonatomic) NSMutableArray *infoGroup; // @synthesize infoGroup=_infoGroup;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSNumber *toolId; // @synthesize toolId=_toolId;
@property(nonatomic) long long foodId; // @synthesize foodId=_foodId;
- (void).cxx_destruct;
- (void)setupAdManager;
- (double)getHeightWithDic:(id)arg1;
- (double)getHeightWithStr:(id)arg1;
- (double)contentOriWithString;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)getTabooIngredient:(id)arg1 withData:(id)arg2;
- (id)getCellWithTableView:(id)arg1 andStr:(id)arg2;
- (void)clickRestTitle:(id)arg1;
- (id)getCellForRecommandTableView:(id)arg1 indexPath:(id)arg2 isRecommondUrl:(_Bool)arg3;
- (id)getCellWithTableView:(id)arg1 andDic:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)closeStateView;
- (void)showStatementView;
- (void)tapFootLabelAction;
- (void)buildFooterWithCopywriting:(id)arg1;
- (void)buildTBHeaderWithImgStr:(id)arg1;
- (void)buildTableView;
- (void)collectFoodID:(long long)arg1 collect:(_Bool)arg2;
- (void)refreshCollectState:(long long)arg1;
- (void)buildBottomBar;
- (void)dataFinish:(id)arg1;
- (void)buildCaptionView;
- (void)setInfoWithModel:(id)arg1;
- (void)getInfoData;
- (void)turnToFeedback;
- (void)rightBarButtonItemTouchUpInside:(id)arg1;
- (void)updateStatusBarStyle;
- (void)viewDidLoad;
- (id)initWithFoodId:(long long)arg1 AndTitle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
