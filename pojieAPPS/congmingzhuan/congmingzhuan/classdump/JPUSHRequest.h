//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfferWallBase/JCORETcpObject.h>

#import <OfferWallBase/JCOREJSONProtocol-Protocol.h>
#import <OfferWallBase/NSCoding-Protocol.h>
#import <OfferWallBase/NSCopying-Protocol.h>

@class NSMutableData, NSTimer;

@interface JPUSHRequest : JCORETcpObject <NSCopying, NSCoding, JCOREJSONProtocol>
{
    NSMutableData *_packetData;
    unsigned char _controlFlag;
    unsigned char _version;
    unsigned char _protocolType;
    unsigned short _rid;
    unsigned long long _uid;
    CDUnknownBlockType _packetLengthExceedBlk;
    NSTimer *_ackTimeoutTimer;
}

@property(nonatomic) __weak NSTimer *ackTimeoutTimer; // @synthesize ackTimeoutTimer=_ackTimeoutTimer;
@property(copy, nonatomic) CDUnknownBlockType packetLengthExceedBlk; // @synthesize packetLengthExceedBlk=_packetLengthExceedBlk;
- (void)setRid:(unsigned short)arg1;
- (void)setUid:(unsigned long long)arg1;
- (void)setProtocolType:(unsigned char)arg1;
- (unsigned char)protocolType;
- (void)setVersion:(unsigned char)arg1;
- (unsigned char)version;
@property(nonatomic) unsigned char controlFlag; // @synthesize controlFlag=_controlFlag;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)jpush_jsonClassType;
- (void)jpush_fromJSONValue:(id)arg1;
- (id)jpush_toJSON;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)onAckTimeout:(id)arg1;
- (void)dealloc;
- (void)stopAckTimeoutTimer;
- (void)startAckTimeoutTimer;
- (_Bool)isEqualToRequest:(id)arg1;
- (_Bool)isIMMessageRequest;
- (_Bool)ackOrRespRequiredForVersion1;
- (_Bool)hasHighPriority;
- (_Bool)isExclusive;
- (_Bool)ackOrRespRequired;
- (_Bool)canBeQueuedIfNotLogin;
- (_Bool)loginRequired;
- (void)send;
- (_Bool)packData;
- (id)bodyData;
- (id)packetData;
- (unsigned long long)uid;
- (unsigned short)rid;
- (unsigned long long)getRidID;

@end
