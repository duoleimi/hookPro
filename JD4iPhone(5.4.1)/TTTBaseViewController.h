//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDViewController.h"

@class NSArray, NSString, UIView, UIViewController;

@interface TTTBaseViewController : JDViewController
{
    UIViewController *_fatherViewController;
    NSString *_titleName;
    UIView *_titleImageView;
    NSArray *_rightBarButtons;
}

@property(retain, nonatomic) NSArray *rightBarButtons; // @synthesize rightBarButtons=_rightBarButtons;
@property(retain, nonatomic) UIView *titleImageView; // @synthesize titleImageView=_titleImageView;
@property(retain, nonatomic) NSString *titleName; // @synthesize titleName=_titleName;
@property(nonatomic) __weak UIViewController *fatherViewController; // @synthesize fatherViewController=_fatherViewController;
- (void).cxx_destruct;
- (void)saveTitleImageView;
- (void)saveNavItems;
- (void)reBackNavItems;
- (id)fatherNavigationItem;

@end
