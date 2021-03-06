//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UserModel;

@interface VIPTableViewCell : UITableViewCell
{
    UserModel *_model;
    UIImageView *_avatarImageView;
    UIImageView *_peerageImageView;
    UILabel *_nameLabel;
    UIImageView *_levelImageView;
    UIImageView *_sexImageView;
    UILabel *_iconLabel;
}

@property(nonatomic) __weak UILabel *iconLabel; // @synthesize iconLabel=_iconLabel;
@property(nonatomic) __weak UIImageView *sexImageView; // @synthesize sexImageView=_sexImageView;
@property(nonatomic) __weak UIImageView *levelImageView; // @synthesize levelImageView=_levelImageView;
@property(nonatomic) __weak UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) __weak UIImageView *peerageImageView; // @synthesize peerageImageView=_peerageImageView;
@property(nonatomic) __weak UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UserModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)awakeFromNib;

@end

