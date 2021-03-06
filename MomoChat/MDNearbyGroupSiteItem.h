//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface MDNearbyGroupSiteItem : NSObject
{
    _Bool _closed;
    _Bool _moreGroup;
    _Bool _isMultiSection;
    NSString *_title;
    NSString *_subTitle;
    NSString *_leftIcon;
    NSString *_headerGoto;
    long long _itemType;
    NSString *_groupSiteId;
    NSArray *_siteInfoList;
    NSString *_logid;
}

@property(nonatomic) _Bool isMultiSection; // @synthesize isMultiSection=_isMultiSection;
@property(nonatomic) _Bool moreGroup; // @synthesize moreGroup=_moreGroup;
@property(retain, nonatomic) NSString *logid; // @synthesize logid=_logid;
@property(retain, nonatomic) NSArray *siteInfoList; // @synthesize siteInfoList=_siteInfoList;
@property(retain, nonatomic) NSString *groupSiteId; // @synthesize groupSiteId=_groupSiteId;
@property(nonatomic) long long itemType; // @synthesize itemType=_itemType;
@property(nonatomic) _Bool closed; // @synthesize closed=_closed;
@property(retain, nonatomic) NSString *headerGoto; // @synthesize headerGoto=_headerGoto;
@property(retain, nonatomic) NSString *leftIcon; // @synthesize leftIcon=_leftIcon;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)dictionaryFromGroupSiteItem;
- (id)initWithDictionary:(id)arg1;

@end

