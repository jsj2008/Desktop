//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYSimpleListCell.h"

@class UIImageView, UILabel;
@protocol SDWebImageOperation;

@interface IMYSimpleLabelCell : IMYSimpleListCell
{
    UILabel *_contentLabel;
    UIImageView *_contentImageView;
    id <SDWebImageOperation> _imageDownloadOperation;
}

@property(nonatomic) __weak id <SDWebImageOperation> imageDownloadOperation; // @synthesize imageDownloadOperation=_imageDownloadOperation;
@property(retain, nonatomic) UIImageView *contentImageView; // @synthesize contentImageView=_contentImageView;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
- (void).cxx_destruct;
- (void)contentImageDownloadFinished:(id)arg1;
- (void)reloadDisplay;

@end
