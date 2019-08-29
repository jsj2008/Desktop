//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, NSString, SZTextView, TTQPublishContentModel, TTQPublishImageCell, TTQPublishTextCell, TTQPublishTextModel, TTQPublishWithRichImageView, UILongPressGestureRecognizer;

@protocol TTQPublishTextEditDelegate <NSObject>
- (void)ttq_textViewDidSeletedDeletedToParagraphHeader:(TTQPublishTextCell *)arg1 indexPath:(NSIndexPath *)arg2 textModel:(TTQPublishTextModel *)arg3;
- (void)ttq_textViewDidCancelDeletedToParagraphHeader:(TTQPublishTextCell *)arg1 indexPath:(NSIndexPath *)arg2 textModel:(TTQPublishTextModel *)arg3;
- (void)ttq_textViewDeletedToParagraphHeader:(TTQPublishTextCell *)arg1 textView:(SZTextView *)arg2 indexPath:(NSIndexPath *)arg3 textModel:(TTQPublishTextModel *)arg4;
- (void)ttq_textViewEditing:(TTQPublishTextCell *)arg1 textView:(SZTextView *)arg2 indexPath:(NSIndexPath *)arg3 textModel:(TTQPublishTextModel *)arg4;
- (_Bool)ttq_textViewLongPress:(TTQPublishImageCell *)arg1 imageModel:(TTQPublishContentModel *)arg2 longPress:(UILongPressGestureRecognizer *)arg3;
- (_Bool)ttq_textViewIsEmoji:(SZTextView *)arg1;
- (void)ttq_textViewChangeInputView:(SZTextView *)arg1 inputMode:(long long)arg2;
- (void)textViewDidEndEditing:(SZTextView *)arg1 textModel:(TTQPublishContentModel *)arg2;
- (_Bool)textViewShouldEndEditing:(SZTextView *)arg1 textModel:(TTQPublishContentModel *)arg2;
- (void)ttq_textViewDidBeginEditing:(SZTextView *)arg1 textModel:(TTQPublishContentModel *)arg2;
- (_Bool)ttq_textViewShouldBeginEditing:(SZTextView *)arg1 textModel:(TTQPublishContentModel *)arg2;
- (_Bool)ttq_textViewShouldStatus:(TTQPublishImageCell *)arg1 imageModel:(TTQPublishContentModel *)arg2 status:(long long)arg3;
- (void)ttq_textViewSeleted:(TTQPublishWithRichImageView *)arg1 imageCell:(TTQPublishImageCell *)arg2 imageModel:(TTQPublishContentModel *)arg3;
- (_Bool)ttq_textViewDeletedImage:(TTQPublishContentModel *)arg1;
- (_Bool)ttq_textViewShouldChange:(SZTextView *)arg1 textModel:(TTQPublishContentModel *)arg2;
- (NSString *)ttq_placeholderForCell:(TTQPublishTextCell *)arg1 indexPath:(NSIndexPath *)arg2 textModel:(TTQPublishTextModel *)arg3;
@end
