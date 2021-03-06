//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IJKEncoder : NSObject
{
    unsigned long long _bitrate;
    struct dispatch_queue_s *_callbackQueue;
    id <IJKEncoderDelegate> _delegate;
}

@property(nonatomic) __weak id <IJKEncoderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct dispatch_queue_s *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(nonatomic) unsigned long long bitrate; // @synthesize bitrate=_bitrate;
- (void).cxx_destruct;
- (void)stopProcess:(id *)arg1;
- (id)initWithBitrate:(unsigned long long)arg1;

@end

