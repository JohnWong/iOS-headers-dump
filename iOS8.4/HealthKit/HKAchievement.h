//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSData, NSDate, NSNumber, NSUUID;

@interface HKAchievement : NSObject <NSSecureCoding>
{
    _Bool _viewed;
    NSUUID *_UUID;
    unsigned long long _achievementType;
    NSDate *_completedDate;
    NSNumber *_value;
}

+ (void)setOverridenUUID:(id)arg1;
+ (id)_allAchievementTypeNames;
+ (unsigned long long)_achievementTypeFromString:(id)arg1;
+ (id)_achievementTypeNameMappings;
+ (_Bool)supportsSecureCoding;
+ (_Bool)_requiresValueForAchievementType:(unsigned long long)arg1;
+ (Class)_classForAchievementType:(unsigned long long)arg1;
+ (id)_achievementWithUUID:(id)arg1 type:(unsigned long long)arg2 completedDate:(id)arg3 value:(id)arg4 extraData:(id)arg5;
+ (id)achievementWithAchievementType:(unsigned long long)arg1 completedDate:(id)arg2 value:(id)arg3 workoutActivityType:(unsigned long long)arg4;
+ (id)achievementWithAchievementType:(unsigned long long)arg1 completedDate:(id)arg2 value:(id)arg3;
+ (id)_nextUUID;
@property(nonatomic, getter=isViewed) _Bool viewed; // @synthesize viewed=_viewed;
@property(retain, nonatomic) NSNumber *value; // @synthesize value=_value;
@property(retain, nonatomic) NSDate *completedDate; // @synthesize completedDate=_completedDate;
@property(nonatomic) unsigned long long achievementType; // @synthesize achievementType=_achievementType;
@property(retain, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
- (void).cxx_destruct;
- (id)description;
- (id)_achievementTypeString;
- (void)_decodeExtraDataWithCoder:(id)arg1;
- (void)_encodeExtraDataWithCoder:(id)arg1;
- (_Bool)_hasExtraData;
@property(retain, nonatomic) NSData *extraData;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)_validateConfiguration;
- (id)initWithAchievementType:(unsigned long long)arg1 completedDate:(id)arg2 value:(id)arg3;

@end

