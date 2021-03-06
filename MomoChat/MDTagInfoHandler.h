//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"
#import "MDFileReceiverDelegate.h"

@class MDFeedTagItem, MDLocation, NSCache, NSDateFormatter, NSDictionary, NSString, UIImage;

@interface MDTagInfoHandler : NSObject <CLLocationManagerDelegate, MDFileReceiverDelegate>
{
    _Bool _isLoading;
    _Bool _infoLoaded;
    id <MDTagInfoHandlerDelegate> _delegate;
    NSString *_provinceString;
    NSString *_cityString;
    NSString *_weatherString;
    NSString *_temperatureString;
    NSString *_pm25String;
    NSString *_timeString;
    NSString *_dateString;
    NSString *_dayString;
    NSString *_iconURLstring;
    NSDictionary *_hlDic;
    NSDateFormatter *_dateFormatter;
    MDLocation *_currentLocation;
    UIImage *_tagImage;
    MDFeedTagItem *_tagItem;
    NSCache *_tagImageCache;
    NSString *_imagePath;
}

@property(nonatomic) _Bool infoLoaded; // @synthesize infoLoaded=_infoLoaded;
@property(copy, nonatomic) NSString *imagePath; // @synthesize imagePath=_imagePath;
@property(retain, nonatomic) NSCache *tagImageCache; // @synthesize tagImageCache=_tagImageCache;
@property(retain, nonatomic) MDFeedTagItem *tagItem; // @synthesize tagItem=_tagItem;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) UIImage *tagImage; // @synthesize tagImage=_tagImage;
@property(retain, nonatomic) MDLocation *currentLocation; // @synthesize currentLocation=_currentLocation;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) NSDictionary *hlDic; // @synthesize hlDic=_hlDic;
@property(copy, nonatomic) NSString *iconURLstring; // @synthesize iconURLstring=_iconURLstring;
@property(copy, nonatomic) NSString *dayString; // @synthesize dayString=_dayString;
@property(copy, nonatomic) NSString *dateString; // @synthesize dateString=_dateString;
@property(copy, nonatomic) NSString *timeString; // @synthesize timeString=_timeString;
@property(copy, nonatomic) NSString *pm25String; // @synthesize pm25String=_pm25String;
@property(copy, nonatomic) NSString *temperatureString; // @synthesize temperatureString=_temperatureString;
@property(copy, nonatomic) NSString *weatherString; // @synthesize weatherString=_weatherString;
@property(copy, nonatomic) NSString *cityString; // @synthesize cityString=_cityString;
@property(copy, nonatomic) NSString *provinceString; // @synthesize provinceString=_provinceString;
@property(nonatomic) id <MDTagInfoHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)checkIfCanProvideTag;
- (void)getTagInfoError:(id)arg1;
- (void)getTagInfoFail:(id)arg1;
- (void)getTagInfoSucceed:(id)arg1;
- (void)locationDidFinish;
- (void)getTagInfoWith:(id)arg1 type:(int)arg2 target:(id)arg3 okSelector:(SEL)arg4 errSelector:(SEL)arg5 failSelector:(SEL)arg6;
- (void)locationDidFail:(id)arg1;
- (void)getLocationInfo;
- (void)removeLocationObserver;
- (void)fileReceiveFail:(id)arg1;
- (void)fileReceiveFinish:(id)arg1;
- (void)getIconWithURL:(id)arg1;
- (void)getMixedImageFromItem:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

