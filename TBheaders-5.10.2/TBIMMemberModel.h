//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface TBIMMemberModel : NSObject
{
    id _modelContext;	// 8 = 0x8
    NSURL *_imageUrl;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    NSString *_uniqueId;	// 32 = 0x20
}

@property(copy, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSURL *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) id modelContext; // @synthesize modelContext=_modelContext;
- (void).cxx_destruct;

@end
