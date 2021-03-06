//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface TBPSCornerDetector : NSObject
{
    NSMutableArray *_cornerArray;	// 8 = 0x8
    char *_buffer;	// 16 = 0x10
    int _bufferWidth;	// 24 = 0x18
    int _bufferHeight;	// 28 = 0x1c
    int _bytesPerPixel;	// 32 = 0x20
}

@property(readonly, nonatomic) NSMutableArray *cornerArray; // @synthesize cornerArray=_cornerArray;
- (void).cxx_destruct;
- (void)dealloc;
- (double)detectorLuminosity;
- (id)detectorCorner:(int)arg1;
- (id)initWithBuffer:(char *)arg1 width:(int)arg2 height:(int)arg3 threshhold:(int)arg4;
- (id)initWithImage:(id)arg1;
- (id)initWithCMSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 resizeWidth:(int)arg2 resizeHeight:(int)arg3;

@end

