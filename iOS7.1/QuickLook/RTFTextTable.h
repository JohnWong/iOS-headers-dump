//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <QuickLook/RTFTextBlock.h>

__attribute__((visibility("hidden")))
@interface RTFTextTable : RTFTextBlock
{
    unsigned long long _numCols;
    unsigned long long _tableFlags;
    id _lcache;
    void *_tablePrimary;
    void *_tableSecondary;
}

- (void)_setTableFlags:(unsigned long long)arg1;
- (unsigned long long)_tableFlags;
- (void)setLayoutAlgorithm:(unsigned long long)arg1;
- (unsigned long long)layoutAlgorithm;
- (void)setHidesEmptyCells:(_Bool)arg1;
- (_Bool)hidesEmptyCells;
- (void)setCollapsesBorders:(_Bool)arg1;
- (_Bool)collapsesBorders;
- (unsigned long long)numberOfColumns;
- (void)setNumberOfColumns:(unsigned long long)arg1;
- (void)_takeValuesFromTextBlock:(id)arg1;
- (void)dealloc;
- (id)init;

@end

