//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIButton, WanderSearchBar;

@protocol WanderSearchBarDelegate <NSObject>

@optional
- (void)WanderSearchBar:(WanderSearchBar *)arg1 historyItemSelected:(NSString *)arg2;
- (void)WanderSearchBar:(WanderSearchBar *)arg1 didTapCameraButton:(UIButton *)arg2;
- (void)WanderSearchBar:(WanderSearchBar *)arg1 textDidChange:(NSString *)arg2;
- (void)WanderSearchBarCancelButtonClicked:(WanderSearchBar *)arg1;
- (void)WanderSearchBarSearchButtonClicked:(WanderSearchBar *)arg1;
- (void)WanderSearchBarTextDidEndEditing:(WanderSearchBar *)arg1;
- (void)WanderSearchBarTextDidBeginEditing:(WanderSearchBar *)arg1;
- (_Bool)WanderSearchBarTextShouldBeginEditing:(WanderSearchBar *)arg1;
@end

