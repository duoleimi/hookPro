//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FinalSearchNewGiftModel, FinalSearchTopView, NSDictionary, NSNumber, NSString, SearchActivityModel;

@protocol FinalSearchTopViewDelegate <NSObject>
- (void)topViewDidHasBtnClicked:(FinalSearchTopView *)arg1;
- (void)topViewDidFilterButtonClicked:(FinalSearchTopView *)arg1;
- (void)topView:(FinalSearchTopView *)arg1 sortBarDidSelectIndex:(NSNumber *)arg2 sortInfo:(NSDictionary *)arg3;

@optional
- (void)topViewDidErrorShopViewTaped:(FinalSearchTopView *)arg1;
- (void)topView:(FinalSearchTopView *)arg1 maidianWithNum:(NSNumber *)arg2 paramValue:(NSString *)arg3;
- (void)topView:(FinalSearchTopView *)arg1 tapCateWithCid:(NSString *)arg2 secondThirdStr:(NSString *)arg3;
- (void)topViewDidAllCategoryBtnClicked:(FinalSearchTopView *)arg1;
- (void)topViewDidCategoryBtnClicked:(FinalSearchTopView *)arg1;
- (void)topView:(FinalSearchTopView *)arg1 GotoNewUserEggWebCtr:(FinalSearchNewGiftModel *)arg2;
- (void)topView:(FinalSearchTopView *)arg1 GotoAdWebCtr:(SearchActivityModel *)arg2;
- (void)topView:(FinalSearchTopView *)arg1 GotoActivityList:(SearchActivityModel *)arg2;
- (void)topViewGotoShopHomeViewController;
@end
