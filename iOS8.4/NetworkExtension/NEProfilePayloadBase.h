//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NEProfilePayloadBaseDelegate.h"

@class NSDictionary, NSMutableDictionary;

@interface NEProfilePayloadBase : NSObject <NEProfilePayloadBaseDelegate>
{
    NSDictionary *_payloadAtom;
    NSMutableDictionary *_pendingCertificates;
}

@property(copy, nonatomic) NSMutableDictionary *pendingCertificates; // @synthesize pendingCertificates=_pendingCertificates;
@property(retain, nonatomic) NSDictionary *payloadAtom; // @synthesize payloadAtom=_payloadAtom;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)addCertificatePending:(id)arg1 certificateTag:(id)arg2;
- (_Bool)setPostprocessedPayloadContents:(id)arg1;
- (id)getPreprocessedPayloadContents;
- (id)validatePayload;
- (id)initWithPayload:(id)arg1;

@end

