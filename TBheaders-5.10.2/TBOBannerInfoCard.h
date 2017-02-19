//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

#import "ITBOCellHeight-Protocol.h"

@class NSMutableArray, NSString;
@protocol TBOBanner;

@interface TBOBannerInfoCard : TBJSONModel <ITBOCellHeight>
{
    NSString *_id;	// 8 = 0x8
    NSMutableArray<TBOBanner> *_bannerList;	// 16 = 0x10
    NSString *_position;	// 24 = 0x18
}

@property(retain, nonatomic) NSString *position; // @synthesize position=_position;
@property(retain, nonatomic) NSMutableArray<TBOBanner> *bannerList; // @synthesize bannerList=_bannerList;
@property(retain, nonatomic) NSString *id; // @synthesize id=_id;
- (void).cxx_destruct;
- (double)cellHeightForModel:(id)arg1 owner:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
