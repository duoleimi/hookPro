//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MDLikeMeItem, MFSimpleDatabase, NSMutableArray;

@interface DBLikeMeProvider : NSObject
{
    id <DBLikeMeProviderDelegate> _delegate;
    id <DBLikeMeLastItemChangeDelegate> _lastItemChangeDelegate;
    unsigned long long _loadingCount;
    MDLikeMeItem *_lastItem;
    MFSimpleDatabase *_mfdb;
    NSMutableArray *_avoidDuplictContainer;
}

@property(retain, nonatomic) NSMutableArray *avoidDuplictContainer; // @synthesize avoidDuplictContainer=_avoidDuplictContainer;
@property(retain, nonatomic) MFSimpleDatabase *mfdb; // @synthesize mfdb=_mfdb;
@property(retain, nonatomic) MDLikeMeItem *lastItem; // @synthesize lastItem=_lastItem;
@property(nonatomic) unsigned long long loadingCount; // @synthesize loadingCount=_loadingCount;
@property(nonatomic) id <DBLikeMeLastItemChangeDelegate> lastItemChangeDelegate; // @synthesize lastItemChangeDelegate=_lastItemChangeDelegate;
@property(nonatomic) id <DBLikeMeProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateBannedInfo:(id)arg1;
- (_Bool)alreadyExistTopicID:(id)arg1 userID:(id)arg2;
- (void)clearAllMessages;
- (id)firstLoadingDataArray;
- (id)loadMoreDataBeforeItem:(id)arg1;
- (_Bool)hasMoreDataBeforeItem:(id)arg1;
- (void)removeSpamLikeWithMomoid:(id)arg1;
- (void)onlyCancelLikeInDBWithMomoID:(id)arg1 topicID:(id)arg2;
- (void)cancelLikeWithMomoID:(id)arg1 topicID:(id)arg2;
- (void)addLikeItem:(id)arg1;
- (id)likeMeItemFromDBRow:(id)arg1;
- (id)fieldDicFromLikeItem:(id)arg1;
- (void)loadLastItemNotifyDelegate:(_Bool)arg1;
- (void)ensureDBTable;
@property(readonly, nonatomic) unsigned long long count;
- (void)dealloc;
- (id)initWithDatabase:(id)arg1;

@end
