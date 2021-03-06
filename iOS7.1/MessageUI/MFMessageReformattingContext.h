//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DOMDocument, DOMNode, DOMRange, NSArray, NSMutableArray;

@interface MFMessageReformattingContext : NSObject
{
    DOMDocument *_document;
    DOMNode *_body;
    NSMutableArray *_changes;
    double _maximumWidth;
    double _meanWidth;
    double _widthDeviation;
    _Bool _hasAnyLeftFloat;
    NSArray *_rightFloats;
    _Bool _floatsNeedUpdate;
    _Bool _metricsNeedUpdate;
    _Bool _documentContainsAnyWebKitTransform;
    double _minimumRescalingFactor;
    DOMRange *_firstTextRange;
}

@property(retain, nonatomic) DOMRange *firstTextRange; // @synthesize firstTextRange=_firstTextRange;
@property(nonatomic) double minimumRescalingFactor; // @synthesize minimumRescalingFactor=_minimumRescalingFactor;
@property(readonly, nonatomic) _Bool didChangeDocument;
- (void)_rollBackChange:(id)arg1;
- (void)rollBackLastChangeForElement:(id)arg1;
- (void)rollBackAllChanges;
- (void)changeProprety:(id)arg1 ofElement:(id)arg2 toValue:(id)arg3 priority:(id)arg4;
- (_Bool)changeMarginOfElement:(id)arg1 priority:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (_Bool)changeSizeOfElement:(id)arg1 priority:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (_Bool)rescaleElement:(id)arg1 withScale:(double)arg2;
- (_Bool)resizeElement:(id)arg1 withScale:(double)arg2 verificationBlock:(CDUnknownBlockType)arg3;
- (struct CGRect)boundingBoxOf:(id)arg1;
- (void)_updateMetricsIfNecessary;
@property(readonly, nonatomic) double widthDeviation;
@property(readonly, nonatomic) double meanWidth;
@property(readonly, nonatomic) double maximumWidth;
- (void)_updateFloatsIfNecessary;
@property(readonly, nonatomic) NSArray *rightFloats;
@property(readonly, nonatomic) _Bool hasAnyRightFloat;
@property(readonly, nonatomic) _Bool hasAnyLeftFloat;
@property(readonly, nonatomic) DOMNode *body;
@property(readonly, nonatomic) DOMDocument *document;
- (void)dealloc;
- (id)initWithDocument:(id)arg1;

@end

