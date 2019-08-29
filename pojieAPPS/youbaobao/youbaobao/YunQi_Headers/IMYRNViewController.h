//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYPublicBaseViewController.h"

#import "IMYRNViewDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class IMYCaptionView, IMYRNLandscapeViewController, IMYRNPerformanceTrack, IMYRNView, NSDictionary, NSString, UIButton, UIImageView;

@interface IMYRNViewController : IMYPublicBaseViewController <UIViewControllerTransitioningDelegate, IMYRNViewDelegate>
{
    _Bool _isShareBridge;
    _Bool _isNeedReloadPage;
    _Bool _showLoadingView;
    _Bool _popEnable;
    _Bool _receiveHideLoad;
    _Bool _isLandscapeAnimating;
    NSString *_bundleURL;
    NSString *_bundleName;
    NSString *_moduleName;
    NSDictionary *_initialProperties;
    NSString *_navTitle;
    IMYCaptionView *_captionView;
    CDUnknownBlockType _finishRender;
    CDUnknownBlockType _failedBlock;
    UIImageView *_bgView;
    IMYRNView *_rnView;
    UIButton *_backButton;
    long long _loadTimes;
    unsigned long long _lastLoadType;
    IMYRNPerformanceTrack *_perfTrack;
    IMYRNLandscapeViewController *_landscapeVC;
    NSDictionary *_params;
    NSDictionary *_allParams;
    struct CGRect _rnViewOriginFrame;
}

+ (id)createRNVCWithConfiguration:(id)arg1;
@property(copy, nonatomic) NSDictionary *allParams; // @synthesize allParams=_allParams;
@property(copy, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(nonatomic) struct CGRect rnViewOriginFrame; // @synthesize rnViewOriginFrame=_rnViewOriginFrame;
@property(nonatomic) _Bool isLandscapeAnimating; // @synthesize isLandscapeAnimating=_isLandscapeAnimating;
@property(retain, nonatomic) IMYRNLandscapeViewController *landscapeVC; // @synthesize landscapeVC=_landscapeVC;
@property(retain, nonatomic) IMYRNPerformanceTrack *perfTrack; // @synthesize perfTrack=_perfTrack;
@property(nonatomic) unsigned long long lastLoadType; // @synthesize lastLoadType=_lastLoadType;
@property(nonatomic) long long loadTimes; // @synthesize loadTimes=_loadTimes;
@property(nonatomic) _Bool receiveHideLoad; // @synthesize receiveHideLoad=_receiveHideLoad;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) IMYRNView *rnView; // @synthesize rnView=_rnView;
@property(retain, nonatomic) UIImageView *bgView; // @synthesize bgView=_bgView;
@property(copy, nonatomic) CDUnknownBlockType failedBlock; // @synthesize failedBlock=_failedBlock;
@property(copy, nonatomic) CDUnknownBlockType finishRender; // @synthesize finishRender=_finishRender;
@property(retain, nonatomic) IMYCaptionView *captionView; // @synthesize captionView=_captionView;
@property(nonatomic) _Bool popEnable; // @synthesize popEnable=_popEnable;
@property(nonatomic) _Bool showLoadingView; // @synthesize showLoadingView=_showLoadingView;
@property(nonatomic) _Bool isNeedReloadPage; // @synthesize isNeedReloadPage=_isNeedReloadPage;
@property(copy, nonatomic) NSString *navTitle; // @synthesize navTitle=_navTitle;
@property(copy, nonatomic) NSDictionary *initialProperties; // @synthesize initialProperties=_initialProperties;
@property(nonatomic) _Bool isShareBridge; // @synthesize isShareBridge=_isShareBridge;
@property(copy, nonatomic) NSString *moduleName; // @synthesize moduleName=_moduleName;
@property(copy, nonatomic) NSString *bundleName; // @synthesize bundleName=_bundleName;
@property(copy, nonatomic) NSString *bundleURL; // @synthesize bundleURL=_bundleURL;
- (void).cxx_destruct;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)ga_appendParams;
- (void)setupListen;
- (void)rnViewDidRenderFinish:(id)arg1;
- (void)rnView:(id)arg1 didFailed:(id)arg2;
- (void)rnViewDidCreated:(id)arg1;
- (unsigned long long)loadingState;
- (void)setLoadingState:(unsigned long long)arg1;
- (void)loadBundle;
- (void)configBackgroundView;
- (void)setupCaptionView;
- (void)setupRNView;
- (void)setupBackgroundView;
- (void)imy_topLeftButtonTouchupInside;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)_initMyself;
- (id)initWithBundleURL:(id)arg1 localBundleName:(id)arg2 modelName:(id)arg3 isShareBridge:(_Bool)arg4;
- (id)initWithBundleURL:(id)arg1 localBundleName:(id)arg2 modelName:(id)arg3;
- (void)changeOrientationTo:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
