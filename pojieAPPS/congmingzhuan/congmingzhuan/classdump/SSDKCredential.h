//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfferWallBase/MOBFDataModel.h>

@class NSDictionary, NSString;

@interface SSDKCredential : MOBFDataModel
{
}

@property(readonly, nonatomic) _Bool available; // @dynamic available;

// Remaining properties
@property(copy, nonatomic) NSString *authCode; // @dynamic authCode;
@property(nonatomic) double expired; // @dynamic expired;
@property(retain, nonatomic) NSDictionary *rawData; // @dynamic rawData;
@property(copy, nonatomic) NSString *secret; // @dynamic secret;
@property(copy, nonatomic) NSString *token; // @dynamic token;
@property(nonatomic) unsigned long long type; // @dynamic type;
@property(copy, nonatomic) NSString *uid; // @dynamic uid;

@end
