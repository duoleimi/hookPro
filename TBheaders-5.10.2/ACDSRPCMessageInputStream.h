//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableData;

@interface ACDSRPCMessageInputStream : NSObject
{
    NSMutableData *mBuffer;	// 8 = 0x8
    unsigned long long mOffset;	// 16 = 0x10
    unsigned long long totalSize;	// 24 = 0x18
}

- (void).cxx_destruct;
- (double)readDouble;
- (float)readFloat;
- (long long)readLong;
- (int)readInt;
- (short)readShort;
- (unsigned char)readByte;
- (unsigned int)readBytes:(char *)arg1 length:(unsigned int)arg2;
- (unsigned long long)totalSize;
- (_Bool)hasMore;
- (id)initWithData:(id)arg1;
- (id)init;

@end

