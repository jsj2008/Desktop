//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWindow.h>

@class NSMutableArray, UILabel;

@interface IMYDebugStatusBar : UIWindow
{
    NSMutableArray *_messageQueue;
    UILabel *_messageLabel;
}

+ (void)postFinishMessage:(id)arg1 duration:(double)arg2;
+ (void)postMessage:(id)arg1;
+ (void)setHidden:(_Bool)arg1;
+ (id)shareInstance;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) NSMutableArray *messageQueue; // @synthesize messageQueue=_messageQueue;
- (void).cxx_destruct;
- (void)showNextMessage;
- (void)postMessage:(id)arg1;
- (id)init;

@end
