//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface EKUITextAndHeaderItem : NSObject
{
    NSString *_text;
    NSString *_header;
}

+ (id)itemWithText:(id)arg1 andHeader:(id)arg2;
@property(retain, nonatomic) NSString *header; // @synthesize header=_header;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;

@end

