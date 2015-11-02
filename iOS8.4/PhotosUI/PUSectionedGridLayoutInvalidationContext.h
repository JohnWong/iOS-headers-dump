//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewLayoutInvalidationContext.h"

@interface PUSectionedGridLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext
{
    _Bool _invalidateForVerticalScroll;
    _Bool _sectioningIsPreserved;
    _Bool _samplingIsPreserved;
    _Bool _invalidationHasBeenRedispatched;
}

@property(nonatomic) _Bool invalidationHasBeenRedispatched; // @synthesize invalidationHasBeenRedispatched=_invalidationHasBeenRedispatched;
@property(nonatomic) _Bool samplingIsPreserved; // @synthesize samplingIsPreserved=_samplingIsPreserved;
@property(nonatomic) _Bool sectioningIsPreserved; // @synthesize sectioningIsPreserved=_sectioningIsPreserved;
@property(nonatomic) _Bool invalidateForVerticalScroll; // @synthesize invalidateForVerticalScroll=_invalidateForVerticalScroll;
- (id)description;

@end

