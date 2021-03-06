//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

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

struct Cache;

struct CleanupNode {
    CDUnknownFunctionPointerType _field1;
    void *_field2;
    void *_field3;
    struct CleanupNode *_field4;
};

struct Comparator;

struct DB {
    CDUnknownFunctionPointerType *_field1;
};

struct Env;

struct FilterPolicy;

struct Iterator {
    CDUnknownFunctionPointerType *_field1;
    struct CleanupNode _field2;
};

struct Logger;

struct NSArray {
    Class _field1;
};

struct NSDictionary {
    Class _field1;
};

struct NSMutableDictionary {
    Class _field1;
};

struct NSNumber {
    Class _field1;
};

struct Options {
    struct Comparator *_field1;
    _Bool _field2;
    _Bool _field3;
    _Bool _field4;
    struct Env *_field5;
    struct Logger *_field6;
    unsigned long long _field7;
    int _field8;
    struct Cache *_field9;
    unsigned long long _field10;
    int _field11;
    unsigned long long _field12;
    int _field13;
    _Bool _field14;
    struct FilterPolicy *_field15;
};

struct PLCrashHostInfoVersion {
    unsigned long long major;
    unsigned long long minor;
    unsigned long long revision;
};

struct PLCrashReporterCallbacks {
    unsigned short _field1;
    void *_field2;
    CDUnknownFunctionPointerType _field3;
};

struct ReadOptions {
    _Bool verify_checksums;
    _Bool fill_cache;
    struct Snapshot *snapshot;
};

struct Snapshot;

struct WriteBatch {
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> rep_;
};

