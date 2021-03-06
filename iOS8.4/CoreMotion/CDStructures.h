//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct BasicMutex {
    CDUnknownFunctionPointerType *_field1;
    struct MutexInfo *_field2;
};

struct CLCompassDatabaseClient {
    CDUnknownFunctionPointerType *_field1;
    struct BasicMutex _field2;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field3;
    id _field4;
    id _field5;
    struct map<int, CLNotifier<CLCompassDatabase_Type::Notification, CLCompassDatabase_Type::NotificationData, char, char>::Notification, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, CLNotifier<CLCompassDatabase_Type::Notification, CLCompassDatabase_Type::NotificationData, char, char>::Notification>>> _field6;
    struct map<int, CLNotifier<CLCompassDatabase_Type::Notification, CLCompassDatabase_Type::NotificationData, char, char>::ClientNotifications, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, CLNotifier<CLCompassDatabase_Type::Notification, CLCompassDatabase_Type::NotificationData, char, char>::ClientNotifications>>> _field7;
    int _field8;
    _Bool _field9;
    struct BasicMutex _field10;
    int _field11;
};

struct CLConnection;

struct CLConnectionClient {
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field1;
    id _field2;
    id _field3;
    id _field4;
    struct CLConnection *_field5;
    struct CLNameValuePair _field6;
    struct CLNameValuePair _field7;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field8;
    CDUnknownBlockType _field9;
    CDUnknownBlockType _field10;
    id _field11;
    CDUnknownBlockType _field12;
    CDUnknownBlockType _field13;
};

struct CLConnectionMessage {
    id _field1;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field2;
    id _field3;
    id _field4;
};

struct CLGeomagneticModelProviderClient {
    CDUnknownFunctionPointerType *_field1;
    struct BasicMutex _field2;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field3;
    id _field4;
    id _field5;
    struct map<int, CLNotifier<CLGeomagneticModelProvider_Type::Notification, CLGeomagneticModelProvider_Type::NotificationData, char, char>::Notification, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, CLNotifier<CLGeomagneticModelProvider_Type::Notification, CLGeomagneticModelProvider_Type::NotificationData, char, char>::Notification>>> _field6;
    struct map<int, CLNotifier<CLGeomagneticModelProvider_Type::Notification, CLGeomagneticModelProvider_Type::NotificationData, char, char>::ClientNotifications, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, CLNotifier<CLGeomagneticModelProvider_Type::Notification, CLGeomagneticModelProvider_Type::NotificationData, char, char>::ClientNotifications>>> _field7;
    int _field8;
    _Bool _field9;
    struct CLConnectionClient *_field10;
    id _field11;
};

struct CLGestureReport {
    union {
        unsigned char _field1;
        struct Ping _field2;
        struct GestureState _field3;
        struct Simulate _field4;
        struct ControlMode _field5;
    } _field1;
};

struct CLGyroCalibrationDatabaseRemote {
    CDUnknownFunctionPointerType *_field1;
    struct BasicMutex _field2;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field3;
    id _field4;
    id _field5;
    struct map<int, CLNotifier<CLGyroCalibrationDatabase_Type::Notification, CLGyroCalibrationDatabase_Type::NotificationData, char, char>::Notification, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, CLNotifier<CLGyroCalibrationDatabase_Type::Notification, CLGyroCalibrationDatabase_Type::NotificationData, char, char>::Notification>>> _field6;
    struct map<int, CLNotifier<CLGyroCalibrationDatabase_Type::Notification, CLGyroCalibrationDatabase_Type::NotificationData, char, char>::ClientNotifications, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, CLNotifier<CLGyroCalibrationDatabase_Type::Notification, CLGyroCalibrationDatabase_Type::NotificationData, char, char>::ClientNotifications>>> _field7;
    int _field8;
    _Bool _field9;
};

struct CLMotionActivity {
    int type;
    int confidence;
    int mountedState;
    int mountedConfidence;
    _Bool isStanding;
    float tilt;
    double timestamp;
    int exitState;
    double estExitTime;
    double startTime;
};

struct CLNameValuePair {
    CDUnknownFunctionPointerType *_field1;
    struct __CFDictionary *_field2;
};

struct CLNotifierBase {
    CDUnknownFunctionPointerType *_field1;
};

struct CLNotifierClientBase {
    CDUnknownFunctionPointerType *_field1;
};

