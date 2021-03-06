//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MDFileReceiverDelegate.h"

@class NSString;

@interface MDDecorationManager : NSObject <MDFileReceiverDelegate>
{
}

+ (id)sharedManager;
- (_Bool)existsWithProductId:(id)arg1 version:(long long)arg2;
- (id)indexHtmlFilePathWithProductId:(id)arg1 version:(long long)arg2;
- (id)requestWithProductId:(id)arg1 version:(long long)arg2;
- (void)handleFileReceiveFinish:(id)arg1;
- (void)downloadPackageForTarget:(id)arg1 WithUrlString:(id)arg2 productId:(id)arg3 version:(long long)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

