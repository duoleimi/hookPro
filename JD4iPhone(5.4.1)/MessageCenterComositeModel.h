//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDModel.h"

@class NSString;

@interface MessageCenterComositeModel : JDModel
{
    _Bool _expired;
    NSString *_content;
    NSString *_landPageId;
    NSString *_landPageUrl;
    NSString *_msgInvalidTime;
    NSString *_sImgPath;
    NSString *_subTaskId;
}

@property(nonatomic, getter=isExpired) _Bool expired; // @synthesize expired=_expired;
@property(copy, nonatomic) NSString *subTaskId; // @synthesize subTaskId=_subTaskId;
@property(copy, nonatomic) NSString *sImgPath; // @synthesize sImgPath=_sImgPath;
@property(copy, nonatomic) NSString *msgInvalidTime; // @synthesize msgInvalidTime=_msgInvalidTime;
@property(copy, nonatomic) NSString *landPageUrl; // @synthesize landPageUrl=_landPageUrl;
@property(copy, nonatomic) NSString *landPageId; // @synthesize landPageId=_landPageId;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end
