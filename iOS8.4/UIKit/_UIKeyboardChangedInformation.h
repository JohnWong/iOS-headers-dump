//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

__attribute__((visibility("hidden")))
@interface _UIKeyboardChangedInformation : NSObject <NSSecureCoding>
{
    unsigned int _animationFencingPort;
    _Bool _keyboardOnScreen;
    struct CGRect _keyboardPosition;
}

+ (_Bool)supportsSecureCoding;
+ (id)informationForKeyboardUp:(struct CGRect)arg1;
+ (id)informationForKeyboardDown;
@property(readonly) _Bool keyboardOnScreen; // @synthesize keyboardOnScreen=_keyboardOnScreen;
@property(readonly) struct CGRect keyboardPosition; // @synthesize keyboardPosition=_keyboardPosition;
@property(readonly) unsigned int animationFencingPort; // @synthesize animationFencingPort=_animationFencingPort;
- (id)description;
- (void)dealloc;
- (void)insertPermissions;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithKeyboardRect:(struct CGRect)arg1 onScreen:(_Bool)arg2;

@end

