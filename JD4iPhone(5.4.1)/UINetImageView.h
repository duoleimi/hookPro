//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

#import "NetImageDownloaderDelegate.h"

@class NSString;

@interface UINetImageView : UIImageView <NetImageDownloaderDelegate>
{
    NSString *_imageUrl;
}

+ (id)contentTypeForImageData:(id)arg1;
@property(retain) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
- (void).cxx_destruct;
- (void)cancelDownload;
- (_Bool)animatedGIFWithData:(id)arg1;
- (_Bool)netImageWithData:(id)arg1;
- (void)onDownloadImage:(id)arg1;
- (void)setImageUrl:(id)arg1 placeHolder:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