struct WriteOptions {
    _Bool sync;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct _PLCrashReportDecoder {
    struct _Plcrash__CrashReport *_field1;
};

struct _Plcrash__CrashReport {
    struct _ProtobufCMessage _field1;
    struct _Plcrash__CrashReport__SystemInfo *_field2;
    struct _Plcrash__CrashReport__ApplicationInfo *_field3;
    unsigned long long _field4;
    struct _Plcrash__CrashReport__Thread **_field5;
    unsigned long long _field6;
    struct _Plcrash__CrashReport__BinaryImage **_field7;
    struct _Plcrash__CrashReport__Exception *_field8;
    struct _Plcrash__CrashReport__Signal *_field9;
    struct _Plcrash__CrashReport__ProcessInfo *_field10;
    struct _Plcrash__CrashReport__MachineInfo *_field11;
    struct _Plcrash__CrashReport__ReportInfo *_field12;
};

struct _Plcrash__CrashReport__ApplicationInfo {
    struct _ProtobufCMessage _field1;
    char *_field2;
    char *_field3;
    char *_field4;
};

struct _Plcrash__CrashReport__BinaryImage;

struct _Plcrash__CrashReport__Exception {
    struct _ProtobufCMessage _field1;
    char *_field2;
    char *_field3;
    unsigned long long _field4;
    struct _Plcrash__CrashReport__Thread__StackFrame **_field5;
};

struct _Plcrash__CrashReport__MachineInfo {
    struct _ProtobufCMessage _field1;
    char *_field2;
    struct _Plcrash__CrashReport__Processor *_field3;
    unsigned int _field4;
    unsigned int _field5;
};

struct _Plcrash__CrashReport__ProcessInfo {
    struct _ProtobufCMessage _field1;
    char *_field2;
    unsigned int _field3;
    char *_field4;
    char *_field5;
    unsigned int _field6;
    int _field7;
    int _field8;
    unsigned long long _field9;
};

struct _Plcrash__CrashReport__Processor {
    struct _ProtobufCMessage _field1;
    int _field2;
    int _field3;
    unsigned long long _field4;
    unsigned long long _field5;
};

struct _Plcrash__CrashReport__ReportInfo;

struct _Plcrash__CrashReport__Signal {
    struct _ProtobufCMessage _field1;
    char *_field2;
    char *_field3;
    unsigned long long _field4;
    struct _Plcrash__CrashReport__Signal__MachException *_field5;
};

struct _Plcrash__CrashReport__Signal__MachException {
    struct _ProtobufCMessage _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long *_field4;
};

struct _Plcrash__CrashReport__Symbol {
    struct _ProtobufCMessage _field1;
    char *_field2;
    unsigned long long _field3;
    int _field4;
    unsigned long long _field5;
};

struct _Plcrash__CrashReport__SystemInfo {
    struct _ProtobufCMessage _field1;
    int _field2;
    int _field3;
    char *_field4;
    int _field5;
    long long _field6;
    char *_field7;
};

struct _Plcrash__CrashReport__Thread;

struct _Plcrash__CrashReport__Thread__StackFrame {
    struct _ProtobufCMessage _field1;
    unsigned long long _field2;
    struct _Plcrash__CrashReport__Symbol *_field3;
};

struct _ProtobufCMessage {
    struct _ProtobufCMessageDescriptor *_field1;
    unsigned int _field2;
    struct _ProtobufCMessageUnknownField *_field3;
};

struct _ProtobufCMessageDescriptor;

struct _ProtobufCMessageUnknownField;

struct __va_list_tag {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
    void *_field4;
};

struct _base1_2list {
    unsigned int _field1;
    unsigned short _field2;
    unsigned short _field3;
};

struct _logs_proto_mobilesdk_ios_ICoreConfiguration {
    _Bool has_configuration_type;
    int configuration_type;
    unsigned int sdk_service_installed_count;
    int *sdk_service_installed;
    struct pb_bytes_array_s *device_model;
    struct pb_bytes_array_s *app_id;
    struct pb_bytes_array_s *bundle_id;
    _Bool has_pod_name;
    int pod_name;
    struct pb_bytes_array_s *icore_version;
    struct pb_bytes_array_s *sdk_version;
    _Bool has_sdk_name;
    int sdk_name;
    _Bool has_app_count;
    int app_count;
    struct pb_bytes_array_s *os_version;
    struct pb_bytes_array_s *min_supported_ios_version;
    _Bool has_use_default_app;
    _Bool use_default_app;
    _Bool has_deployed_in_app_store;
    _Bool deployed_in_app_store;
    _Bool has_dynamic_framework_count;
    int dynamic_framework_count;
    struct pb_bytes_array_s *apple_framework_version;
    _Bool has_using_zip_file;
    _Bool using_zip_file;
    _Bool has_deployment_type;
    int deployment_type;
    struct pb_bytes_array_s *platform_info;
    _Bool has_swizzling_enabled;
    _Bool swizzling_enabled;
    _Bool has_using_gdt;
    _Bool using_gdt;
};

struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    unsigned long long __cap_;
                    unsigned long long __size_;
                    char *__data_;
                } __l;
                struct __short {
                    union {
                        unsigned char __size_;
                        char __lx;
                    } ;
                    char __data_[23];
                } __s;
                struct __raw {
                    unsigned long long __words[3];
                } __r;
            } ;
        } __value_;
    } __r_;
};

struct pb_bytes_array_s;

struct plcrash_exception_server_context {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    CDUnknownFunctionPointerType _field5;
    void *_field6;
    struct _opaque_pthread_mutex_t {
        long long _field1;
        char _field2[56];
    } _field7;
    struct _opaque_pthread_cond_t {
        long long _field1;
        char _field2[40];
    } _field8;
    unsigned int _field9;
    _Bool _field10;
};

struct plcrash_mach_exception_port_set {
    unsigned int count;
    unsigned int masks[14];
    unsigned int ports[14];
    int behaviors[14];
    int flavors[14];
};

struct sockaddr {
    unsigned char _field1;
    unsigned char _field2;
    char _field3[14];
};

struct timeval {
    long long tv_sec;
    int tv_usec;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    void *_field1;
    char *_field2;
    char *_field3;
    unsigned int _field4;
    unsigned long long *_field5;
} CDStruct_3098c0ae;

typedef struct {
    char _field1;
    unsigned char _field2;
    char _field3;
    unsigned long long _field4;
} CDStruct_c6e275e6;

