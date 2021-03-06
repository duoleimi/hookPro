//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSListController.h>

@class PSSpecifier;

@interface PSListItemsController : PSListController
{
    int _rowToSelect;
    BOOL _deferItemSelection;
    BOOL _restrictionList;
    PSSpecifier *_lastSelectedSpecifier;
}

- (void)setIsRestrictionList:(BOOL)arg1;
- (BOOL)isRestrictionList;
- (id)itemsFromDataSource;
- (id)itemsFromParent;
- (void)_addStaticText:(id)arg1;
- (void)listItemSelected:(id)arg1;
- (void)setRowToSelect;
- (void)setValueForSpecifier:(id)arg1 defaultValue:(id)arg2;
- (void)scrollToSelectedCell;
- (void)didLock;
- (void)prepareSpecifiersMetadata;
- (id)specifiers;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)suspend;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)dealloc;

@end

