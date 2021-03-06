//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTCache.h"

@class NSLock, NSMutableDictionary, NSURL;

@interface MRTFileCache : MRTCache
{
    _Bool _builtAllKeys;
    NSLock *_allKeysLock;
    NSURL *_cacheFolder;
    NSMutableDictionary *_cacheFolderResourceValues;
}

@property(retain, nonatomic) NSMutableDictionary *cacheFolderResourceValues; // @synthesize cacheFolderResourceValues=_cacheFolderResourceValues;
@property(copy, nonatomic) NSURL *cacheFolder; // @synthesize cacheFolder=_cacheFolder;
@property(nonatomic) _Bool builtAllKeys; // @synthesize builtAllKeys=_builtAllKeys;
@property(retain, nonatomic) NSLock *allKeysLock; // @synthesize allKeysLock=_allKeysLock;
- (void).cxx_destruct;
- (id)fileURLForKey:(id)arg1;
- (void)queuedRemoveObjectForKey:(id)arg1;
- (void)queuedSetObject:(id)arg1 forKey:(id)arg2;
- (id)queuedObjectForKey:(id)arg1;
- (void)queuedSetDateModified:(id)arg1 forKey:(id)arg2;
- (void)queuedSetDateAccessed:(id)arg1 forKey:(id)arg2;
- (id)queuedDateAccessedForKey:(id)arg1;
- (id)queuedDateAddedForKey:(id)arg1;
- (void)queuedWriteData:(id)arg1 toURL:(id)arg2;
- (id)queuedReadDataFromURL:(id)arg1;
- (unsigned long long)fileWriteOptions;
- (id)_dateOfAccessExtendedAttributeForURL:(id)arg1;
- (id)_dateModifiedForURL:(id)arg1;
- (id)_cacheURLForKey:(id)arg1;
- (void)_rebuildKeySetIfNeeded;
- (id)allKeys;
- (void)flushMemoryCache;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)removeDataForKey:(id)arg1;
- (void)setData:(id)arg1 forKey:(id)arg2;
- (id)dataForKey:(id)arg1 newerThanInterval:(double)arg2 cacheDate:(id *)arg3;
- (id)dataForKey:(id)arg1;
- (id)rootURL;
- (void)dealloc;
- (id)initWithName:(id)arg1 useMemoryCache:(_Bool)arg2;
- (id)initWithName:(id)arg1;

@end

