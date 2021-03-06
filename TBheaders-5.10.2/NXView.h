//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "NXActionProtocol-Protocol.h"

@class NSString, NXActionHandler, NxNode;
@protocol NSObject;

@interface NXView : UIView <NXActionProtocol>
{
    NXActionHandler *_actionHandler;	// 8 = 0x8
    id <NSObject> _callNative;	// 16 = 0x10
    NxNode *_rootNode;	// 24 = 0x18
}

@property(retain, nonatomic) NxNode *rootNode; // @synthesize rootNode=_rootNode;
@property(nonatomic) __weak id <NSObject> callNative; // @synthesize callNative=_callNative;
@property(retain, nonatomic) NXActionHandler *actionHandler; // @synthesize actionHandler=_actionHandler;
- (void).cxx_destruct;
- (void)dealloc;
- (void)handleAction:(id)arg1 sender:(id)arg2 args:(id)arg3;
- (void)handleActionArray:(id)arg1;
- (void)clearAction:(id)arg1;
- (void)registerAllActionHandler:(id)arg1;
- (void)registerAction:(id)arg1 handler:(id)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithNode:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

