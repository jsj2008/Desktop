//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IMYYoubiProductModel : NSObject
{
    NSString *_typeImageName;
    long long _m_id;
    NSString *_end_at;
    NSString *_images;
    NSString *_name;
    long long _price;
    NSString *_type;
    NSString *_url;
}

+ (void)initialize;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) long long price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *images; // @synthesize images=_images;
@property(copy, nonatomic) NSString *end_at; // @synthesize end_at=_end_at;
@property(nonatomic) long long m_id; // @synthesize m_id=_m_id;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *typeImageName; // @synthesize typeImageName=_typeImageName;

@end
