//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

#import "UIActionSheetDelegate-Protocol.h"

@class NSMutableArray, NSString, TBBarButtonItem, UIActionSheet, UIButton, UIView;

@interface TBCouponCustomDeleteTableView : UITableView <UIActionSheetDelegate>
{
    _Bool _editingFlag;	// 8 = 0x8
    NSMutableArray *_deleteArray;	// 16 = 0x10
    TBBarButtonItem *_allChooseBarItem;	// 24 = 0x18
    UIView *_deleteConsoleView;	// 32 = 0x20
    UIButton *_deleteBt;	// 40 = 0x28
    UIButton *_allSelectBt;	// 48 = 0x30
    UIActionSheet *_actionsSheet;	// 56 = 0x38
    struct CGRect _originRect;	// 64 = 0x40
}

@property(retain, nonatomic) UIActionSheet *actionsSheet; // @synthesize actionsSheet=_actionsSheet;
@property(retain, nonatomic) UIButton *allSelectBt; // @synthesize allSelectBt=_allSelectBt;
@property(retain, nonatomic) UIButton *deleteBt; // @synthesize deleteBt=_deleteBt;
@property(retain, nonatomic) UIView *deleteConsoleView; // @synthesize deleteConsoleView=_deleteConsoleView;
@property(retain, nonatomic) TBBarButtonItem *allChooseBarItem; // @synthesize allChooseBarItem=_allChooseBarItem;
@property(nonatomic) struct CGRect originRect; // @synthesize originRect=_originRect;
@property(nonatomic) _Bool editingFlag; // @synthesize editingFlag=_editingFlag;
@property(retain, nonatomic) NSMutableArray *deleteArray; // @synthesize deleteArray=_deleteArray;
- (void).cxx_destruct;
- (id)couponlistItemArray;
- (id)deltecouponListinvalidArray;
- (id)deleteCouponListArray;
- (_Bool)isAllRowDelete;
- (id)getFinalDeleteArray;
- (_Bool)checkInvalidSection;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)animationDeleteConsoleView:(_Bool)arg1 animated:(_Bool)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)deleteFunction;
- (void)verifyDelete:(id)arg1;
- (void)allSelectBtClick;
- (void)unselectAll;
- (id)lineView;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

