//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface IMYToolsGravidityCheckDetailUserDataModel : NSObject
{
    _Bool _isSync;
    long long _gcid;
    long long _gravidity_check_time;
    NSArray *_check_photos;
    long long _is_mark;
    long long _noticeTimeInterval;
    NSArray *_delete_photos;
}

+ (id)gravidityCheckDetailUserDataModelWithGcid:(long long)arg1;
+ (id)getUsingLKDBHelper;
+ (id)getPrimaryKey;
+ (id)getTableName;
+ (void)initialize;
@property(retain, nonatomic) NSArray *delete_photos; // @synthesize delete_photos=_delete_photos;
@property(nonatomic) _Bool isSync; // @synthesize isSync=_isSync;
@property(nonatomic) long long noticeTimeInterval; // @synthesize noticeTimeInterval=_noticeTimeInterval;
@property(nonatomic) long long is_mark; // @synthesize is_mark=_is_mark;
@property(retain, nonatomic) NSArray *check_photos; // @synthesize check_photos=_check_photos;
@property(nonatomic) long long gravidity_check_time; // @synthesize gravidity_check_time=_gravidity_check_time;
@property(nonatomic) long long gcid; // @synthesize gcid=_gcid;
- (void).cxx_destruct;

@end
