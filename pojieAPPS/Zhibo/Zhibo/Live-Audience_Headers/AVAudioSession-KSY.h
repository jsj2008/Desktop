//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVAudioSession.h>

@class NSString;

@interface AVAudioSession (KSY)
+ (_Bool)switchBluetoothInput:(_Bool)arg1;
+ (_Bool)isHeadsetPluggedIn;
+ (_Bool)isHeadsetInputAvaible;
+ (_Bool)isBluetoothInputAvaible;
+ (id)audioDeviceFromTypes:(id)arg1;
+ (id)speakerAudioDevice;
+ (id)headsetAudioDevice;
+ (id)builtinAudioDevice;
+ (id)bluetoothAudioDevice;
@property unsigned long long currentMicType;
@property(nonatomic) NSString *AVAudioSessionCategory;
- (void)setAVAudioSessionOption;
@property(nonatomic) _Bool bAllowBluetooth;
@property(nonatomic) _Bool bDefaultToSpeaker;
@property(nonatomic) _Bool bInterruptOtherAudio;
- (void)setValue:(_Bool)arg1 forOption:(unsigned long long)arg2;
- (_Bool)valueForOption:(unsigned long long)arg1;
- (void)setDefaultCfg;
@end
