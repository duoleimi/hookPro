//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ChatRoomNoticeMsg : NSObject
{
    unsigned int createTime;
    unsigned int msgSvrID;
    NSString *chatRoomName;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *chatRoomName; // @synthesize chatRoomName;
@property(nonatomic) unsigned int msgSvrID; // @synthesize msgSvrID;
@property(nonatomic) unsigned int createTime; // @synthesize createTime;
- (void).cxx_destruct;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;

@end

