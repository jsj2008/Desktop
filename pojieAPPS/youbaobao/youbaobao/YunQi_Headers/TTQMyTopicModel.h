//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IMYURI, NSArray, NSString;

@interface TTQMyTopicModel : NSObject
{
    IMYURI *_actionURI;
    _Bool _is_elite;
    _Bool _is_recommended;
    _Bool _for_help;
    _Bool _has_image;
    _Bool _is_new;
    _Bool _is_video;
    _Bool _is_feeds;
    _Bool _isSel;
    NSString *_videoflowuri;
    long long _topic_id;
    long long _review_id;
    long long _type;
    long long _model_type;
    NSString *_image_url;
    NSString *_title;
    long long _total_review;
    NSString *_forum_name;
    long long _author_type;
    NSString *_user_screen_name;
    long long _user_id;
    NSString *_published_date;
    NSString *__id;
    NSString *_view_date;
    long long _is_deleted;
    NSArray *_images;
    NSString *_uri;
    long long _image_count;
    NSString *_video_time;
    unsigned long long _cellHeight;
    unsigned long long _extraState;
}

@property(nonatomic) unsigned long long extraState; // @synthesize extraState=_extraState;
@property(nonatomic) unsigned long long cellHeight; // @synthesize cellHeight=_cellHeight;
@property(nonatomic) _Bool isSel; // @synthesize isSel=_isSel;
@property(copy, nonatomic) NSString *video_time; // @synthesize video_time=_video_time;
@property(nonatomic) long long image_count; // @synthesize image_count=_image_count;
@property(copy, nonatomic) NSString *uri; // @synthesize uri=_uri;
@property(retain, nonatomic) NSArray *images; // @synthesize images=_images;
@property(nonatomic) _Bool is_feeds; // @synthesize is_feeds=_is_feeds;
@property(nonatomic) _Bool is_video; // @synthesize is_video=_is_video;
@property(nonatomic) long long is_deleted; // @synthesize is_deleted=_is_deleted;
@property(nonatomic) _Bool is_new; // @synthesize is_new=_is_new;
@property(nonatomic) _Bool has_image; // @synthesize has_image=_has_image;
@property(nonatomic) _Bool for_help; // @synthesize for_help=_for_help;
@property(nonatomic) _Bool is_recommended; // @synthesize is_recommended=_is_recommended;
@property(nonatomic) _Bool is_elite; // @synthesize is_elite=_is_elite;
@property(copy, nonatomic) NSString *view_date; // @synthesize view_date=_view_date;
@property(copy, nonatomic) NSString *_id; // @synthesize _id=__id;
@property(copy, nonatomic) NSString *published_date; // @synthesize published_date=_published_date;
@property(nonatomic) long long user_id; // @synthesize user_id=_user_id;
@property(copy, nonatomic) NSString *user_screen_name; // @synthesize user_screen_name=_user_screen_name;
@property(nonatomic) long long author_type; // @synthesize author_type=_author_type;
@property(copy, nonatomic) NSString *forum_name; // @synthesize forum_name=_forum_name;
@property(nonatomic) long long total_review; // @synthesize total_review=_total_review;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *image_url; // @synthesize image_url=_image_url;
@property(nonatomic) long long model_type; // @synthesize model_type=_model_type;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long review_id; // @synthesize review_id=_review_id;
@property(nonatomic) long long topic_id; // @synthesize topic_id=_topic_id;
@property(copy, nonatomic) NSString *videoflowuri; // @synthesize videoflowuri=_videoflowuri;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isNovel;

@end
