//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DOMRange.h"

#import "UIWebSelectionBlock.h"

@interface DOMRange (UIWebSelectionAdditions) <UIWebSelectionBlock>
- (id)enclosingDocument;
- (id)rangeOfContents;
- (_Bool)canShrinkDirectlyToTextOnly;
- (_Bool)containsRange:(id)arg1;
- (id)asDomRange;
- (id)asDomNode;
- (_Bool)selectable;
- (_Bool)rendersAsBlock;
- (_Bool)strictlyContainsBlock:(id)arg1;
- (_Bool)containsBlock:(id)arg1;
- (_Bool)isSameBlock:(id)arg1;
- (id)largerParent;
- (id)parentBlock;
- (struct CGRect)boundingRectAndInsideFixedPosition:(int *)arg1;
- (struct CGRect)boundingRect;
- (id)webFrame;
- (void)unionWithRange:(id)arg1;
@end
