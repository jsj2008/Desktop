//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSInputStream.h>

@interface NSInputStream (POS)
+ (id)pos_inputStreamForAFNetworkingWithAssetURL:(id)arg1;
+ (id)pos_inputStreamForCFNetworkWithAssetURL:(id)arg1;
+ (id)pos_inputStreamWithAssetURL:(id)arg1 asynchronous:(_Bool)arg2;
+ (id)pos_inputStreamWithAssetURL:(id)arg1;
- (long long)pos_streamLength;
@end
