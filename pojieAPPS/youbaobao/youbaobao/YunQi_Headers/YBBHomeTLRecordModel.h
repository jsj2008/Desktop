//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface YBBHomeTLRecordModel : NSObject
{
    double _taken_at;
    double _taken_date;
    unsigned long long _modelID;
    NSString *_picture_url;
    long long _type;
    NSString *_video_url;
    long long _video_time;
    unsigned long long _identity_id;
    long long _baby_id;
    long long _event_id;
    NSString *_phAssetLocalIdentifier;
    long long _videoStartTime;
    long long _videoEndTime;
    NSString *_videoCoverPath;
    long long _status;
}

+ (id)ybb_persistGetFromLocalWithWhere:(id)arg1 orderBy:(id)arg2 offset:(unsigned long long)arg3 count:(unsigned long long)arg4;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *videoCoverPath; // @synthesize videoCoverPath=_videoCoverPath;
@property(nonatomic) long long videoEndTime; // @synthesize videoEndTime=_videoEndTime;
@property(nonatomic) long long videoStartTime; // @synthesize videoStartTime=_videoStartTime;
@property(retain, nonatomic) NSString *phAssetLocalIdentifier; // @synthesize phAssetLocalIdentifier=_phAssetLocalIdentifier;
@property(nonatomic) long long event_id; // @synthesize event_id=_event_id;
@property(nonatomic) long long baby_id; // @synthesize baby_id=_baby_id;
@property(nonatomic) unsigned long long identity_id; // @synthesize identity_id=_identity_id;
@property(nonatomic) long long video_time; // @synthesize video_time=_video_time;
@property(copy, nonatomic) NSString *video_url; // @synthesize video_url=_video_url;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *picture_url; // @synthesize picture_url=_picture_url;
@property(nonatomic) unsigned long long modelID; // @synthesize modelID=_modelID;
@property(nonatomic) double taken_date; // @synthesize taken_date=_taken_date;
@property(nonatomic) double taken_at; // @synthesize taken_at=_taken_at;
- (void).cxx_destruct;

@end
