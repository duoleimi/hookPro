//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBOrderService.h"

@interface TBOrderService (Callback)
- (void)callbackWithEventType:(int)arg1 target:(id)arg2 result:(id)arg3;
- (id)actionNameWithEventType:(int)arg1;
- (CDUnknownBlockType)getCallbackWithEventType:(int)arg1 target:(id)arg2;
- (id)callbacksWithTarget:(id)arg1;
- (void)registerCallback:(CDUnknownBlockType)arg1 forEventType:(int)arg2 target:(id)arg3;
@end

