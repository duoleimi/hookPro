//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDViewController.h"

#import "AVCaptureVideoDataOutputSampleBufferDelegate.h"
#import "DecoderDelegate.h"

@class AVCaptureDevice, AVCaptureSession, AVCaptureStillImageOutput, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, Decoder, NSObject<OS_dispatch_queue>, NSString, NSTimer;

@interface ZXingViewController : JDViewController <DecoderDelegate, AVCaptureVideoDataOutputSampleBufferDelegate>
{
    _Bool _decoding;
    _Bool _isTakingPhotoInProgress;
    _Bool _isExecutingPZG;
    AVCaptureVideoPreviewLayer *captureVideoPreviewLayer;
    AVCaptureSession *captureSession;
    NSTimer *time;
    id <ZXingViewControllerDelegate> _delegate;
    AVCaptureDevice *_inputDevice;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    Decoder *_decoder;
    AVCaptureStillImageOutput *_imageOutput;
    AVCaptureVideoDataOutput *_videoOutput;
    long long _prevPosition;
}

@property _Bool isExecutingPZG; // @synthesize isExecutingPZG=_isExecutingPZG;
@property(nonatomic) long long prevPosition; // @synthesize prevPosition=_prevPosition;
@property(retain, nonatomic) AVCaptureVideoDataOutput *videoOutput; // @synthesize videoOutput=_videoOutput;
@property(retain, nonatomic) AVCaptureStillImageOutput *imageOutput; // @synthesize imageOutput=_imageOutput;
@property(retain, nonatomic) Decoder *decoder; // @synthesize decoder=_decoder;
@property(retain) NSObject<OS_dispatch_queue> *sessionQueue; // @synthesize sessionQueue=_sessionQueue;
@property(retain, nonatomic) AVCaptureDevice *inputDevice; // @synthesize inputDevice=_inputDevice;
@property(nonatomic) _Bool isTakingPhotoInProgress; // @synthesize isTakingPhotoInProgress=_isTakingPhotoInProgress;
@property(nonatomic) _Bool decoding; // @synthesize decoding=_decoding;
@property(nonatomic) __weak id <ZXingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSTimer *time; // @synthesize time;
@property(retain, nonatomic) AVCaptureSession *captureSession; // @synthesize captureSession;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *captureVideoPreviewLayer; // @synthesize captureVideoPreviewLayer;
- (void).cxx_destruct;
- (void)decoder:(id)arg1 didDecodeImage:(id)arg2 usingSubset:(id)arg3 withResult:(id)arg4;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)processStillImage:(id)arg1;
- (void)takePhoto;
- (_Bool)torchIsAvailable;
- (_Bool)torchIsOn;
- (void)setTorch:(_Bool)arg1;
- (void)stopCapture;
- (void)p_removeInputOutputHelper;
- (void)initCapture:(struct CGPoint)arg1 togglingCamera:(_Bool)arg2;
- (void)startPZG;
- (void)startScanCode;
- (void)cameraFocus;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)failedToStartRunning:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

