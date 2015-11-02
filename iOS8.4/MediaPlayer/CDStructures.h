//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

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

struct ITColor {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct map<long long, MPMediaEntity<MPCacheableConcreteMediaEntity>*__weak, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, MPMediaEntity<MPCacheableConcreteMediaEntity>*__weak>>> {
    struct __tree<std::__1::__value_type<long long, MPMediaEntity<MPCacheableConcreteMediaEntity>*__weak>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, MPMediaEntity<MPCacheableConcreteMediaEntity>*__weak>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, MPMediaEntity<MPCacheableConcreteMediaEntity>*__weak>>> {
        struct __tree_node<std::__1::__value_type<long long, MPMediaEntity<MPCacheableConcreteMediaEntity>*__weak>, void *> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, MPMediaEntity<MPCacheableConcreteMediaEntity>*__weak>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
                struct __tree_node_base<void *> *_field1;
            } _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, MPMediaEntity<MPCacheableConcreteMediaEntity>*__weak>, std::__1::less<long long>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct vector<long long, std::__1::allocator<long long>> {
    long long *__begin_;
    long long *__end_;
    struct __compressed_pair<long long *, std::__1::allocator<long long>> {
        long long *__first_;
    } __end_cap_;
};

struct vector<unsigned long long, std::__1::allocator<unsigned long long>> {
    unsigned long long *__begin_;
    unsigned long long *__end_;
    struct __compressed_pair<unsigned long long *, std::__1::allocator<unsigned long long>> {
        unsigned long long *__first_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int _field1[8];
} CDStruct_6ad76789;

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

typedef struct {
    long long numberOfAvailableSkips;
    long long skipFrequency;
    double skipInterval;
} CDStruct_dcf4dde6;

// Template types
typedef struct map<long long, MPMediaEntity<MPCacheableConcreteMediaEntity>*__weak, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, MPMediaEntity<MPCacheableConcreteMediaEntity>*__weak>>> {
    struct __tree<std::__1::__value_type<long long, MPMediaEntity<MPCacheableConcreteMediaEntity>*__weak>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, MPMediaEntity<MPCacheableConcreteMediaEntity>*__weak>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, MPMediaEntity<MPCacheableConcreteMediaEntity>*__weak>>> {
        struct __tree_node<std::__1::__value_type<long long, MPMediaEntity<MPCacheableConcreteMediaEntity>*__weak>, void *> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, MPMediaEntity<MPCacheableConcreteMediaEntity>*__weak>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
                struct __tree_node_base<void *> *_field1;
            } _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, MPMediaEntity<MPCacheableConcreteMediaEntity>*__weak>, std::__1::less<long long>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
} map_8037feab;

