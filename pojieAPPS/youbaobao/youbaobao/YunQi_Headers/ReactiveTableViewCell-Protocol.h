//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath;

@protocol ReactiveTableViewCell <NSObject>
- (id)bindModel:(id)arg1 cellForRowAtIndexPath:(NSIndexPath *)arg2 viewModel:(id)arg3;

@optional
- (double)bindModel:(id)arg1 heightForRowAtIndexPath:(NSIndexPath *)arg2 viewModel:(id)arg3;
@end
