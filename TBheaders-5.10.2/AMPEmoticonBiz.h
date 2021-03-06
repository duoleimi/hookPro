//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AMPEmoticonBiz-Protocol.h"

@class NSLock, NSMutableArray, NSString;

@interface AMPEmoticonBiz : NSObject <AMPEmoticonBiz>
{
    NSMutableArray *_packList;	// 8 = 0x8
    NSLock *_listLock;	// 16 = 0x10
    NSMutableArray *_packInstallList;	// 24 = 0x18
}

@property(retain, nonatomic) NSMutableArray *packInstallList; // @synthesize packInstallList=_packInstallList;
@property(retain, nonatomic) NSLock *listLock; // @synthesize listLock=_listLock;
@property(retain, nonatomic) NSMutableArray *packList; // @synthesize packList=_packList;
- (void).cxx_destruct;
- (_Bool)unzipEmoticonFile:(id)arg1 packId:(id)arg2;
- (_Bool)installEmoticonFile:(id)arg1 origPack:(id)arg2;
- (id)loadEmoticonListData:(id)arg1 origPack:(id)arg2;
- (void)getLocalEmoticonPackInfo:(id)arg1 installingList:(id)arg2;
- (void)packDictionaryParse:(id)arg1;
- (_Bool)queryOnlinePackList;
- (id)getEmoticonById:(id)arg1 emoticonId:(id)arg2;
- (id)getEmoticonListByPackId:(id)arg1;
- (id)getPackList;
- (id)getPackById:(id)arg1;
- (_Bool)removeEmticonPack:(id)arg1;
- (_Bool)installEmoticonPack:(id)arg1;
- (_Bool)installEmoticonPack:(id)arg1 url:(id)arg2;
- (void)saveEmotion;
- (void)loadEmotion;
- (void)stopBiz;
- (void)resetBiz;
- (void)startBiz;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

