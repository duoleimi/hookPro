//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface NewAppCenterManager : NSObject
{
    NSMutableArray *_localGuessYouLikeAppDataCache;
    NSMutableArray *_guessYouLikeAppModelArray;
}

@property(retain, nonatomic) NSMutableArray *guessYouLikeAppModelArray; // @synthesize guessYouLikeAppModelArray=_guessYouLikeAppModelArray;
@property(retain, nonatomic) NSMutableArray *localGuessYouLikeAppDataCache; // @synthesize localGuessYouLikeAppDataCache=_localGuessYouLikeAppDataCache;
- (void).cxx_destruct;
- (id)documentsPath;
- (id)documentsPath:(id)arg1;
- (id)bundlePath:(id)arg1;
- (id)readFileArray;
- (_Bool)writeFileArray:(id)arg1;
- (void)addAppNumberToLocalGuessYouLikeData:(id)arg1;
- (void)handleFloorAppArray:(id)arg1;
- (id)oldVersionHotFloorModel:(id)arg1;
- (id)hotFloorModelWithOneItem:(id)arg1;
- (id)newHotFloorModel:(id)arg1;
- (id)compareHotFloor:(id)arg1;
- (void)deleteOutdateAppId:(id)arg1;
- (id)networkAppDataWithLocalGuessYouLikeData:(id)arg1;
- (id)init;

@end

