//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TTQPublishContentUtil : NSObject
{
}

+ (double)computeHeightForImage:(id)arg1;
+ (id)computePublishRichImageView;
+ (id)publishTextView;
+ (id)computePublishTextView;
+ (double)computeHeightForText:(id)arg1 minHeight:(float)arg2;
+ (double)computeHeightForText:(id)arg1;
+ (_Bool)shouldShowPlaceHolder:(id)arg1 textModel:(id)arg2;
+ (long long)cutOutTextForOverflow:(id)arg1 without:(id)arg2 maxNum:(long long)arg3;
+ (long long)cutOutTextForOverflow:(id)arg1 maxNum:(long long)arg2;
+ (_Bool)validataTextNotOverflow:(id)arg1 without:(id)arg2 maxNum:(long long)arg3;
+ (_Bool)validataTextNotOverflow:(id)arg1 maxNum:(long long)arg2;
+ (long long)validataTextCount:(id)arg1;
+ (_Bool)validataTextForTrimNotLessThan:(long long)arg1 text:(id)arg2;
+ (_Bool)validataTextNotLessThan:(long long)arg1 text:(id)arg2;
+ (_Bool)validataImagesNotOverflow:(id)arg1 maxNum:(long long)arg2;
+ (long long)validataImageCount:(id)arg1;

@end
