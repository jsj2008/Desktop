//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle, NSString;

@interface LanguagesManager : NSObject
{
    _Bool _notificationEnable;
    NSBundle *_bundle;
    NSString *_currentLanguage;
    NSString *_tableName;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSString *tableName; // @synthesize tableName=_tableName;
@property(retain, nonatomic) NSString *currentLanguage; // @synthesize currentLanguage=_currentLanguage;
@property(retain, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
@property(nonatomic, getter=notificationIsEnable) _Bool notificationEnable; // @synthesize notificationEnable=_notificationEnable;
- (void).cxx_destruct;
- (_Bool)isAnAvailableLanguage:(id)arg1;
- (id)availableLanguages;
- (id)getDefaultLanguageForLogin:(id)arg1;
- (id)getDefaultLanguage;
- (_Bool)setLanguage:(id)arg1 forLogin:(id)arg2;
- (_Bool)setLanguage:(id)arg1;
- (id)localizedImageName:(id)arg1 type:(id)arg2;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2;
- (id)init;

@end
