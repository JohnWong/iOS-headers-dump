//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MFMessageBodyElement_Private.h"

@class MFMessageBodyParser, NSArray;

@interface MFMessageBodyElement : NSObject <MFMessageBodyElement_Private>
{
    MFMessageBodyParser *_parser;
    NSArray *_nodes;
    unsigned long long _quoteLevel;
    unsigned long long _externalRetainCount;
    int _validAttributes;
    int _attributes;
}

@property(nonatomic) MFMessageBodyParser *parser; // @synthesize parser=_parser;
- (id)description;
- (_Bool)isExternallyRetained;
- (void)releaseExternally;
- (id)retainExternally;
- (unsigned long long)quoteLevel;
- (int)valueForAttributes:(int)arg1;
- (void)_setValue:(int)arg1 forAttributes:(int)arg2;
- (_Bool)_hasValueForAttributes:(int)arg1;
- (id)copyConsumableNodesAndAppendInnerTextToStringAccumulator:(id)arg1;
@property(retain, nonatomic) NSArray *nodes;
- (unsigned long long)getQuoteLevel;
- (void)reset;
- (void)dealloc;
- (id)init;

@end

