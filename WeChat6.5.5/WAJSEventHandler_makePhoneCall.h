//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

#import "WCActionSheetDelegate-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface WAJSEventHandler_makePhoneCall : WAJSEventHandler_BaseEvent <WCActionSheetDelegate>
{
    NSString *_number;
}

@property(retain, nonatomic) NSString *number; // @synthesize number=_number;
- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

