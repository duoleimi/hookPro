//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDIMSocketModel.h"

@class NSNumber, NSString;

@interface JDIMServerMsgModel : JDIMSocketModel
{
    NSNumber *_code;
    NSString *_msgtext;
}

@property(retain, nonatomic) NSString *msgtext; // @synthesize msgtext=_msgtext;
@property(retain, nonatomic) NSNumber *code; // @synthesize code=_code;
- (void).cxx_destruct;
- (_Bool)isShouldOut;
- (_Bool)setDic:(id)arg1;

@end

