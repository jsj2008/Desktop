//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol MRTStateMachineDelegate;

@interface MRTStateMachine : NSObject
{
    _Bool _isInTransition;
    id <MRTStateMachineDelegate> _delegate;
    id _currentState;
    NSDictionary *_stateDictionary;
}

@property _Bool isInTransition; // @synthesize isInTransition=_isInTransition;
@property(copy, nonatomic) NSDictionary *stateDictionary; // @synthesize stateDictionary=_stateDictionary;
@property(retain, nonatomic) id currentState; // @synthesize currentState=_currentState;
@property(readonly, nonatomic) __weak id <MRTStateMachineDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)triggerEvent:(long long)arg1;
- (id)stateForStateId:(id)arg1;
- (id)init;
- (id)initWithStateDictionary:(id)arg1 initialState:(id)arg2 delegate:(id)arg3;

@end