struct CMWakeGestureVisitor;

struct ControlMode {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3[2];
};

struct Dispatcher {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
};

struct GestureState {
    unsigned char _field1;
    int _field2;
    unsigned char _field3;
    unsigned char _field4;
};

struct MutexInfo;

struct Ping {
    unsigned char _field1;
    unsigned int _field2;
};

struct Simulate {
    unsigned char _field1;
    unsigned long long _field2;
    unsigned long long _field3;
};

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *__left_;
};

struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    unsigned long long _field1;
                    unsigned long long _field2;
                    char *_field3;
                } _field1;
                struct __short {
                    union {
                        unsigned char _field1;
                        char _field2;
                    } _field1;
                    char _field2[23];
                } _field2;
                struct __raw {
                    unsigned long long _field1[3];
                } _field3;
            } _field1;
        } _field1;
    } _field1;
};

struct deque<float, std::__1::allocator<float>> {
    struct __split_buffer<float *, std::__1::allocator<float *>> {
        float **__first_;
        float **__begin_;
        float **__end_;
        struct __compressed_pair<float **, std::__1::allocator<float *>> {
            float **__first_;
        } __end_cap_;
    } __map_;
    unsigned long long __start_;
    struct __compressed_pair<unsigned long, std::__1::allocator<float>> {
        unsigned long long __first_;
    } __size_;
};

struct map<SEL *, CLIntersiloInterfaceSelectorInfo *, std::__1::less<SEL *>, std::__1::allocator<std::__1::pair<SEL *const, CLIntersiloInterfaceSelectorInfo *>>> {
    struct __tree<std::__1::__value_type<SEL *, CLIntersiloInterfaceSelectorInfo *>, std::__1::__map_value_compare<SEL *, std::__1::__value_type<SEL *, CLIntersiloInterfaceSelectorInfo *>, std::__1::less<SEL *>, true>, std::__1::allocator<std::__1::__value_type<SEL *, CLIntersiloInterfaceSelectorInfo *>>> {
        struct __tree_node<std::__1::__value_type<SEL *, CLIntersiloInterfaceSelectorInfo *>, void *> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<SEL *, CLIntersiloInterfaceSelectorInfo *>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __first_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<SEL *, std::__1::__value_type<SEL *, CLIntersiloInterfaceSelectorInfo *>, std::__1::less<SEL *>, true>> {
            unsigned long long __first_;
        } __pair3_;
    } __tree_;
};

