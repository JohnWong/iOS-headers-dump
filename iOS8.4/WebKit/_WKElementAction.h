//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface _WKElementAction : NSObject
{
    struct RetainPtr<NSString> _title;
    CDUnknownBlockType _actionHandler;
    CDUnknownBlockType _dismissalHandler;
    long long _type;
}

+ (id)elementActionWithType:(long long)arg1;
+ (id)elementActionWithType:(long long)arg1 customTitle:(id)arg2;
+ (id)elementActionWithTitle:(id)arg1 actionHandler:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType dismissalHandler; // @synthesize dismissalHandler=_dismissalHandler;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_runActionWithElementInfo:(id)arg1 forActionSheetAssistant:(id)arg2;
@property(readonly, nonatomic) NSString *title;
- (void)dealloc;
- (id)_initWithTitle:(id)arg1 actionHandler:(CDUnknownBlockType)arg2 type:(long long)arg3;

@end

