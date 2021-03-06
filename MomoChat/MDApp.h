//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MDAppStatusProvider, MDCryptLogManager, NSObject<OS_dispatch_queue>;

@interface MDApp : NSObject
{
    NSObject<OS_dispatch_queue> *dbQueue;
    MDAppStatusProvider *statusProvider;
    MDCryptLogManager *cryptLogManager;
}

@property(readonly) MDAppStatusProvider *status; // @synthesize status=statusProvider;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dbQueue; // @synthesize dbQueue;
@property(readonly, nonatomic) MDCryptLogManager *cryptLogManager;
- (void)dealloc;
- (id)init;

@end

