//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAudioRecorder, NSMutableDictionary, NSString;

@interface AudioRecorder : NSObject
{
    AVAudioRecorder *_audioRecorder;	// 8 = 0x8
    NSString *_strFilePath;	// 16 = 0x10
    NSString *_recordFilePath;	// 24 = 0x18
    double _time;	// 32 = 0x20
    NSMutableDictionary *_recordSettings;	// 40 = 0x28
    int recordType;	// 48 = 0x30
    _Bool isRecording;	// 52 = 0x34
}

@property(nonatomic) _Bool isRecording; // @synthesize isRecording;
@property(retain, nonatomic) AVAudioRecorder *audioRecorder; // @synthesize audioRecorder=_audioRecorder;
- (void).cxx_destruct;
- (void)dealloc;
- (int)getRecordingType;
- (id)getRecordingWavData;
- (id)getRecordingData;
- (float)averagePowerForChannel:(int)arg1;
- (void)encodRecordData;
- (void)stopRecording;
- (float)getCurRecordingTime;
- (float)getRecordingTimeFloat;
- (id)getRecordingTime;
- (id)getRecordingPath;
- (_Bool)startRecording;
- (id)initRecordingWithEncodingType:(int)arg1 andFileName:(id)arg2;

@end

