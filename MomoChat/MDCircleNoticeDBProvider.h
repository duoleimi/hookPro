//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MDCircleNoticeItem, MFSimpleDatabase, NSString;

@interface MDCircleNoticeDBProvider : NSObject
{
    MFSimpleDatabase *_mfdb;
    NSString *_tableName;
    unsigned long long _itemType;
    MDCircleNoticeItem *_lastLoadItem;
    id <MDCircleNoticeDBProviderDelegate> _delegate;
}

@property(nonatomic) __weak id <MDCircleNoticeDBProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MDCircleNoticeItem *lastLoadItem; // @synthesize lastLoadItem=_lastLoadItem;
@property(nonatomic) unsigned long long itemType; // @synthesize itemType=_itemType;
@property(retain, nonatomic) NSString *tableName; // @synthesize tableName=_tableName;
@property(retain, nonatomic) MFSimpleDatabase *mfdb; // @synthesize mfdb=_mfdb;
- (void).cxx_destruct;
- (id)fieldDictFromNoticeItem:(id)arg1;
- (id)noticeItemFromRow:(id)arg1;
- (id)formateDataFromDBRowList:(id)arg1;
- (id)loadMoreItemForOnePage;
- (id)loadFirstPageItemArray;
- (_Bool)hasMoreData;
- (void)removeAllItems;
- (void)removeItemWithID:(id)arg1;
- (void)removeItem:(id)arg1;
- (void)addCircleNoticeItem:(id)arg1;
- (void)addCircleNoticeItemFromIMJ:(id)arg1;
- (_Bool)isExistItemWithId:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)ensureDbTable;
- (id)initWithDataBase:(id)arg1;

@end

