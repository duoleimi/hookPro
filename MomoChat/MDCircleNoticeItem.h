//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface MDCircleNoticeItem : NSObject
{
    int _userSex;
    float _distance;
    NSString *_momoid;
    NSString *_userName;
    NSString *_userAvatar;
    long long _userAge;
    NSString *_mainContent;
    NSString *_subContent;
    NSDate *_itemTime;
    NSString *_itemId;
    NSString *_clickGotoStr;
    unsigned long long _itemType;
}

+ (id)dictWithItem:(id)arg1;
+ (id)noticeItemWithDict:(id)arg1;
@property(nonatomic) unsigned long long itemType; // @synthesize itemType=_itemType;
@property(retain, nonatomic) NSString *clickGotoStr; // @synthesize clickGotoStr=_clickGotoStr;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) NSDate *itemTime; // @synthesize itemTime=_itemTime;
@property(retain, nonatomic) NSString *subContent; // @synthesize subContent=_subContent;
@property(retain, nonatomic) NSString *mainContent; // @synthesize mainContent=_mainContent;
@property(nonatomic) float distance; // @synthesize distance=_distance;
@property(nonatomic) long long userAge; // @synthesize userAge=_userAge;
@property(nonatomic) int userSex; // @synthesize userSex=_userSex;
@property(retain, nonatomic) NSString *userAvatar; // @synthesize userAvatar=_userAvatar;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *momoid; // @synthesize momoid=_momoid;
- (void).cxx_destruct;

@end

