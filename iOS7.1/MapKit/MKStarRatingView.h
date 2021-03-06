//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, UIImage;

@interface MKStarRatingView : UIView
{
    double _rating;
    long long _numLevels;
    double _padding;
    _Bool _highlighted;
    UIImage *_fullStarImage;
    UIImage *_halfStarImage;
    UIImage *_emptyStarImage;
    UIImage *_fullStarHighlightedImage;
    UIImage *_halfStarHighlightedImage;
    UIImage *_emptyStarHighlightedImage;
    NSMutableArray *_ratingViews;
    long long _numReviews;
}

@property(retain, nonatomic) UIImage *emptyStarHighlightedImage; // @synthesize emptyStarHighlightedImage=_emptyStarHighlightedImage;
@property(retain, nonatomic) UIImage *halfStarHighlightedImage; // @synthesize halfStarHighlightedImage=_halfStarHighlightedImage;
@property(retain, nonatomic) UIImage *fullStarHighlightedImage; // @synthesize fullStarHighlightedImage=_fullStarHighlightedImage;
@property(retain, nonatomic) UIImage *emptyStarImage; // @synthesize emptyStarImage=_emptyStarImage;
@property(retain, nonatomic) UIImage *halfStarImage; // @synthesize halfStarImage=_halfStarImage;
@property(retain, nonatomic) UIImage *fullStarImage; // @synthesize fullStarImage=_fullStarImage;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) double rating; // @synthesize rating=_rating;
@property(nonatomic) long long numberOfRatingLevels; // @synthesize numberOfRatingLevels=_numLevels;
- (void).cxx_destruct;
- (void)setPadding:(double)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

