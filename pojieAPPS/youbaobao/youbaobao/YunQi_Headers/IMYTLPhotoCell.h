//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel, UIView;

@interface IMYTLPhotoCell : UICollectionViewCell
{
    UIImageView *_imageView;
    UILabel *_imageNumLabel;
    UIView *_videoInfoBG;
    UILabel *_videoTimeLabel;
}

@property(nonatomic) __weak UILabel *videoTimeLabel; // @synthesize videoTimeLabel=_videoTimeLabel;
@property(nonatomic) __weak UIView *videoInfoBG; // @synthesize videoInfoBG=_videoInfoBG;
@property(nonatomic) __weak UILabel *imageNumLabel; // @synthesize imageNumLabel=_imageNumLabel;
@property(nonatomic) __weak UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)configHomePhotoCell:(id)arg1 indexPath:(id)arg2;
- (void)awakeFromNib;

@end

