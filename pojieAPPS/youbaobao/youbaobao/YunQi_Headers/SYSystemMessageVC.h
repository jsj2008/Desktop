//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SYBaseViewController.h"

#import "IMYRM80AttributedLabelDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AFHTTPRequestOperation, NSDateFormatter, NSMutableArray, NSMutableDictionary, NSString, UITableView;

@interface SYSystemMessageVC : SYBaseViewController <UITableViewDelegate, UITableViewDataSource, IMYRM80AttributedLabelDelegate>
{
    _Bool _popToRoot;
    _Bool _isBoBaoNiu;
    _Bool _push;
    _Bool _locationFinish;
    _Bool _canRefresh;
    int _type;
    UITableView *_tableView;
    id _fromVC;
    NSMutableArray *_list;
    AFHTTPRequestOperation *_requestOP;
    NSMutableDictionary *_heightCache;
    NSDateFormatter *_dateFormatter;
}

@property(nonatomic) _Bool canRefresh; // @synthesize canRefresh=_canRefresh;
@property(nonatomic) _Bool locationFinish; // @synthesize locationFinish=_locationFinish;
@property(nonatomic) _Bool push; // @synthesize push=_push;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) NSMutableDictionary *heightCache; // @synthesize heightCache=_heightCache;
@property(retain, nonatomic) AFHTTPRequestOperation *requestOP; // @synthesize requestOP=_requestOP;
@property(retain, nonatomic) NSMutableArray *list; // @synthesize list=_list;
@property(nonatomic) _Bool isBoBaoNiu; // @synthesize isBoBaoNiu=_isBoBaoNiu;
@property(nonatomic) __weak id fromVC; // @synthesize fromVC=_fromVC;
@property(nonatomic) _Bool popToRoot; // @synthesize popToRoot=_popToRoot;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)m80AttributedLabel:(id)arg1 clickedOnLink:(id)arg2;
- (void)postEventWithModel:(id)arg1 action:(long long)arg2 floor:(unsigned long long)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 isHeight:(_Bool)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)setupTableView;
- (void)initData;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
