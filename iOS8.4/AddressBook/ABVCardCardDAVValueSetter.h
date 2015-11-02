//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBook/ABVCardPersonValueSetter.h>

@interface ABVCardCardDAVValueSetter : ABVCardPersonValueSetter
{
    _Bool _recordIsGroup;
    _Bool _importingToExistingGroup;
}

+ (int)groupPropertyForPersonProperty:(int)arg1;
+ (struct __CFDictionary *)_personToGroupPropertyMap;
@property _Bool recordIsGroup; // @synthesize recordIsGroup=_recordIsGroup;
- (id)imageData;
- (_Bool)setImageData:(id)arg1 cropRectX:(int)arg2 cropRectY:(int)arg3 cropRectWidth:(int)arg4 cropRectHeight:(int)arg5;
- (id)initWithGroup:(void *)arg1 removeExistingProperties:(_Bool)arg2;
- (id)initWithPerson:(void *)arg1 removeExistingProperties:(_Bool)arg2;
- (void)_drainExistingProperties;
- (_Bool)setValue:(void *)arg1 forProperty:(unsigned int)arg2;
- (void *)valueForProperty:(unsigned int)arg1;
- (void *)copyParsedRecordWithSource:(void *)arg1 outRecordType:(unsigned int *)arg2;
- (_Bool)propertyIsValidForPerson:(unsigned int)arg1;

@end

