//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IFlySpeechRecognizerDelegate.h"

@class IFlySpeechRecognizer, NSString;

@interface JIMIMSpeechRecognizer : NSObject <IFlySpeechRecognizerDelegate>
{
    _Bool _isRecording;
    id <JIMIMSpeechRecognizerDelegate> _csDelegate;
    IFlySpeechRecognizer *_iFlySpeechRecognizer;
    NSString *_voiceText;
}

@property(nonatomic) _Bool isRecording; // @synthesize isRecording=_isRecording;
@property(retain, nonatomic) NSString *voiceText; // @synthesize voiceText=_voiceText;
@property(retain, nonatomic) IFlySpeechRecognizer *iFlySpeechRecognizer; // @synthesize iFlySpeechRecognizer=_iFlySpeechRecognizer;
@property(nonatomic) id <JIMIMSpeechRecognizerDelegate> csDelegate; // @synthesize csDelegate=_csDelegate;
- (void).cxx_destruct;
- (id)stringFromJson:(id)arg1;
- (void)onVolumeChanged:(int)arg1;
- (void)onEndOfSpeech;
- (void)onCancel;
- (void)onError:(id)arg1;
- (void)onResults:(id)arg1 isLast:(_Bool)arg2;
- (void)initRecognizer;
- (void)initFlyLibrary;
- (void)cancelRec;
- (void)stopRec;
- (void)startRec;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

