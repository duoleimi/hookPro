//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol ExternalAudioModuleDelegate <NSObject>
- (void)receiveAudioData:(void *)arg1 len:(int)arg2;
- (_Bool)stopAudioPlay;
- (_Bool)startAudioPlay;
- (_Bool)stopAudioCapture;
- (_Bool)startAudioCapture;
@end

