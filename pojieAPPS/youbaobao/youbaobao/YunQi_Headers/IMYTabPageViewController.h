//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYPageViewController.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSString, UICollectionView, UIColor, UIFont, UIImageView, UIView;

@interface IMYTabPageViewController : IMYPageViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>
{
    struct {
        _Bool titleForIndex;
    } _tabDataSourceFlags;
    _Bool _cellContainXib;
    UIView *_pageBarView;
    UIImageView *_pageBarImageView;
    UICollectionView *_collectionViewBar;
    UIView *_progressView;
    UIView *_separatorLine;
    unsigned long long _barStyle;
    double _collectionLayoutEdging;
    double _progressHeight;
    double _progressWidth;
    double _progressEdging;
    double _progressBottomEdging;
    double _cellWidth;
    double _cellSpacing;
    double _cellEdging;
    double _animateDuration;
    UIFont *_normalTextFont;
    UIFont *_selectedTextFont;
    UIColor *_normalTextColor;
    UIColor *_selectedTextColor;
    CDUnknownBlockType _didSelectIndexPathHandler;
    unsigned long long _currentTitleCount;
    unsigned long long _startTitleIndex;
    Class _cellClass;
    NSString *_cellIdentifier;
}

@property(retain, nonatomic) NSString *cellIdentifier; // @synthesize cellIdentifier=_cellIdentifier;
@property(nonatomic) _Bool cellContainXib; // @synthesize cellContainXib=_cellContainXib;
@property(nonatomic) Class cellClass; // @synthesize cellClass=_cellClass;
@property(nonatomic) unsigned long long startTitleIndex; // @synthesize startTitleIndex=_startTitleIndex;
@property(nonatomic) unsigned long long currentTitleCount; // @synthesize currentTitleCount=_currentTitleCount;
@property(copy, nonatomic) CDUnknownBlockType didSelectIndexPathHandler; // @synthesize didSelectIndexPathHandler=_didSelectIndexPathHandler;
@property(retain, nonatomic) UIColor *selectedTextColor; // @synthesize selectedTextColor=_selectedTextColor;
@property(retain, nonatomic) UIColor *normalTextColor; // @synthesize normalTextColor=_normalTextColor;
@property(retain, nonatomic) UIFont *selectedTextFont; // @synthesize selectedTextFont=_selectedTextFont;
@property(retain, nonatomic) UIFont *normalTextFont; // @synthesize normalTextFont=_normalTextFont;
@property(nonatomic) double animateDuration; // @synthesize animateDuration=_animateDuration;
@property(nonatomic) double cellEdging; // @synthesize cellEdging=_cellEdging;
@property(nonatomic) double cellSpacing; // @synthesize cellSpacing=_cellSpacing;
@property(nonatomic) double cellWidth; // @synthesize cellWidth=_cellWidth;
@property(nonatomic) double progressBottomEdging; // @synthesize progressBottomEdging=_progressBottomEdging;
@property(nonatomic) double progressEdging; // @synthesize progressEdging=_progressEdging;
@property(nonatomic) double progressWidth; // @synthesize progressWidth=_progressWidth;
@property(nonatomic) double progressHeight; // @synthesize progressHeight=_progressHeight;
@property(nonatomic) double collectionLayoutEdging; // @synthesize collectionLayoutEdging=_collectionLayoutEdging;
@property(nonatomic) unsigned long long barStyle; // @synthesize barStyle=_barStyle;
@property(nonatomic) __weak UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(nonatomic) __weak UIView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) __weak UICollectionView *collectionViewBar; // @synthesize collectionViewBar=_collectionViewBar;
@property(nonatomic) __weak UIImageView *pageBarImageView; // @synthesize pageBarImageView=_pageBarImageView;
@property(nonatomic) __weak UIView *pageBarView; // @synthesize pageBarView=_pageBarView;
- (void).cxx_destruct;
- (void)setDataSource:(id)arg1;
- (void)transitionFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 animated:(_Bool)arg3;
- (id)pageViewController:(id)arg1 titleAtIndex:(unsigned long long)arg2;
- (struct CGSize)boundingSizeWithString:(id)arg1 font:(id)arg2 constrainedToSize:(struct CGSize)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)registerCellClass:(Class)arg1 isContainXib:(_Bool)arg2;
- (void)scrollTitleTabFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)addUnderLineView;
- (void)addCollectionViewBar;
- (void)addPageBarBgImageView;
- (void)addPageBarView;
- (void)viewDidLoad;
- (void)configireTabPropertys;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

