//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSString, NSURL, TBSNSFeedCountItem, TBSNSFeedTileItem;

@interface TBSNSFeedItem : TBJSONModel
{
    _Bool _deleted;	// 8 = 0x8
    _Bool _linkUrlIsExt;	// 9 = 0x9
    _Bool _needtop;	// 10 = 0xa
    _Bool _isFeedFavoured;	// 11 = 0xb
    _Bool _isFeedFavorite;	// 12 = 0xc
    _Bool _isFeedDeleted;	// 13 = 0xd
    _Bool _isImageHadLoad;	// 14 = 0xe
    int _typeL;	// 16 = 0x10
    TBSNSFeedTileItem *_coverTile;	// 24 = 0x18
    unsigned long long _id;	// 32 = 0x20
    unsigned long long _creatorId;	// 40 = 0x28
    NSString *_linkTitle;	// 48 = 0x30
    NSString *_linkUrl;	// 56 = 0x38
    NSString *_title;	// 64 = 0x40
    NSArray *_tiles;	// 72 = 0x48
    unsigned long long _time;	// 80 = 0x50
    NSString *_summary;	// 88 = 0x58
    NSString *_accountNick;	// 96 = 0x60
    unsigned long long _componentId;	// 104 = 0x68
    NSString *_message;	// 112 = 0x70
    NSString *_componentName;	// 120 = 0x78
    NSString *_detailUrl;	// 128 = 0x80
    unsigned long long _feedType;	// 136 = 0x88
    TBSNSFeedCountItem *_feedCount;	// 144 = 0x90
    NSString *_recommendReason;	// 152 = 0x98
    long long _recommendType;	// 160 = 0xa0
    NSArray *_nodes;	// 168 = 0xa8
    double _feedInfoHeightL;	// 176 = 0xb0
    NSString *_recommendReasonL;	// 184 = 0xb8
    NSURL *_imageWifiUrl;	// 192 = 0xc0
    NSURL *_imageUnWifiUrl;	// 200 = 0xc8
}

@property(retain, nonatomic) NSURL *imageUnWifiUrl; // @synthesize imageUnWifiUrl=_imageUnWifiUrl;
@property(retain, nonatomic) NSURL *imageWifiUrl; // @synthesize imageWifiUrl=_imageWifiUrl;
@property(retain, nonatomic) NSString *recommendReasonL; // @synthesize recommendReasonL=_recommendReasonL;
@property(nonatomic) double feedInfoHeightL; // @synthesize feedInfoHeightL=_feedInfoHeightL;
@property(nonatomic) int typeL; // @synthesize typeL=_typeL;
@property(nonatomic) _Bool isImageHadLoad; // @synthesize isImageHadLoad=_isImageHadLoad;
@property(retain, nonatomic) NSArray *nodes; // @synthesize nodes=_nodes;
@property(nonatomic) _Bool isFeedDeleted; // @synthesize isFeedDeleted=_isFeedDeleted;
@property(nonatomic) _Bool isFeedFavorite; // @synthesize isFeedFavorite=_isFeedFavorite;
@property(nonatomic) _Bool isFeedFavoured; // @synthesize isFeedFavoured=_isFeedFavoured;
@property(nonatomic) long long recommendType; // @synthesize recommendType=_recommendType;
@property(retain, nonatomic) NSString *recommendReason; // @synthesize recommendReason=_recommendReason;
@property(retain, nonatomic) TBSNSFeedCountItem *feedCount; // @synthesize feedCount=_feedCount;
@property(nonatomic) unsigned long long feedType; // @synthesize feedType=_feedType;
@property(nonatomic) _Bool needtop; // @synthesize needtop=_needtop;
@property(retain, nonatomic) NSString *detailUrl; // @synthesize detailUrl=_detailUrl;
@property(retain, nonatomic) NSString *componentName; // @synthesize componentName=_componentName;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) unsigned long long componentId; // @synthesize componentId=_componentId;
@property(retain, nonatomic) NSString *accountNick; // @synthesize accountNick=_accountNick;
@property(retain, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(nonatomic) unsigned long long time; // @synthesize time=_time;
@property(retain, nonatomic) NSArray *tiles; // @synthesize tiles=_tiles;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool linkUrlIsExt; // @synthesize linkUrlIsExt=_linkUrlIsExt;
@property(retain, nonatomic) NSString *linkUrl; // @synthesize linkUrl=_linkUrl;
@property(retain, nonatomic) NSString *linkTitle; // @synthesize linkTitle=_linkTitle;
@property(nonatomic) _Bool deleted; // @synthesize deleted=_deleted;
@property(nonatomic) unsigned long long creatorId; // @synthesize creatorId=_creatorId;
@property(nonatomic) unsigned long long id; // @synthesize id=_id;
@property(retain, nonatomic) TBSNSFeedTileItem *coverTile; // @synthesize coverTile=_coverTile;
- (void).cxx_destruct;
- (unsigned long long)getGoodsItemIdAtIndex:(int)arg1;
- (id)getGoodsDetailUrlAtIndex:(int)arg1;
- (long long)getImagesCount;
- (_Bool)isFeedStreamNeedMask;
- (_Bool)isFeedStreamNeedWidget;
- (id)timeString;
- (id)toJSONDictionary;
- (id)getFeedImageUrl;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;

@end

