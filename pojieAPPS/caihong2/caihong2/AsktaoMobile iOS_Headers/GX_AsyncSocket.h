//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GXManagedThread, GX_AsyncReadPacket, GX_AsyncWritePacket, NSArray, NSMutableArray, NSMutableData, NSTimer;
@protocol AsyncSocketDelegate;

@interface GX_AsyncSocket : NSObject
{
    struct __CFSocket *theSocket;
    struct __CFSocket *theSocket6;
    struct __CFReadStream *theReadStream;
    struct __CFWriteStream *theWriteStream;
    struct __CFRunLoopSource *theSource;
    struct __CFRunLoopSource *theSource6;
    struct __CFRunLoop *theRunLoop;
    CDStruct_4210025a theContext;
    NSArray *theRunLoopModes;
    NSTimer *theConnectTimer;
    NSMutableArray *theReadQueue;
    GX_AsyncReadPacket *theCurrentRead;
    NSTimer *theReadTimer;
    NSMutableData *partialReadBuffer;
    NSMutableArray *theWriteQueue;
    GX_AsyncWritePacket *theCurrentWrite;
    NSTimer *theWriteTimer;
    id <AsyncSocketDelegate> theDelegate;
    unsigned short theFlags;
    long long theUserData;
    GXManagedThread *attachedThread;
}

