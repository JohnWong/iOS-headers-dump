//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextSelectionRect.h"

@class WebSelectionRect;

__attribute__((visibility("hidden")))
@interface WKTextSelectionRect : UITextSelectionRect
{
    WebSelectionRect *_webRect;
}

+ (id)textSelectionRectsWithWebRects:(id)arg1;
@property(retain, nonatomic) WebSelectionRect *webRect; // @synthesize webRect=_webRect;
- (_Bool)isVertical;
- (_Bool)containsEnd;
- (_Bool)containsStart;
- (id)range;
- (long long)writingDirection;
- (struct CGRect)rect;
- (void)dealloc;
- (id)initWithWebRect:(id)arg1;

@end

