//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MessageUI/MFMessageBodyParser.h>

@class NSScanner;

@interface MFMessageBodyHTMLParser : MFMessageBodyParser
{
    NSScanner *_scanner;
}

- (void)didFindError:(id)arg1;
- (_Bool)parse;
- (void)_findBody;
- (_Bool)_isMilestoneTagName:(id)arg1;
- (void)_consumeNodesFromNode:(id)arg1 upToNode:(id)arg2;
- (Class)messageBodyElementClass;
- (int)messageBodyStringAccumulatorDefaultOptions;
- (void)dealloc;
- (id)initWithHTML:(id)arg1;

@end

