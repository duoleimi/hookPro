//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface MDTableContrast : NSObject
{
    NSArray *_previousArray;
    NSArray *_currentArray;
    NSArray *_contrast;
}

+ (id)contrastForCurrentArray:(id)arg1 previousArray:(id)arg2;
@property(copy, nonatomic) NSArray *contrast; // @synthesize contrast=_contrast;
@property(copy, nonatomic) NSArray *currentArray; // @synthesize currentArray=_currentArray;
@property(copy, nonatomic) NSArray *previousArray; // @synthesize previousArray=_previousArray;
- (void).cxx_destruct;
- (id)moveDiffsWithDeletedObjects:(id)arg1 insertedObjects:(id)arg2;
- (id)insertionForArray:(id)arg1 insertedObjects:(id)arg2;
- (id)deletionsForArray:(id)arg1 deletedObjects:(id)arg2;
- (void)beginContrast;
- (id)init;
- (id)initWithCurrentArray:(id)arg1 previousArray:(id)arg2;

@end

