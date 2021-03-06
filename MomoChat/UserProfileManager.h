//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MFTimerDelegate.h"

@class MDCountLimitTimer, NSMutableSet;

@interface UserProfileManager : NSObject <MFTimerDelegate>
{
    MDCountLimitTimer *timer;
    NSMutableSet *strangerIds;
    NSMutableSet *remoteIds;
    _Bool isSecret;
}

@property(nonatomic) _Bool isSecret; // @synthesize isSecret;
- (void)fetchLimitedUserInfoFailed:(id)arg1;
- (void)fetchLimitedUserInfoErrored:(id)arg1;
- (void)fetchLimitedUserInfoSuccessed:(id)arg1;
- (void)batchFetchLimitedUserInfo:(id)arg1 sourceType:(unsigned long long)arg2;
- (void)parseSimpleListInfoDic:(id)arg1;
- (void)fetchImageMimeTypeSuccess:(id)arg1;
- (void)fetchImageMimeType;
- (void)checkIsNeedFetchImageMimeType;
- (void)fetchApplyStatusSuccess:(id)arg1;
- (void)checkIsShowApplyLBA;
- (void)updateOfficialAccountError:(id)arg1;
- (void)updateOfficialAccountFail:(id)arg1;
- (void)updateOfficialAccountSuccess:(id)arg1;
- (void)updateOfficialAccount;
- (id)modelingUserDicListAndReturnUpiList:(id)arg1;
- (id)modelingUserDicList:(id)arg1;
- (void)modelingUser:(id)arg1;
- (void)fetchProfileArrayError:(id)arg1;
- (void)fetchProfileArrayFail:(id)arg1;
- (void)handleProfileArrayData:(id)arg1 remoteids:(id)arg2;
- (void)fetchProfileArraySuccess:(id)arg1;
- (void)fetchProfileError:(id)arg1;
- (void)fetchProfileFail:(id)arg1;
- (void)fetchProfileSuccess:(id)arg1;
- (void)fetchMiniProfile:(id)arg1;
- (void)batchFetchProfile;
- (void)didReceiveTimerMark:(id)arg1;
- (void)asyncFetchProfile:(id)arg1;
- (void)syncFetchMiniProfile:(id)arg1;
- (void)syncFetchProfile:(id)arg1;
- (void)setUser:(id)arg1 location:(id)arg2 deviation:(id)arg3;
- (void)setUser:(id)arg1 relation:(int)arg2;
- (void)setUserProfileArrayOptimized:(id)arg1;
- (void)setUserProfileArray:(id)arg1;
- (void)setUserProfile:(id)arg1;
- (id)userProfile:(id)arg1;
- (id)localUserProfile:(id)arg1;
- (void)dealloc;
- (id)init;

@end

