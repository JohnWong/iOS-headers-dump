//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol MFMessageBodyStringAccumulator <NSObject>
- (void)appendCustomEntityWithTag:(unsigned long long)arg1 stringRepresentation:(NSString *)arg2;
- (NSString *)accumulatedString;
- (void)appendInnerTextWithConsumableNode:(id <MFMessageBodyConsumableInnerTextNode>)arg1;
- (void)appendCharacters:(const unsigned short *)arg1 length:(unsigned long long)arg2;
- (void)appendRange:(struct _NSRange)arg1 ofString:(NSString *)arg2;
- (void)appendString:(NSString *)arg1;
- (_Bool)isFull;
@end

