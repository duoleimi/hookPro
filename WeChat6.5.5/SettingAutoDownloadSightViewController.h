//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

@class MMTableViewInfo;

__attribute__((visibility("hidden")))
@interface SettingAutoDownloadSightViewController : MMUIViewController
{
    MMTableViewInfo *m_tableViewInfo;
    unsigned int curImgSettingValue;
}

- (void).cxx_destruct;
- (void)saveVideoToLibraryChanged:(id)arg1;
- (void)savePhotoToLibraryChanged:(id)arg1;
- (long long)checkMarkOrNoneWithOption:(unsigned int)arg1 toMatch:(unsigned int)arg2;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)reloadTableData;
- (id)init;

@end

