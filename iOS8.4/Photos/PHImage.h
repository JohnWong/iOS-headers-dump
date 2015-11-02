//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, UIImage;

@interface PHImage : NSObject
{
    _Bool _isPlaceholder;
    int _format;
    UIImage *_uiImage;
    NSData *_data;
    unsigned long long _width;
    unsigned long long _height;
    unsigned long long _bytesPerRow;
    unsigned long long _dataWidth;
    unsigned long long _dataHeight;
    unsigned long long _dataOffset;
}

+ (id)imageWithData:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4 dataWidth:(unsigned long long)arg5 dataHeight:(unsigned long long)arg6 dataOffset:(unsigned long long)arg7 format:(int)arg8 isPlaceholder:(_Bool)arg9;
+ (id)imageWithUIImage:(id)arg1 format:(int)arg2 isPlaceholder:(_Bool)arg3;
@property(readonly, nonatomic) _Bool isPlaceholder; // @synthesize isPlaceholder=_isPlaceholder;
@property(readonly, nonatomic) int format; // @synthesize format=_format;
@property(readonly, nonatomic) unsigned long long dataOffset; // @synthesize dataOffset=_dataOffset;
@property(readonly, nonatomic) unsigned long long dataHeight; // @synthesize dataHeight=_dataHeight;
@property(readonly, nonatomic) unsigned long long dataWidth; // @synthesize dataWidth=_dataWidth;
@property(readonly, nonatomic) unsigned long long bytesPerRow; // @synthesize bytesPerRow=_bytesPerRow;
@property(readonly, nonatomic) unsigned long long height; // @synthesize height=_height;
@property(readonly, nonatomic) unsigned long long width; // @synthesize width=_width;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) UIImage *uiImage; // @synthesize uiImage=_uiImage;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4 dataWidth:(unsigned long long)arg5 dataHeight:(unsigned long long)arg6 dataOffset:(unsigned long long)arg7 format:(int)arg8 isPlaceholder:(_Bool)arg9;
- (id)initWithUIImage:(id)arg1 format:(int)arg2 isPlaceholder:(_Bool)arg3;
- (id)description;

@end