+ (id)ZeroData;
+ (id)LFData;
+ (id)CRData;
+ (id)CRLFData;
+ (id)getSocketError;
- (void).cxx_destruct;
- (void)doCFWriteStreamCallback:(unsigned long long)arg1 forStream:(struct __CFWriteStream *)arg2;
- (void)doCFReadStreamCallback:(unsigned long long)arg1 forStream:(struct __CFReadStream *)arg2;
- (void)doCFSocketCallback:(unsigned long long)arg1 forSocket:(struct __CFSocket *)arg2 withAddress:(id)arg3 withData:(const void *)arg4;
- (void)onTLSStarted:(_Bool)arg1;
- (void)maybeStartTLS;
- (void)startTLS:(id)arg1;
- (void)doWriteTimeout:(id)arg1;
- (void)endCurrentWrite;
- (void)completeCurrentWrite;
- (void)doSendBytes;
- (void)maybeDequeueWrite;
- (void)scheduleDequeueWrite;
- (void)writeData:(id)arg1 withTimeout:(double)arg2 tag:(long long)arg3;
- (void)doWriteData:(id)arg1;
- (void)doReadTimeout:(id)arg1;
- (void)endCurrentRead;
- (void)completeCurrentRead;
- (void)doBytesAvailable;
- (long long)readIntoBuffer:(char *)arg1 maxLength:(long long)arg2;
- (_Bool)hasBytesAvailable;
- (void)maybeDequeueRead;
- (void)scheduleDequeueRead;
- (void)readDataWithTimeout:(double)arg1 tag:(long long)arg2;
- (void)readDataToData:(id)arg1 withTimeout:(double)arg2 maxLength:(long long)arg3 tag:(long long)arg4;
- (void)readDataToData:(id)arg1 withTimeout:(double)arg2 tag:(long long)arg3;
- (void)readDataToLength:(long long)arg1 withTimeout:(double)arg2 tag:(long long)arg3;
- (void)doReadDataIntoPacket:(id)arg1;
- (id)description;
- (_Bool)isIPv6;
- (_Bool)isIPv4;
- (unsigned short)addressPort:(struct __CFData *)arg1;
- (id)addressHost:(struct __CFData *)arg1;
- (_Bool)areStreamsConnected;
- (_Bool)isSocketConnected;
- (unsigned short)localPort:(struct __CFSocket *)arg1;
- (id)localHost:(struct __CFSocket *)arg1;
- (unsigned short)connectedPort:(struct __CFSocket *)arg1;
- (id)connectedHost:(struct __CFSocket *)arg1;
- (unsigned short)localPort;
- (id)localHost;
- (unsigned short)connectedPort;
- (id)connectedHost;
- (_Bool)isConnected;
- (id)errorFromCFStreamError:(CDStruct_87dc826d)arg1;
- (id)getWriteTimeoutError;
- (id)getReadTimeoutError;
- (id)getReadMaxedOutError;
- (id)getConnectTimeoutError;
- (id)getAbortError;
- (id)getStreamError;
- (id)getErrnoError;
- (id)unreadData;
- (void)maybeScheduleDisconnect;
- (void)disconnectAfterReadingAndWriting;
- (void)disconnectAfterWriting;
- (void)disconnectAfterReading;
- (void)disconnect;
- (void)stop;
- (void)closeWithoutNotice;
- (void)close;
- (void)emptyQueues;
- (void)recoverUnreadData;
- (void)closeWithError:(id)arg1;
- (_Bool)setSocketFromStreamsAndReturnError:(id *)arg1;
- (void)doStreamOpen;
- (_Bool)openStreamsAndReturnError:(id *)arg1;
- (_Bool)configureStreamsAndReturnError:(id *)arg1;
- (_Bool)attachStreamsToRunLoop:(id)arg1 error:(id *)arg2;
- (_Bool)createStreamsToHost:(id)arg1 onPort:(unsigned short)arg2 error:(id *)arg3;
- (_Bool)createStreamsFromNative:(int)arg1 error:(id *)arg2;
- (void)doSocketOpen:(struct __CFSocket *)arg1 withCFSocketError:(long long)arg2;
- (void)doAcceptWithSocket:(int)arg1;
- (_Bool)connectSocketToAddress:(id)arg1 error:(id *)arg2;
- (_Bool)configureSocketAndReturnError:(id *)arg1;
- (_Bool)attachSocketsToRunLoop:(id)arg1 error:(id *)arg2;
- (_Bool)createSocketForAddress:(id)arg1 error:(id *)arg2;
- (void)doConnectTimeout:(id)arg1;
- (void)endConnectTimeout;
- (void)startConnectTimeout:(double)arg1;
- (_Bool)connectToAddress:(id)arg1 withTimeout:(double)arg2 error:(id *)arg3;
- (_Bool)connectToAddress:(id)arg1 error:(id *)arg2;
- (_Bool)connectToHost:(id)arg1 onPort:(unsigned short)arg2 withTimeout:(double)arg3 error:(id *)arg4;
- (_Bool)connectToHost:(id)arg1 onPort:(unsigned short)arg2 error:(id *)arg3;
- (_Bool)acceptOnAddress:(id)arg1 port:(unsigned short)arg2 error:(id *)arg3;
- (_Bool)acceptOnPort:(unsigned short)arg1 error:(id *)arg2;
- (_Bool)setRunLoopModes:(id)arg1;
- (_Bool)moveToRunLoop:(id)arg1;
- (void)enablePreBuffering;
- (void)runLoopUnscheduleWriteStream;
- (void)runLoopUnscheduleReadStream;
- (void)runLoopRemoveTimer:(id)arg1;
- (void)runLoopAddTimer:(id)arg1;
- (void)runLoopRemoveSource:(struct __CFRunLoopSource *)arg1;
- (void)runLoopAddSource:(struct __CFRunLoopSource *)arg1;
- (float)progressOfWriteReturningTag:(long long *)arg1 bytesDone:(long long *)arg2 total:(long long *)arg3;
- (float)progressOfReadReturningTag:(long long *)arg1 bytesDone:(long long *)arg2 total:(long long *)arg3;
- (struct __CFWriteStream *)getCFWriteStream;
- (struct __CFReadStream *)getCFReadStream;
- (struct __CFSocket *)getCFSocket;
- (_Bool)canSafelySetDelegate;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setUserData:(long long)arg1;
- (long long)userData;
- (void)dealloc;
- (void)initGxAsyncSocketInfo;
- (id)initWithDelegate:(id)arg1 userData:(long long)arg2 attachedThread:(id)arg3;
- (id)initWithDelegate:(id)arg1 attachedThread:(id)arg2;
- (id)init;

@end
