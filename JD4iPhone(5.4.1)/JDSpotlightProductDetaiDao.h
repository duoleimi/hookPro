//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDSpotlightBasicDao.h"

@class JDSpotlightManager;

@interface JDSpotlightProductDetaiDao : JDSpotlightBasicDao
{
    JDSpotlightManager *_manager;
}

+ (id)productDataFilePath;
@property(nonatomic) __weak JDSpotlightManager *manager; // @synthesize manager=_manager;
- (void).cxx_destruct;
- (id)creatProductDetailModelWithModel:(id)arg1;
- (void)p_insert:(id)arg1;
- (void)insertData:(id)arg1;
- (id)initWithManager:(id)arg1;

@end

