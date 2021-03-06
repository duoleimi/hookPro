//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NXCellNode.h"

#import "NXActionProtocol-Protocol.h"

@class NSDictionary, NSString, NXView, NxNode;
@protocol NXActionProtocol;

@interface NXTemplateCellNode : NXCellNode <NXActionProtocol>
{
    NXView *_rootView;	// 144 = 0x90
    NxNode *_rootNode;	// 152 = 0x98
    NSDictionary *_dataDict;	// 160 = 0xa0
    NSDictionary *_stateDict;	// 168 = 0xa8
    id <NXActionProtocol> _delegate;	// 176 = 0xb0
}

@property(nonatomic) __weak id <NXActionProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDictionary *stateDict; // @synthesize stateDict=_stateDict;
@property(retain, nonatomic) NSDictionary *dataDict; // @synthesize dataDict=_dataDict;
- (void).cxx_destruct;
- (void)handleAction:(id)arg1 sender:(id)arg2 args:(id)arg3;
- (void)layout;
- (id)view;
- (struct CGSize)calculateSizeThatFits:(struct CGSize)arg1;
- (void)fillInitialProperties;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

