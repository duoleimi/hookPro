//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXComponent.h"

@class NSString, UIImage;
@protocol WXImageOperationProtocol;

@interface WXImageComponent : WXComponent
{
    NSString *_imageSrc;	// 360 = 0x168
    long long _resizeMode;	// 368 = 0x170
    long long _imageQuality;	// 376 = 0x178
    long long _imageSharp;	// 384 = 0x180
    UIImage *_image;	// 392 = 0x188
    id <WXImageOperationProtocol> _imageOperation;	// 400 = 0x190
}

@property(retain, nonatomic) id <WXImageOperationProtocol> imageOperation; // @synthesize imageOperation=_imageOperation;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) long long imageSharp; // @synthesize imageSharp=_imageSharp;
@property(nonatomic) long long imageQuality; // @synthesize imageQuality=_imageQuality;
@property(nonatomic) long long resizeMode; // @synthesize resizeMode=_resizeMode;
@property(retain, nonatomic) NSString *imageSrc; // @synthesize imageSrc=_imageSrc;
- (void).cxx_destruct;
- (_Bool)_needsDrawBorder;
- (id)imageLoader;
- (void)cancelImage;
- (void)updateImage;
- (void)viewWillUnload;
- (CDUnknownBlockType)displayBlock;
- (void)viewDidLoad;
- (void)updateAttributes:(id)arg1;
- (void)updateStyles:(id)arg1;
- (id)loadView;
- (id)initWithRef:(id)arg1 type:(id)arg2 styles:(id)arg3 attributes:(id)arg4 events:(id)arg5 weexInstance:(id)arg6;

@end

