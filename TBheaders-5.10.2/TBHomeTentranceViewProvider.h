//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBHomeCommonViewProvider.h"

#import "TBHomeGridViewDataSource-Protocol.h"
#import "TBHomeGridViewDelegate-Protocol.h"

@class NSString, TBHomeGridView, UIImageView;

@interface TBHomeTentranceViewProvider : TBHomeCommonViewProvider <TBHomeGridViewDataSource, TBHomeGridViewDelegate>
{
    _Bool _isFestivalReourcesReady;	// 8 = 0x8
    TBHomeGridView *_gridMenuView;	// 16 = 0x10
    UIImageView *_backgroundImageView;	// 24 = 0x18
}

@property(nonatomic) _Bool isFestivalReourcesReady; // @synthesize isFestivalReourcesReady=_isFestivalReourcesReady;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) TBHomeGridView *gridMenuView; // @synthesize gridMenuView=_gridMenuView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)gridView:(id)arg1 didSelectAtRow:(unsigned long long)arg2 column:(unsigned long long)arg3;
- (id)gridView:(id)arg1 viewForRow:(unsigned long long)arg2 column:(unsigned long long)arg3;
- (unsigned long long)numberofColumnInGridView:(id)arg1;
- (unsigned long long)numberOfRowInGridView:(id)arg1;
- (void)updateFestivalIcon;
- (struct CGSize)renderSizeForHomeSection:(id)arg1;
- (id)provideViewForHomeSection:(id)arg1;
- (_Bool)canProvideViewForHomeSection:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

