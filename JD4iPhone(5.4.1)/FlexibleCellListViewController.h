//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDViewController.h"

#import "CategorySectionHeaderViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class JDLabel, NSArray, NSIndexPath, NSMutableArray, NSString, UITableView;

@interface FlexibleCellListViewController : JDViewController <UITableViewDataSource, UITableViewDelegate, CategorySectionHeaderViewDelegate>
{
    NSArray *items_;
    UITableView *myTable_;
    int section_;
    int selectRow_;
    int selectedSection_;
    id preViewController_;
    JDLabel *filterTitle_;
    _Bool isSelectedAllModel_;
    int startOffset_;
    _Bool isMultiChecked_;
    NSMutableArray *selectedIndexArray_;
    NSIndexPath *_selectedIndexPath;
}

@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(nonatomic) _Bool isSelectedAllModel; // @synthesize isSelectedAllModel=isSelectedAllModel_;
@property(nonatomic) _Bool isMultiChecked; // @synthesize isMultiChecked=isMultiChecked_;
@property(retain, nonatomic) NSMutableArray *selectedIndexArray; // @synthesize selectedIndexArray=selectedIndexArray_;
@property(retain, nonatomic) JDLabel *filterTitle; // @synthesize filterTitle=filterTitle_;
@property(nonatomic) int selectedSection; // @synthesize selectedSection=selectedSection_;
@property(nonatomic) __weak id preViewController; // @synthesize preViewController=preViewController_;
@property(nonatomic) int selectRow; // @synthesize selectRow=selectRow_;
@property(retain, nonatomic) NSArray *items; // @synthesize items=items_;
- (void).cxx_destruct;
- (void)onSelectionConfirmeAction:(id)arg1;
- (void)sectionHeaderView:(id)arg1 sectionOpened:(long long)arg2;
- (void)sectionHeaderView:(id)arg1 sectionClosed:(long long)arg2;
- (void)showSonCateListByCurrentSection;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)popToPreviewCtr:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

