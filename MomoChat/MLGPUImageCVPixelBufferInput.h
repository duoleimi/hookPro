//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImageOutput.h"

@class GLProgram, NSObject<OS_dispatch_semaphore>;

@interface MLGPUImageCVPixelBufferInput : GPUImageOutput
{
    int yuvConversionPositionAttribute;
    int yuvConversionTextureCoordinateAttribute;
    int yuvConversionLuminanceTextureUniform;
    int yuvConversionChrominanceTextureUniform;
    int yuvConversionMatrixUniform;
    _Bool _yuvConversionProgramAcceptsFullRangeYUV;
    GLProgram *_yuvConversionProgram;
    unsigned long long _yuvConversionInternalRotation;
    const float *_preferredYUVConversion;
    NSObject<OS_dispatch_semaphore> *_frameRenderingSemaphore;
}

@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *frameRenderingSemaphore; // @synthesize frameRenderingSemaphore=_frameRenderingSemaphore;
@property(nonatomic) const float *preferredYUVConversion; // @synthesize preferredYUVConversion=_preferredYUVConversion;
@property(nonatomic) _Bool yuvConversionProgramAcceptsFullRangeYUV; // @synthesize yuvConversionProgramAcceptsFullRangeYUV=_yuvConversionProgramAcceptsFullRangeYUV;
@property(nonatomic) unsigned long long yuvConversionInternalRotation; // @synthesize yuvConversionInternalRotation=_yuvConversionInternalRotation;
@property(retain, nonatomic) GLProgram *yuvConversionProgram; // @synthesize yuvConversionProgram=_yuvConversionProgram;
- (void).cxx_destruct;
- (void)informTargetsAboutNewFrameAtTime:(CDStruct_1b6d18a9)arg1;
- (void)setupYUVConversionProgramWithFullRangeYUVSupport:(_Bool)arg1;
- (_Bool)processCVPixelBuffer:(struct __CVBuffer *)arg1 frameTime:(CDStruct_1b6d18a9)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)processCVPixelBuffer:(struct __CVBuffer *)arg1 frameTime:(CDStruct_1b6d18a9)arg2;
- (_Bool)processCVPixelBuffer:(struct __CVBuffer *)arg1;
- (id)init;

@end
