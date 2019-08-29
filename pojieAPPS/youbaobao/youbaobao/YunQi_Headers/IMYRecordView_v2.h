//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYSimpleTableView.h"

@class IMYRecordVM, NSMutableArray;

@interface IMYRecordView_v2 : IMYSimpleTableView
{
    _Bool _sholuldDelay;
    IMYRecordVM *_viewModel;
    double _maxTop;
    double _maxOffsetY;
    NSMutableArray *_biCellArray;
}

@property(retain, nonatomic) NSMutableArray *biCellArray; // @synthesize biCellArray=_biCellArray;
@property(nonatomic) _Bool sholuldDelay; // @synthesize sholuldDelay=_sholuldDelay;
@property(nonatomic) double maxOffsetY; // @synthesize maxOffsetY=_maxOffsetY;
@property(nonatomic) double maxTop; // @synthesize maxTop=_maxTop;
@property(retain, nonatomic) IMYRecordVM *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)initSelf;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)viewWillAppear;
- (_Bool)isDisplayedInScreen:(id)arg1 withOffsetY:(double)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
