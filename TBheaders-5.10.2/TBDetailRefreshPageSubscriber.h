//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBDetailEventBaseSubscriber.h"

@interface TBDetailRefreshPageSubscriber : TBDetailEventBaseSubscriber
{
}

- (_Bool)equals:(id)arg1 key:(id)arg2 ID:(id)arg3 customID:(id)arg4;
- (id)productView;
- (void)reloadProductTableViewForSingleCellWithEvent:(id)arg1 isKeyFlag:(_Bool)arg2;
- (void)reloadMainTableViewForSingleCellWithEvent:(id)arg1 isKeyFlag:(_Bool)arg2;
- (void)reloadProductSingleCellAtIndex:(unsigned long long)arg1;
- (void)reloadSingleCellAtIndex:(unsigned long long)arg1;
- (id)mainTableView;
- (id)handleRequestDataEvent:(id)arg1;
- (id)handleBackEvent:(id)arg1;
- (id)handleRedirectToH5Event:(id)arg1;
- (id)handleReloadSingleCellEvent:(id)arg1;
- (id)handleReloadTableViewEvent:(id)arg1;
- (id)handleReloadSingleCellWithKeyEvent:(id)arg1;
- (id)handleReloadDataEvent:(id)arg1;
- (id)handleRequestDataForJHSEvent:(id)arg1;
- (struct _NSRange)eventRange;
- (id)handleEvent:(id)arg1;

@end

