//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CContact, NSArray, SessionSelectController;

@protocol SessionSelectControllerDelegate <NSObject>

@optional
- (void)OnSelectSessionCancel:(SessionSelectController *)arg1;
- (void)OnSelectSessions:(NSArray *)arg1 SessionSelectController:(SessionSelectController *)arg2;
- (void)OnSelectSession:(CContact *)arg1 SessionSelectController:(SessionSelectController *)arg2;
@end

