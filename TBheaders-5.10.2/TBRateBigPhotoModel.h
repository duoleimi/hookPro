//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBRateBigPhotoModel-Protocol.h"

@class NSString;

@interface TBRateBigPhotoModel : NSObject <TBRateBigPhotoModel>
{
    NSString *_photoUrl;	// 8 = 0x8
    NSString *_photoDesc;	// 16 = 0x10
}

@property(retain, nonatomic) NSString *photoDesc; // @synthesize photoDesc=_photoDesc;
@property(retain, nonatomic) NSString *photoUrl; // @synthesize photoUrl=_photoUrl;
- (void).cxx_destruct;
- (id)initWidthUrl:(id)arg1;
- (id)initWidthUrl:(id)arg1 description:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

