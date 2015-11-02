//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKit/CKDatabaseOperationInfo.h>

#import "NSSecureCoding.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface CKModifyRecordAccessOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>
{
    NSArray *_recordIDsToGrant;
    NSArray *_recordIDsToRevoke;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSArray *recordIDsToRevoke; // @synthesize recordIDsToRevoke=_recordIDsToRevoke;
@property(retain, nonatomic) NSArray *recordIDsToGrant; // @synthesize recordIDsToGrant=_recordIDsToGrant;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

