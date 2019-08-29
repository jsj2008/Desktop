//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;

@interface UAExceptionHandler : NSObject
{
    CDUnknownFunctionPointerType _defaultExceptionHandler;
    struct sigaction *_prev_signal_handlers;
    NSHashTable *_loggerInstances;
}

+ (id)sharedHandler;
@property(retain, nonatomic) NSHashTable *loggerInstances; // @synthesize loggerInstances=_loggerInstances;
@property(nonatomic) struct sigaction *prev_signal_handlers; // @synthesize prev_signal_handlers=_prev_signal_handlers;
@property(nonatomic) CDUnknownFunctionPointerType defaultExceptionHandler; // @synthesize defaultExceptionHandler=_defaultExceptionHandler;
- (void).cxx_destruct;
- (void)ua_handleUncaughtException:(id)arg1;
- (void)addLoggerInstance:(id)arg1;
- (void)setupHandlers;
- (void)dealloc;
- (id)init;

@end
