//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBIGPUImageInput-Protocol.h"

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, NSDate, NSURL, TBIGLProgram;
@protocol OS_dispatch_queue;

@interface TBIGPUImageMovieWriter : NSObject <TBIGPUImageInput>
{
    CDStruct_79c71658 videoDimensions;	// 8 = 0x8
    unsigned int videoType;	// 16 = 0x10
    NSURL *movieURL;	// 24 = 0x18
    AVAssetWriter *assetWriter;	// 32 = 0x20
    AVAssetWriterInput *assetWriterVideoInput;	// 40 = 0x28
    AVAssetWriterInputPixelBufferAdaptor *assetWriterPixelBufferInput;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *movieWritingQueue;	// 56 = 0x38
    struct CGSize videoSize;	// 64 = 0x40
    unsigned int movieFramebuffer;	// 80 = 0x50
    unsigned int movieRenderbuffer;	// 84 = 0x54
    TBIGLProgram *colorSwizzlingProgram;	// 88 = 0x58
    int colorSwizzlingPositionAttribute;	// 96 = 0x60
    int colorSwizzlingTextureCoordinateAttribute;	// 100 = 0x64
    int colorSwizzlingInputTextureUniform;	// 104 = 0x68
    unsigned int inputTextureForMovieRendering;	// 108 = 0x6c
    char *frameData;	// 112 = 0x70
    NSDate *startTime;	// 120 = 0x78
}

- (void).cxx_destruct;
- (struct CGSize)maximumOutputSize;
- (void)setInputSize:(struct CGSize)arg1;
- (void)setInputTexture:(unsigned int)arg1 atIndex:(long long)arg2;
- (long long)nextAvailableTextureIndex;
- (void)newFrameReady;
- (void)renderAtInternalSize;
- (void)presentFramebuffer;
- (void)setFilterFBO;
- (void)destroyDataFBO;
- (void)createDataFBO;
- (void)finishRecording;
- (void)startRecording;
- (void)initializeMovie;
- (void)dealloc;
- (id)initWithMovieURL:(id)arg1 size:(struct CGSize)arg2;

@end

