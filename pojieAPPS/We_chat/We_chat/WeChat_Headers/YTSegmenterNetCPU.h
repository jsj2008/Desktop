//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RapidNetCPU.h"

@interface YTSegmenterNetCPU : RapidNetCPU
{
}

- (id)forwordWithInputMat:(const struct Mat *)arg1 outputMat:(struct Mat *)arg2;
- (void)convertOutputBlob:(const struct rpd_blob<float> *)arg1 toOutputMat:(struct Mat *)arg2;
- (void)convertInputMat:(const struct Mat *)arg1 toInputBlob:(struct rpd_blob<float> *)arg2;

@end
