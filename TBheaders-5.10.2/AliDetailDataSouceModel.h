//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AliDetailComponentModel, NSArray, NSString;
@protocol AliDetailComponentModel;

@interface AliDetailDataSouceModel : NSObject
{
    AliDetailComponentModel *_naviModel;	// 8 = 0x8
    AliDetailComponentModel *_headerModel;	// 16 = 0x10
    AliDetailComponentModel *_toolbarModel;	// 24 = 0x18
    NSString *_requestMap;	// 32 = 0x20
    NSArray<AliDetailComponentModel> *_mainModelList;	// 40 = 0x28
}

@property(retain, nonatomic) NSArray<AliDetailComponentModel> *mainModelList; // @synthesize mainModelList=_mainModelList;
@property(retain, nonatomic) NSString *requestMap; // @synthesize requestMap=_requestMap;
@property(retain, nonatomic) AliDetailComponentModel *toolbarModel; // @synthesize toolbarModel=_toolbarModel;
@property(retain, nonatomic) AliDetailComponentModel *headerModel; // @synthesize headerModel=_headerModel;
@property(retain, nonatomic) AliDetailComponentModel *naviModel; // @synthesize naviModel=_naviModel;
- (void).cxx_destruct;

@end

