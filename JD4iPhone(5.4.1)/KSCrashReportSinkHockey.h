//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KSCrashReportSinkQuincy.h"

@class NSString;

@interface KSCrashReportSinkHockey : KSCrashReportSinkQuincy
{
    NSString *_appIdentifier;
}

+ (id)sinkWithAppIdentifier:(id)arg1 userIDKey:(id)arg2 userNameKey:(id)arg3 contactEmailKey:(id)arg4 crashDescriptionKeys:(id)arg5;
@property(retain, nonatomic) NSString *appIdentifier; // @synthesize appIdentifier=_appIdentifier;
- (void).cxx_destruct;
- (id)urlWithAppIdentifier:(id)arg1;
- (void)filterReports:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (id)initWithAppIdentifier:(id)arg1 userIDKey:(id)arg2 userNameKey:(id)arg3 contactEmailKey:(id)arg4 crashDescriptionKeys:(id)arg5;

@end
