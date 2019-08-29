//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIButton.h"

#import "BrandTimelineMsgMgrExt-Protocol.h"

@class CContact, MMHeadImageView, MMUILabel, UIImageView;

@interface BTBrandBarItemView : MMUIButton <BrandTimelineMsgMgrExt>
{
    MMHeadImageView *_headImageView;
    MMUILabel *_nickNameLabel;
    UIImageView *_dotImageView;
    CContact *_contact;
    unsigned long long _index;
}

+ (double)iconWidth;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) UIImageView *dotImageView; // @synthesize dotImageView=_dotImageView;
@property(retain, nonatomic) MMUILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) MMHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
- (void).cxx_destruct;
- (void)onUpdateOftenReadContactByEnterSession:(id)arg1;
- (void)layoutSubviews;
- (id)getCurrentContact;
- (void)updateContact:(id)arg1;
- (void)initDotImageView;
- (void)initNickNameLabel;
- (void)initHeaderView;
- (void)initSubviews;
- (id)init;
- (void)dealloc;

@end
