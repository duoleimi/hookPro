//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface WebviewJSEventHandler_openSecurityView : WebviewJSEventHandlerBase
{
    NSDictionary *_m_handlers;
}

@property(retain, nonatomic) NSDictionary *m_handlers; // @synthesize m_handlers=_m_handlers;
- (void).cxx_destruct;
- (void)registerHandler;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

@end

