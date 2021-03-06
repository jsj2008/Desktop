//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString;

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct APTaskInfoData {
    unsigned char _field1[30];
};

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

struct FaceTracker {
    struct TrackerConf _field1;
    struct time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000>>> _field2;
    struct time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000>>> _field3;
    struct vector<TrackedFaceInfo, std::__1::allocator<TrackedFaceInfo>> _field4;
    void *_field5;
};

struct FrameworkConfig {
    NSString *buglyAppId;
    unsigned int xgPushAppId;
    NSString *xgPushAppKey;
    NSString *ssdkQQAppId;
    NSString *ssdkQQAppKey;
    NSString *wechatAppKey;
    NSString *growingIOKey;
    NSString *tongdunCode;
    NSString *tongdunKey;
    NSString *jvAuthKey;
};

struct Licenser {
    struct map<std::__1::basic_string<char>, std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::basic_string<char>>>> _field1;
    struct map<std::__1::basic_string<char>, std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::basic_string<char>>>> _field2;
    struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char>>> _field3;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field4;
    struct cJSON *_field5;
};

struct PICMPPacket_Tracert {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    unsigned short _field4;
    unsigned short _field5;
};

struct Range {
    double max;
    double min;
};

struct TrackedFaceInfo;

struct TrackerConf {
    float _field1;
    struct vector<float, std::__1::allocator<float>> _field2;
    float _field3;
    float _field4;
    float _field5;
    int _field6;
    int _field7;
    int _field8;
    int _field9;
    int _field10;
    int _field11;
    _Bool _field12;
    _Bool _field13;
    _Bool _field14;
    _Bool _field15[3];
    int _field16;
    int _field17;
    float _field18;
    int _field19;
    int _field20;
};

struct UICMPPacket {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    unsigned short _field4;
    unsigned short _field5;
    char _field6[56];
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct _GrowingDDRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *_field1;
};

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct _utils {
    CDUnknownFunctionPointerType _field1;
};

struct _void {
    CDUnknownFunctionPointerType _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
};

struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    char *_field1;
                    unsigned long long _field2;
                    unsigned long long _field3;
                } _field1;
                struct __short {
                    char _field1[23];
                    struct {
                        unsigned char _field1;
                    } _field2;
                } _field2;
                struct __raw {
                    unsigned long long _field1[3];
                } _field3;
            } _field1;
        } _field1;
    } _field1;
};

struct cJSON;

struct duration<long long, std::__1::ratio<1, 1000000000>> {
    long long _field1;
};

struct in6_addr {
    union {
        unsigned char _field1[16];
        unsigned short _field2[8];
        unsigned int _field3[4];
    } _field1;
};

struct in_addr {
    unsigned int s_addr;
};

struct map<std::__1::basic_string<char>, std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::basic_string<char>>>> {
    struct __tree<std::__1::__value_type<std::__1::basic_string<char>, std::__1::basic_string<char>>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::basic_string<char>>, std::__1::less<std::__1::basic_string<char>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, std::__1::basic_string<char>>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, std::__1::basic_string<char>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::basic_string<char>>, std::__1::less<std::__1::basic_string<char>>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct sockaddr {
    unsigned char _field1;
    unsigned char _field2;
    char _field3[14];
};

struct sockaddr_in {
    unsigned char sin_len;
    unsigned char sin_family;
    unsigned short sin_port;
    struct in_addr sin_addr;
    char sin_zero[8];
};

struct sockaddr_in6 {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    unsigned int _field4;
    struct in6_addr _field5;
    unsigned int _field6;
};

struct sockaddr_un {
    unsigned char _field1;
    unsigned char _field2;
    char _field3[104];
};

struct time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000>>> {
    struct duration<long long, std::__1::ratio<1, 1000000000>> _field1;
};

struct tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
    long long tm_gmtoff;
    char *tm_zone;
};

struct vector<TrackedFaceInfo, std::__1::allocator<TrackedFaceInfo>> {
    struct TrackedFaceInfo *_field1;
    struct TrackedFaceInfo *_field2;
    struct __compressed_pair<TrackedFaceInfo *, std::__1::allocator<TrackedFaceInfo>> {
        struct TrackedFaceInfo *_field1;
    } _field3;
};

struct vector<float, std::__1::allocator<float>> {
    float *_field1;
    float *_field2;
    struct __compressed_pair<float *, std::__1::allocator<float>> {
        float *_field1;
    } _field3;
};

struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char>>> {
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field1;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field2;
    struct __compressed_pair<std::__1::basic_string<char>*, std::__1::allocator<std::__1::basic_string<char>>> {
        struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field1;
    } _field3;
};

#pragma mark Typedef'd Structures

typedef struct {
    _Bool _field1;
    unsigned char _field2;
    _Bool _field3;
    unsigned long long _field4;
} CDStruct_6a6a01a4;

typedef struct {
    int used;
    int alloc;
    int sign;
    unsigned long long *dp;
} CDStruct_c40cccb6;

typedef struct {
    long long version;
    void *info;
    CDUnknownFunctionPointerType retain;
    CDUnknownFunctionPointerType release;
    CDUnknownFunctionPointerType copyDescription;
} CDStruct_4210025a;

