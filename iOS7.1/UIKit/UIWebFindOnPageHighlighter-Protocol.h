//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@protocol UIWebFindOnPageHighlighter <NSObject>
@property(readonly, nonatomic) unsigned long long highlightedMatchIndex;
@property(readonly, nonatomic) unsigned long long numberOfMatches;
@property(nonatomic) id <UIWebFindOnPageHighlighterDelegate> delegate;
@property(readonly, nonatomic) NSString *searchText;
- (void)highlightPreviousMatch;
- (void)highlightNextMatch;
- (void)setSelectionRect:(struct CGRect)arg1 textRects:(NSArray *)arg2 contentViews:(NSArray *)arg3 wobble:(_Bool)arg4;
- (void)setSearchText:(NSString *)arg1 matchLimit:(unsigned long long)arg2;
@end

