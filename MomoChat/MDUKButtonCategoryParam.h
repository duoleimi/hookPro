//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MDUKButtonCategoryParam : NSObject
{
    int _type;
    int _number;
    SEL _selector;
    id _target;
    NSString *_imageName;
    NSString *_buttonTitle;
    struct CGRect _frame;
}

@property(nonatomic) int number; // @synthesize number=_number;
@property(retain, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
- (void).cxx_destruct;

@end

