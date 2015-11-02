//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBookUI/ABPropertyAction.h>

@class ABPropertyBestIDSValueQuery;

@interface ABPropertyFaceTimeAction : ABPropertyAction
{
    long long _type;
    ABPropertyBestIDSValueQuery *_bestFaceTimeQuery;
}

@property(retain, nonatomic) ABPropertyBestIDSValueQuery *bestFaceTimeQuery; // @synthesize bestFaceTimeQuery=_bestFaceTimeQuery;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void)_queryFaceTimeStatus;
- (void)performActionForItem:(id)arg1 sender:(id)arg2;
- (void)dealloc;
- (id)initWithContact:(id)arg1 propertyItems:(id)arg2;

@end

