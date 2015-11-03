//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct Atomic {
    struct {
        int _field1;
    } _field1;
};

struct CGAffineTransform {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
};

struct CGColorSpace;

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct CIBurstSupportVector {
    double _field1;
    double _field2[7];
};

struct CIContextInternal {
    struct Context *_field1;
    struct _opaque_pthread_mutex_t {
        long long _field1;
        char _field2[56];
    } _field2;
    _Bool _field3;
    id _field4;
};

struct Context {
    CDUnknownFunctionPointerType *_field1;
    struct Atomic _field2;
    struct CGColorSpace *_field3;
    struct CGColorSpace *_field4;
    _Bool _field5;
};

struct FastRegistration_Signatures {
    float *piRow;
    unsigned long long nPiRow;
    struct Projections_meanStdTable piRowTable;
    float *piCol;
    unsigned long long nPiCol;
    struct Projections_meanStdTable piColTable;
};

struct GridROI_t {
    int startX;
    int startY;
    int endX;
    int endY;
};

struct Projections_meanStdTable {
    float *sumTable;
    float *sumSqTable;
};

struct Rectangle {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct SharpnessGridElement_t {
    unsigned char _field1;
    unsigned char _field2;
    float _field3;
};

struct __sbuf {
    char *_field1;
    int _field2;
};

struct vec2 {
    float _field1;
    float _field2;
};

struct vec3 {
    float _field1;
    float _field2;
    float _field3;
};

struct vec4 {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
};

#pragma mark Typedef'd Structures

typedef struct {
    _Bool _field1;
    int _field2;
    int _field3;
    float _field4;
    float _field5;
    int _field6;
    int _field7;
    int _field8;
    int _field9;
    float _field10;
    float _field11;
    int _field12;
    int _field13;
    float _field14;
    int _field15;
    int _field16;
    int _field17;
    int _field18;
    int _field19;
    int _field20;
    float _field21;
    int _field22;
    int _field23;
    int _field24;
    int _field25;
} CDStruct_e0ece3c1;

typedef struct {
    char *baseAddress;
    int width;
    int height;
    int rowSamples;
    int rowBytes;
    int size;
    int samplesPerPixel;
    int bytesPerSample;
    float resolution;
} CDStruct_c3faddef;

typedef struct {
    int *_field1;
    int _field2;
} CDStruct_84b23d7a;

typedef struct {
    double i;
    double q;
} CDStruct_bfe67ca5;

typedef struct {
    char _field1[256];
    char _field2[32];
    CDStruct_c3faddef _field3;
    int _field4;
    int _field5;
    struct {
        int _field1;
        int _field2;
        int _field3;
        int _field4;
    } _field6;
    struct CGColorSpace *_field7;
    unsigned int _field8;
    int _field9;
    int _field10;
    _Bool _field11;
    float _field12;
} CDStruct_79f2618e;

typedef struct {
    int _field1;
    struct {
        float _field1;
        int _field2;
        int _field3;
        float _field4;
        float _field5;
        float _field6;
        int _field7;
        int _field8;
        float _field9;
    } _field2[4];
} CDStruct_08ff8b76;

typedef struct {
    int origHitX;
    int origHitY;
    int snapHitX;
    int snapHitY;
    int bitmaskSeedX;
    int bitmaskSeedY;
    int bitmaskThreshold;
    int cornealReflectionSeedX;
    int cornealReflectionSeedY;
    int cornealReflectionThreshold;
    _Bool align;
    CDStruct_6ca1d5c6 mTemplate;
    CDStruct_6ca1d5c6 existingTemplate;
    int averageSkinMapY;
    int characterizeCase;
    int finalEyeCase;
    float IOD;
    struct {
        int orientation;
        float SNR;
        _Bool N90;
        int redBitmaskArea;
        float imageCenterX;
        float imageCenterY;
        float halfDiagonalSize;
    } O;
    CDStruct_5973fb4f CR;
} CDStruct_8b259ba7;

typedef struct {
    int tag;
    struct CGPoint pt2;
    int eyeCase;
    int forceCase;
    int npixels;
    int bignpixels;
    CDStruct_c3faddef fullNew;
    CDStruct_5973fb4f YR;
    CDStruct_6ca1d5c6 psTemplate;
    _Bool pupilShadeAlignment;
    CDStruct_6ca1d5c6 matchingTemplate;
    int faceIndex;
    _Bool left;
    float IOD;
    CDStruct_8b259ba7 data;
    struct {
        struct CGPoint centroid;
        int area;
        float ovalness;
        float contrast;
        float mincontrast;
        int nborder;
        CDStruct_5973fb4f IR;
        float aspectRatio;
        _Bool touchingEdge;
        int localmax;
        int localmaxrow;
        int localmaxcol;
        int localfloor;
        float rgmean;
        float rgstd;
        float ymean;
        float ystd;
    } BI;
} CDStruct_907e448c;

// Ambiguous groups
typedef struct {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
} CDStruct_a734b2e2;

typedef struct {
    int lo;
    int med;
    int hi;
    int average;
} CDStruct_6ca1d5c6;

typedef struct {
    int minrow;
    int maxrow;
    int mincol;
    int maxcol;
} CDStruct_5973fb4f;

