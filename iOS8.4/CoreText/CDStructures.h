//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double _field1;
    double _field2;
};

struct GlyphStack {
    long long _field1;
    long long _field2;
    struct GlyphStackEntry _field3[1];
};

struct GlyphStackEntry {
    unsigned short _field1;
    struct CGSize _field2;
    unsigned int _field3;
    long long _field4;
    unsigned char _field5;
};

struct StrikeMetrics {
    double _field1;
    double _field2;
    double _field3;
    unsigned int _field4;
    struct CGPoint _field5;
    struct CGRect _field6;
    _Bool _field7;
};

struct TBMPDataCache;

struct TBaseFont {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    struct TCFRef<const __CFData *> _field3;
    struct TCFRef<const __CFData *> _field4;
    struct TCFRef<const __CFData *> _field5;
    struct TCFRef<const __CFData *> _field6;
    struct TCFRef<const __CFData *> _field7;
    struct TCFRef<const __CFData *> _field8;
    struct TCFRef<const __CFData *> _field9;
    struct TCFRef<const __CFData *> _field10;
    struct TCFRef<const __CFURL *> _field11;
    int _field12;
    struct TCFRef<__CFDictionary *> _field13;
    struct TCFRef<const __CFArray *> _field14;
    struct TCFRef<const __CFCharacterSet *> _field15;
    struct TCFRef<const __CFArray *> _field16;
    struct TCFRef<const __CFCharacterSet *> _field17;
    unsigned int _field18;
    unsigned int _field19;
    unsigned int _field20;
    struct TCFRef<const __CFCharacterSet *> _field21;
    struct TCFRef<const __CFData *> _field22;
    long long _field23;
    struct TBMPDataCache *_field24;
    struct unordered_map<unsigned short, unsigned short, std::__1::hash<unsigned short>, std::__1::equal_to<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, unsigned short>>> *_field25;
    struct TTraitsValues *_field26;
    unsigned short _field27;
    struct UnscaledAdvancesPage *_field28;
    struct StrikeMetrics _field29;
    unsigned int _field30;
    unsigned int _field31;
    unsigned int _field32;
    struct TMutex _field33;
    struct TInlineVector<TCFRef<const __CFData *>, 4> _field34;
    struct array<TCFRef<__CFDictionary *>, 7> _field35;
};

struct TCFRef<__CFDictionary *> {
    struct __CFDictionary *_field1;
};

struct TCFRef<const __CFArray *> {
    struct __CFArray *fRef;
};

struct TCFRef<const __CFCharacterSet *> {
    struct __CFCharacterSet *_field1;
};

struct TCFRef<const __CFData *> {
    struct __CFData *_field1;
};

struct TCFRef<const __CFSet *> {
    struct __CFSet *fRef;
};

struct TCFRef<const __CFURL *> {
    struct __CFURL *_field1;
};

struct TInlineBufferAllocator<TCFRef<const __CFData *>, 4> {
    struct type _field1;
    struct TCFRef<const __CFData *> *_field2;
};

struct TInlineVector<TCFRef<const __CFData *>, 4> {
    struct TCFRef<const __CFData *> *_field1;
    struct TCFRef<const __CFData *> *_field2;
    struct __compressed_pair<TCFRef<const __CFData *>*, TInlineBufferAllocator<TCFRef<const __CFData *>, 4>> {
        struct TCFRef<const __CFData *> *_field1;
        struct TInlineBufferAllocator<TCFRef<const __CFData *>, 4> _field2;
    } _field3;
};

struct TMutex {
    id _field1;
};

struct TTraitsValues;

struct UnscaledAdvancesPage;

struct array<TCFRef<__CFDictionary *>, 7> {
    struct TCFRef<__CFDictionary *> _field1[7];
};

struct type {
    unsigned char _field1[32];
};

struct unordered_map<unsigned short, unsigned short, std::__1::hash<unsigned short>, std::__1::equal_to<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, unsigned short>>>;

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    long long _field1;
    long long _field2;
} CDStruct_912cb5d2;

