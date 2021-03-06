//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JdPopoverControllerDelegate.h"
#import "OrderOpenPasswordViewDelegate.h"

@class JdPopoverController, NSString, OrderOpenPasswordView, SecurityPayModel, UIViewController;

@interface OpenPayMentPwdMgr : NSObject <JdPopoverControllerDelegate, OrderOpenPasswordViewDelegate>
{
    JdPopoverController *jdPopPicker;
    UIViewController *bindCardPickerVC;
    OrderOpenPasswordView *openPwdView;
    SecurityPayModel *spModel;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedOpenPayMentPwdMgr;
@property(retain, nonatomic) SecurityPayModel *spModel; // @synthesize spModel;
@property(retain, nonatomic) OrderOpenPasswordView *openPwdView; // @synthesize openPwdView;
- (void)openPwdViewActionType:(id)arg1 type:(long long)arg2;
- (struct CGPoint)popoverControllerDisPoint:(id)arg1 popParentView:(id)arg2;
- (_Bool)popoverControllerShouldDismissPopover:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)createPopUp;
- (void)PopOpenPaymentView;
- (void)dealloc;
- (id)init;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

