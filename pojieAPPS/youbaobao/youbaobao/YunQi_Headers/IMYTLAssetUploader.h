//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAssetExportSession, IMYTLQiniuUploadAsset, NSArray, NSError, NSMutableArray, NSMutableDictionary, NSMutableSet, NSTimer, RACSubject;
@protocol IMYOSSUploader;

@interface IMYTLAssetUploader : NSObject
{
    NSMutableDictionary *_progressDic;
    double _totalProgress;
    long long _count;
    NSArray *_uploads;
    IMYTLQiniuUploadAsset *_uploadAsset;
    RACSubject *_uploadSubject;
    NSError *_lastError;
    NSMutableSet *_uploadKeys;
    double _compressProgress;
    AVAssetExportSession *_export;
    NSTimer *_compressTimer;
    CDUnknownBlockType _progressBlock;
    id <IMYOSSUploader> _defaultUploader;
    NSMutableArray *_uploadTasks;
}

+ (id)imageDataRepresentation:(id)arg1;
@property(retain, nonatomic) NSMutableArray *uploadTasks; // @synthesize uploadTasks=_uploadTasks;
@property(retain, nonatomic) id <IMYOSSUploader> defaultUploader; // @synthesize defaultUploader=_defaultUploader;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(retain, nonatomic) NSTimer *compressTimer; // @synthesize compressTimer=_compressTimer;
@property(retain, nonatomic) AVAssetExportSession *export; // @synthesize export=_export;
@property(nonatomic) double compressProgress; // @synthesize compressProgress=_compressProgress;
@property(retain, nonatomic) NSMutableSet *uploadKeys; // @synthesize uploadKeys=_uploadKeys;
@property(retain, nonatomic) NSError *lastError; // @synthesize lastError=_lastError;
@property(retain, nonatomic) RACSubject *uploadSubject; // @synthesize uploadSubject=_uploadSubject;
@property(retain, nonatomic) IMYTLQiniuUploadAsset *uploadAsset; // @synthesize uploadAsset=_uploadAsset;
@property(retain, nonatomic) NSArray *uploads; // @synthesize uploads=_uploads;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(nonatomic) double totalProgress; // @synthesize totalProgress=_totalProgress;
@property(retain, nonatomic) NSMutableDictionary *progressDic; // @synthesize progressDic=_progressDic;
- (void).cxx_destruct;
- (id)generateOSSAsset:(id)arg1;
- (id)signalForCompressImageDataQuality:(double)arg1;
- (id)signalForGetImagePHAssetLocalidentity:(id)arg1 isHdUpload:(_Bool)arg2;
- (id)signalForGetVideoPHAssetLocalidentity:(id)arg1;
- (void)uploadCompressProgress;
- (id)signalForCompressVideoQuality:(id)arg1;
- (void)updateUploadProgress:(double)arg1 forKey:(id)arg2;
- (id)uploads:(id)arg1 progress:(CDUnknownBlockType)arg2;
- (id)upload:(id)arg1 progress:(CDUnknownBlockType)arg2;
- (void)cancelUploading;
- (void)handleUploadCompletion:(unsigned long long)arg1 url:(id)arg2;
- (id)doUploads:(id)arg1;
- (id)doUpload:(id)arg1;
- (id)init;
- (id)retryGetPhasset:(id)arg1;
- (void)getVideoAVAssetLocalIdentiy:(id)arg1 progress:(CDUnknownBlockType)arg2 completeBlock:(CDUnknownBlockType)arg3;
- (void)getImageDataLocalIdentiy:(id)arg1 isHdUpload:(_Bool)arg2 progress:(CDUnknownBlockType)arg3 completeBlock:(CDUnknownBlockType)arg4;
- (long long)checkMaxTimeAVAsset:(id)arg1;
- (id)compressAVAsset:(id)arg1 quality:(id)arg2 cropStart:(long long)arg3 cropEnd:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)compressImageData:(id)arg1 quality:(double)arg2 needCompress:(_Bool)arg3;
- (id)assetUploaderFilePath:(id)arg1 isVideo:(_Bool)arg2;
- (id)assetUploaderImageFilePath:(id)arg1;
- (id)assetUploaderVideoFilePath:(id)arg1;

@end
