//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "IShell-Protocol.h"

@class NSString;
@protocol NSCopying;

@interface IShellBlock : NSObject <IShell>
{
    CDUnknownBlockType _block;	// 8 = 0x8
    id <NSCopying> _name;	// 16 = 0x10
}

+ (id)initWithName:(id)arg1 block:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) id <NSCopying> name; // @synthesize name=_name;
- (void).cxx_destruct;
- (_Bool)run:(id)arg1 params:(id)arg2 inStream:(id)arg3;
- (id)initWithName:(id)arg1 block:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

