//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IMYDynamicCommentModel : NSObject
{
    NSString *_avatar;
    NSString *_content;
    NSString *_created_time;
    unsigned long long _commentId;
    unsigned long long _dynamic_id;
    NSString *_screen_name;
    unsigned long long _parent_id;
    unsigned long long _isvip;
    NSString *_to_screen_name;
    unsigned long long _to_userid;
    unsigned long long _userid;
    NSString *_verify_original;
    double _cellHeight;
    double _contentHeight;
}

+ (void)initialize;
@property(nonatomic) double contentHeight; // @synthesize contentHeight=_contentHeight;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(retain, nonatomic) NSString *verify_original; // @synthesize verify_original=_verify_original;
@property(nonatomic) unsigned long long userid; // @synthesize userid=_userid;
@property(nonatomic) unsigned long long to_userid; // @synthesize to_userid=_to_userid;
@property(retain, nonatomic) NSString *to_screen_name; // @synthesize to_screen_name=_to_screen_name;
@property(nonatomic) unsigned long long isvip; // @synthesize isvip=_isvip;
@property(nonatomic) unsigned long long parent_id; // @synthesize parent_id=_parent_id;
@property(retain, nonatomic) NSString *screen_name; // @synthesize screen_name=_screen_name;
@property(nonatomic) unsigned long long dynamic_id; // @synthesize dynamic_id=_dynamic_id;
@property(nonatomic) unsigned long long commentId; // @synthesize commentId=_commentId;
@property(retain, nonatomic) NSString *created_time; // @synthesize created_time=_created_time;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
- (void).cxx_destruct;
- (id)showContent;
- (void)calculateCellHeight:(id)arg1;

@end