struct map<int, CLNotifier<CLCompassDatabase_Type::Notification, CLCompassDatabase_Type::NotificationData, char, char>::ClientNotifications, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, CLNotifier<CLCompassDatabase_Type::Notification, CLCompassDatabase_Type::NotificationData, char, char>::ClientNotifications>>> {
    struct __tree<std::__1::__value_type<int, CLNotifier<CLCompassDatabase_Type::Notification, CLCompassDatabase_Type::NotificationData, char, char>::ClientNotifications>, std::__1::__map_value_compare<int, std::__1::__value_type<int, CLNotifier<CLCompassDatabase_Type::Notification, CLCompassDatabase_Type::NotificationData, char, char>::ClientNotifications>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, CLNotifier<CLCompassDatabase_Type::Notification, CLCompassDatabase_Type::NotificationData, char, char>::ClientNotifications>>> {
        struct __tree_node<std::__1::__value_type<int, CLNotifier<CLCompassDatabase_Type::Notification, CLCompassDatabase_Type::NotificationData, char, char>::ClientNotifications>, void *> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, CLNotifier<CLCompassDatabase_Type::Notification, CLCompassDatabase_Type::NotificationData, char, char>::ClientNotifications>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, CLNotifier<CLCompassDatabase_Type::Notification, CLCompassDatabase_Type::NotificationData, char, char>::ClientNotifications>, std::__1::less<int>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<int, CLNotifier<CLCompassDatabase_Type::Notification, CLCompassDatabase_Type::NotificationData, char, char>::Notification, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, CLNotifier<CLCompassDatabase_Type::Notification, CLCompassDatabase_Type::NotificationData, char, char>::Notification>>> {
    struct __tree<std::__1::__value_type<int, CLNotifier<CLCompassDatabase_Type::Notification, CLCompassDatabase_Type::NotificationData, char, char>::Notification>, std::__1::__map_value_compare<int, std::__1::__value_type<int, CLNotifier<CLCompassDatabase_Type::Notification, CLCompassDatabase_Type::NotificationData, char, char>::Notification>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, CLNotifier<CLCompassDatabase_Type::Notification, CLCompassDatabase_Type::NotificationData, char, char>::Notification>>> {
        struct __tree_node<std::__1::__value_type<int, CLNotifier<CLCompassDatabase_Type::Notification, CLCompassDatabase_Type::NotificationData, char, char>::Notification>, void *> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, CLNotifier<CLCompassDatabase_Type::Notification, CLCompassDatabase_Type::NotificationData, char, char>::Notification>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, CLNotifier<CLCompassDatabase_Type::Notification, CLCompassDatabase_Type::NotificationData, char, char>::Notification>, std::__1::less<int>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<int, CLNotifier<CLGeomagneticModelProvider_Type::Notification, CLGeomagneticModelProvider_Type::NotificationData, char, char>::ClientNotifications, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, CLNotifier<CLGeomagneticModelProvider_Type::Notification, CLGeomagneticModelProvider_Type::NotificationData, char, char>::ClientNotifications>>> {
    struct __tree<std::__1::__value_type<int, CLNotifier<CLGeomagneticModelProvider_Type::Notification, CLGeomagneticModelProvider_Type::NotificationData, char, char>::ClientNotifications>, std::__1::__map_value_compare<int, std::__1::__value_type<int, CLNotifier<CLGeomagneticModelProvider_Type::Notification, CLGeomagneticModelProvider_Type::NotificationData, char, char>::ClientNotifications>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, CLNotifier<CLGeomagneticModelProvider_Type::Notification, CLGeomagneticModelProvider_Type::NotificationData, char, char>::ClientNotifications>>> {
        struct __tree_node<std::__1::__value_type<int, CLNotifier<CLGeomagneticModelProvider_Type::Notification, CLGeomagneticModelProvider_Type::NotificationData, char, char>::ClientNotifications>, void *> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, CLNotifier<CLGeomagneticModelProvider_Type::Notification, CLGeomagneticModelProvider_Type::NotificationData, char, char>::ClientNotifications>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, CLNotifier<CLGeomagneticModelProvider_Type::Notification, CLGeomagneticModelProvider_Type::NotificationData, char, char>::ClientNotifications>, std::__1::less<int>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<int, CLNotifier<CLGeomagneticModelProvider_Type::Notification, CLGeomagneticModelProvider_Type::NotificationData, char, char>::Notification, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, CLNotifier<CLGeomagneticModelProvider_Type::Notification, CLGeomagneticModelProvider_Type::NotificationData, char, char>::Notification>>> {
    struct __tree<std::__1::__value_type<int, CLNotifier<CLGeomagneticModelProvider_Type::Notification, CLGeomagneticModelProvider_Type::NotificationData, char, char>::Notification>, std::__1::__map_value_compare<int, std::__1::__value_type<int, CLNotifier<CLGeomagneticModelProvider_Type::Notification, CLGeomagneticModelProvider_Type::NotificationData, char, char>::Notification>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, CLNotifier<CLGeomagneticModelProvider_Type::Notification, CLGeomagneticModelProvider_Type::NotificationData, char, char>::Notification>>> {
        struct __tree_node<std::__1::__value_type<int, CLNotifier<CLGeomagneticModelProvider_Type::Notification, CLGeomagneticModelProvider_Type::NotificationData, char, char>::Notification>, void *> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, CLNotifier<CLGeomagneticModelProvider_Type::Notification, CLGeomagneticModelProvider_Type::NotificationData, char, char>::Notification>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, CLNotifier<CLGeomagneticModelProvider_Type::Notification, CLGeomagneticModelProvider_Type::NotificationData, char, char>::Notification>, std::__1::less<int>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<int, CLNotifier<CLGyroCalibrationDatabase_Type::Notification, CLGyroCalibrationDatabase_Type::NotificationData, char, char>::ClientNotifications, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, CLNotifier<CLGyroCalibrationDatabase_Type::Notification, CLGyroCalibrationDatabase_Type::NotificationData, char, char>::ClientNotifications>>> {
    struct __tree<std::__1::__value_type<int, CLNotifier<CLGyroCalibrationDatabase_Type::Notification, CLGyroCalibrationDatabase_Type::NotificationData, char, char>::ClientNotifications>, std::__1::__map_value_compare<int, std::__1::__value_type<int, CLNotifier<CLGyroCalibrationDatabase_Type::Notification, CLGyroCalibrationDatabase_Type::NotificationData, char, char>::ClientNotifications>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, CLNotifier<CLGyroCalibrationDatabase_Type::Notification, CLGyroCalibrationDatabase_Type::NotificationData, char, char>::ClientNotifications>>> {
        struct __tree_node<std::__1::__value_type<int, CLNotifier<CLGyroCalibrationDatabase_Type::Notification, CLGyroCalibrationDatabase_Type::NotificationData, char, char>::ClientNotifications>, void *> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, CLNotifier<CLGyroCalibrationDatabase_Type::Notification, CLGyroCalibrationDatabase_Type::NotificationData, char, char>::ClientNotifications>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, CLNotifier<CLGyroCalibrationDatabase_Type::Notification, CLGyroCalibrationDatabase_Type::NotificationData, char, char>::ClientNotifications>, std::__1::less<int>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<int, CLNotifier<CLGyroCalibrationDatabase_Type::Notification, CLGyroCalibrationDatabase_Type::NotificationData, char, char>::Notification, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, CLNotifier<CLGyroCalibrationDatabase_Type::Notification, CLGyroCalibrationDatabase_Type::NotificationData, char, char>::Notification>>> {
    struct __tree<std::__1::__value_type<int, CLNotifier<CLGyroCalibrationDatabase_Type::Notification, CLGyroCalibrationDatabase_Type::NotificationData, char, char>::Notification>, std::__1::__map_value_compare<int, std::__1::__value_type<int, CLNotifier<CLGyroCalibrationDatabase_Type::Notification, CLGyroCalibrationDatabase_Type::NotificationData, char, char>::Notification>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, CLNotifier<CLGyroCalibrationDatabase_Type::Notification, CLGyroCalibrationDatabase_Type::NotificationData, char, char>::Notification>>> {
        struct __tree_node<std::__1::__value_type<int, CLNotifier<CLGyroCalibrationDatabase_Type::Notification, CLGyroCalibrationDatabase_Type::NotificationData, char, char>::Notification>, void *> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, CLNotifier<CLGyroCalibrationDatabase_Type::Notification, CLGyroCalibrationDatabase_Type::NotificationData, char, char>::Notification>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, CLNotifier<CLGyroCalibrationDatabase_Type::Notification, CLGyroCalibrationDatabase_Type::NotificationData, char, char>::Notification>, std::__1::less<int>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<unsigned long, int, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, int>>> {
    struct __tree<std::__1::__value_type<unsigned long, int>, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, int>, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, int>>> {
        struct __tree_node<std::__1::__value_type<unsigned long, int>, void *> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long, int>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __first_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, int>, std::__1::less<unsigned long>, true>> {
            unsigned long long __first_;
        } __pair3_;
    } __tree_;
};

struct unique_ptr<CMWakeGestureVisitor, std::__1::default_delete<CMWakeGestureVisitor>> {
    struct __compressed_pair<CMWakeGestureVisitor *, std::__1::default_delete<CMWakeGestureVisitor>> {
        struct CMWakeGestureVisitor *__first_;
    } __ptr_;
};

#if 0
// Names with conflicting types:
typedef struct {
    double timestamp;
    int orientation;
} Sample_edc72402;

#endif

#pragma mark Typedef'd Structures

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
} CDStruct_afa449f9;

typedef struct {
    double w;
    double x;
    double y;
    double z;
} CDStruct_bf7dff04;

typedef struct {
    double x;
    double y;
    double z;
} CDStruct_31142d93;

typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

typedef struct {
    float x;
    float y;
    float z;
} CDStruct_03942939;

typedef struct {
    float pressure;
    float temperature;
} CDStruct_ebf20f05;

typedef struct {
    CDStruct_bf7dff04 _field1;
    CDStruct_03942939 _field2;
    CDStruct_03942939 _field3;
    CDStruct_03942939 _field4;
    int _field5;
    _Bool _field6;
    _Bool _field7;
    _Bool _field8;
} CDStruct_7fb6ae47;

typedef struct {
    CDStruct_31142d93 _field1;
    int _field2;
} CDStruct_27fd20ed;

