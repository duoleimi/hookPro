//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSArray, NSNumber, aluCountryInfo;

@interface aluAllCountries : NSObject <NSCoding>
{
    NSNumber *_updateTime;	// 8 = 0x8
    aluCountryInfo *_defaultCountry;	// 16 = 0x10
    NSArray *_sectionList;	// 24 = 0x18
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSArray *sectionList; // @synthesize sectionList=_sectionList;
@property(retain, nonatomic) aluCountryInfo *defaultCountry; // @synthesize defaultCountry=_defaultCountry;
@property(retain, nonatomic) NSNumber *updateTime; // @synthesize updateTime=_updateTime;
- (void).cxx_destruct;
- (void)saveToLocal;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)load;

@end

