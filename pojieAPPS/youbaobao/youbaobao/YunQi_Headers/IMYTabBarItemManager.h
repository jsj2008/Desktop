//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IMYPublicBaseTabBarController, NSArray, NSNumber, NSString;

@interface IMYTabBarItemManager : NSObject
{
    _Bool _isHideTabBarTopLine;
    NSString *_configFileName;
    IMYPublicBaseTabBarController *_bindingTabBarController;
    NSArray *_itemConfigs;
    NSString *_tabBarBGImageName;
    NSString *_usingConfigPath;
    NSString *_configTabBarImage;
    NSNumber *_configHideLine;
}

+ (void)initialize;
@property(copy, nonatomic) NSNumber *configHideLine; // @synthesize configHideLine=_configHideLine;
@property(copy, nonatomic) NSString *configTabBarImage; // @synthesize configTabBarImage=_configTabBarImage;
@property(copy, nonatomic) NSString *usingConfigPath; // @synthesize usingConfigPath=_usingConfigPath;
@property(nonatomic) _Bool isHideTabBarTopLine; // @synthesize isHideTabBarTopLine=_isHideTabBarTopLine;
@property(copy, nonatomic) NSString *tabBarBGImageName; // @synthesize tabBarBGImageName=_tabBarBGImageName;
@property(copy, nonatomic) NSArray *itemConfigs; // @synthesize itemConfigs=_itemConfigs;
@property(nonatomic) __weak IMYPublicBaseTabBarController *bindingTabBarController; // @synthesize bindingTabBarController=_bindingTabBarController;
@property(copy, nonatomic) NSString *configFileName; // @synthesize configFileName=_configFileName;
- (void).cxx_destruct;
- (void)updateItemConfigWithBlock:(CDUnknownBlockType)arg1;
- (void)setupTabBarController:(id)arg1;
- (void)loadTabBarConfigWithData:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (_Bool)loadConfigFileData;
- (void)loadTabBarThemeInfo;
- (void)updateTabBarUIChange;
- (void)loadConfigDataFinished;
- (_Bool)hasConfigDataChangeOnThemeChanged;
- (id)init;

@end
