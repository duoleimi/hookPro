//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString, NSString<Optional>;

@interface JDVDanmuUpFrom : JSONModel
{
    NSString *app;
    NSString<Optional> *pin;
    NSString<Optional> *clientType;
}

@property(retain, nonatomic) NSString<Optional> *clientType; // @synthesize clientType;
@property(retain, nonatomic) NSString<Optional> *pin; // @synthesize pin;
@property(retain, nonatomic) NSString *app; // @synthesize app;
- (void).cxx_destruct;
- (id)init;

@end

