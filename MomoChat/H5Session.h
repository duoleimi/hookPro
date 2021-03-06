//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PSDPluginProtocol.h"

@class H5PSDController, NSMutableArray, NSString, PSDSession;

@interface H5Session : NSObject <PSDPluginProtocol>
{
    NSString *_appId;
    PSDSession *_session;
    NSMutableArray *_plugins;
}

@property(retain, nonatomic) NSMutableArray *plugins; // @synthesize plugins=_plugins;
@property(retain, nonatomic) PSDSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;
- (id)filterBoolString:(id)arg1;
- (void)handleEvent:(id)arg1;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) H5PSDController *rootController;
- (void)addPlugins;
- (id)initWithParams:(id)arg1 withDelegate:(id)arg2;
- (id)initWithParams:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

