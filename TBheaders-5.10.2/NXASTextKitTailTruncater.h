//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NXASTextKitTruncating-Protocol.h"

@class NSAttributedString, NSCharacterSet, NSString, NXASTextKitContext;

@interface NXASTextKitTailTruncater : NSObject <NXASTextKitTruncating>
{
    NXASTextKitContext *_context;	// 8 = 0x8
    NSAttributedString *_truncationAttributedString;	// 16 = 0x10
    NSCharacterSet *_avoidTailTruncationSet;	// 24 = 0x18
    struct CGSize _constrainedSize;	// 32 = 0x20
    vector_d5f79a51 _visibleRanges;	// 48 = 0x30
    struct CGRect _truncationStringRect;	// 72 = 0x48
}

@property(readonly, nonatomic) struct CGRect truncationStringRect; // @synthesize truncationStringRect=_truncationStringRect;
@property(readonly, nonatomic) vector_d5f79a51 visibleRanges; // @synthesize visibleRanges=_visibleRanges;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_truncate;
- (unsigned long long)_findTruncationInsertionPointAtOrBeforeCharacterIndex:(unsigned long long)arg1 layoutManager:(id)arg2 textStorage:(id)arg3;
- (unsigned long long)_calculateCharacterIndexBeforeTruncationMessage:(id)arg1 textStorage:(id)arg2 textContainer:(id)arg3;
- (id)initWithContext:(id)arg1 truncationAttributedString:(id)arg2 avoidTailTruncationSet:(id)arg3 constrainedSize:(struct CGSize)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

