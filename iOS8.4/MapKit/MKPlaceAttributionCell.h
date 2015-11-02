//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ABContactCell.h"

@class NSArray, NSAttributedString, NSMutableArray, UILabel;

__attribute__((visibility("hidden")))
@interface MKPlaceAttributionCell : ABContactCell
{
    UILabel *_label;
    NSMutableArray *_scaledConstraints;
    NSArray *_marginConstraints;
}

+ (double)intrinsicContentHeight;
+ (id)fontForLabel;
@property(retain, nonatomic) NSArray *marginConstraints; // @synthesize marginConstraints=_marginConstraints;
@property(retain, nonatomic) NSMutableArray *scaledConstraints; // @synthesize scaledConstraints=_scaledConstraints;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)tintColorDidChange;
@property(retain, nonatomic) NSAttributedString *attributionString;
- (id)updatedAttributionStringFromString:(id)arg1 updateColorOnly:(_Bool)arg2;
- (void)refreshMarginConstraints;
- (void)layoutMarginsDidChange;
- (void)contentSizeDidChange;
- (void)updateConstraints;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

