//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYTLViewModel.h"

@class NSMutableArray, NSString, RACSignal;

@interface IMYTLBabyInfoBabyNickNameVM : IMYTLViewModel
{
    NSMutableArray *_dataArray;
    NSString *_babyNickName;
    RACSignal *_saveButtonClick;
}

@property(retain, nonatomic) RACSignal *saveButtonClick; // @synthesize saveButtonClick=_saveButtonClick;
@property(copy, nonatomic) NSString *babyNickName; // @synthesize babyNickName=_babyNickName;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
- (void).cxx_destruct;
- (void)initData;
- (_Bool)checkInput;
- (id)initWithBabyNickName:(id)arg1;
- (void)dealloc;

@end
