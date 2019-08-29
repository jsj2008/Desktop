//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTManagedObject.h"

@class MRTStubPropertyID, NSDate, NSNumber, NSString;

@interface _MRTStubProperty : MRTManagedObject
{
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
- (void)setPrimitiveLongitudeValue:(double)arg1;
- (double)primitiveLongitudeValue;
@property double longitudeValue;
- (void)setPrimitiveLatitudeValue:(double)arg1;
- (double)primitiveLatitudeValue;
@property double latitudeValue;
- (void)setPrimitiveImageSizeWidthValue:(double)arg1;
- (double)primitiveImageSizeWidthValue;
@property double imageSizeWidthValue;
- (void)setPrimitiveImageSizeHeightValue:(double)arg1;
- (double)primitiveImageSizeHeightValue;
@property double imageSizeHeightValue;
- (void)setPrimitiveImageFocalPointYValue:(double)arg1;
- (double)primitiveImageFocalPointYValue;
@property double imageFocalPointYValue;
- (void)setPrimitiveImageFocalPointXValue:(double)arg1;
- (double)primitiveImageFocalPointXValue;
@property double imageFocalPointXValue;
- (void)setPrimitiveFacilitiesMaskValue:(long long)arg1;
- (long long)primitiveFacilitiesMaskValue;
@property long long facilitiesMaskValue;
- (void)setPrimitiveCategoryValue:(short)arg1;
- (short)primitiveCategoryValue;
@property short categoryValue;
@property(readonly, nonatomic) MRTStubPropertyID *objectID;

// Remaining properties
@property(retain, nonatomic) NSString *brandID; // @dynamic brandID;
@property(retain, nonatomic) NSNumber *category; // @dynamic category;
@property(retain, nonatomic) NSString *city; // @dynamic city;
@property(retain, nonatomic) NSString *countryCode; // @dynamic countryCode;
@property(retain, nonatomic) NSNumber *facilitiesMask; // @dynamic facilitiesMask;
@property(retain, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSNumber *imageFocalPointX; // @dynamic imageFocalPointX;
@property(retain, nonatomic) NSNumber *imageFocalPointY; // @dynamic imageFocalPointY;
@property(retain, nonatomic) NSNumber *imageSizeHeight; // @dynamic imageSizeHeight;
@property(retain, nonatomic) NSNumber *imageSizeWidth; // @dynamic imageSizeWidth;
@property(retain, nonatomic) NSString *imageTintColorHexString; // @dynamic imageTintColorHexString;
@property(retain, nonatomic) NSString *imageURLString; // @dynamic imageURLString;
@property(retain, nonatomic) NSNumber *latitude; // @dynamic latitude;
@property(retain, nonatomic) NSString *localizedNamesJSON; // @dynamic localizedNamesJSON;
@property(retain, nonatomic) NSNumber *longitude; // @dynamic longitude;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSDate *openingDate; // @dynamic openingDate;
@property(retain, nonatomic) NSString *phoneNumbersJSON; // @dynamic phoneNumbersJSON;
@property(retain, nonatomic) NSString *primaryLocales; // @dynamic primaryLocales;
@property(retain, nonatomic) NSString *region; // @dynamic region;
@property(retain, nonatomic) NSString *timeZoneName; // @dynamic timeZoneName;

@end
