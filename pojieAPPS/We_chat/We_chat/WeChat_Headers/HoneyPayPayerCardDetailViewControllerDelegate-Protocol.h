//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HoneyPayPayerCardDetailViewController, WCPayBindCardInfo;

@protocol HoneyPayPayerCardDetailViewControllerDelegate <NSObject>
- (void)payerCardDetailVC:(HoneyPayPayerCardDetailViewController *)arg1 changePayWay:(WCPayBindCardInfo *)arg2;
- (void)payerCardDetailVCDidClickUnbindCard:(HoneyPayPayerCardDetailViewController *)arg1;
- (void)payerCardDetailVCDidClickChangeMaximumAmount:(HoneyPayPayerCardDetailViewController *)arg1;
- (void)payerCardDetailVCDidClickCreatedDoneButton:(HoneyPayPayerCardDetailViewController *)arg1;
@end
