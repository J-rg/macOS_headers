//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class VKMapView;

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct ArtworkWidthCalculatorSizeParameter {
    double defaultArtworkViewWidth;
    double maxArtworkViewWidth;
    struct NSEdgeInsets artworkInsets;
};

struct CGAffineTransform {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
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

struct CLLocationCoordinate2D {
    double latitude;
    double longitude;
};

struct DebugTree {
    VKMapView *_mapView;
    struct vector<std::__1::shared_ptr<md::DebugTreeNode>, std::__1::allocator<std::__1::shared_ptr<md::DebugTreeNode>>> _nodes;
    _Bool _options[4];
};

struct DebugTreeNode;

struct DebugTreeProperty;

struct DebugTreeValue {
    struct ValueStruct _field1;
    int _field2;
};

struct GEOTimepoint {
    double _field1;
    int _field2;
    struct {
        unsigned int :1;
        unsigned int :1;
    } _field3;
};

struct NSArray {
    Class _field1;
};

struct NSEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct NVInlineButton {
    Class _field1;
    id _field2;
    struct CGRect _field3;
    struct CGRect _field4;
    id _field5;
    id _field6;
    id _field7;
    id _field8;
    id _field9;
    id _field10;
    id _field11;
    id _field12;
    struct __VFlags {
        unsigned int :1;
        unsigned int :1;
        unsigned int :5;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :2;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :6;
        unsigned int :1;
        unsigned int :1;
    } _field13;
    struct __VFlags2 {
        unsigned int :14;
        unsigned int :14;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
    } _field14;
    id _field15;
    id _field16;
    struct __conFlags {
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :22;
    } _field17;
};

struct NVRoute {
    Class _field1;
};

struct ValueStruct {
    long long _field1;
    unsigned long long _field2;
    double _field3;
    _Bool _field4;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field5;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct __shared_weak_count;

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

struct os_state_data_decoder_s {
    char _field1[64];
    char _field2[64];
};

struct os_state_data_s {
    unsigned int _field1;
    union {
        unsigned int :32;
        unsigned int _field1;
    } _field2;
    struct os_state_data_decoder_s _field3;
    char _field4[64];
    unsigned char _field5[0];
};

struct shared_ptr<md::DebugTreeNode> {
    struct DebugTreeNode *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<md::DebugTreeProperty> {
    struct DebugTreeProperty *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct vector<std::__1::shared_ptr<md::DebugTreeNode>, std::__1::allocator<std::__1::shared_ptr<md::DebugTreeNode>>> {
    shared_ptr_62bc874f *__begin_;
    shared_ptr_62bc874f *__end_;
    struct __compressed_pair<std::__1::shared_ptr<md::DebugTreeNode>*, std::__1::allocator<std::__1::shared_ptr<md::DebugTreeNode>>> {
        shared_ptr_62bc874f *__first_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned char _field4;
    char _field5;
} CDStruct_d1e1ee69;

typedef struct {
    double latitude;
    double longitude;
    double altitude;
} CDStruct_071ac149;

typedef struct {
    CDStruct_34734122 origin;
    struct {
        double width;
        double height;
    } size;
} CDStruct_02837cd9;

typedef struct {
    struct CGSize referenceSize;
    double arrowStemWidth;
    double intersectionStemWidth;
    double intersectionStrokeWidth;
    struct CGSize arrowHeadSize;
    double arrowStemCornerRadius;
    double arbitraryCurveRadius;
    double uTurnRadius;
    long long arrowStyle;
    double rightTurnCurveRadius;
    double rightTurnInnerCurveRadius;
    double rightTurnStemLengthBeforeTurn;
    double rightTurnStemLengthAfterTurn;
    double fortyFiveDegreeSouthAngleStemLengthBeforeTurn;
    double fortyFiveDegreeSouthAngleStemLengthAfterTurn;
    double fortyFiveDegreeSouthAngleCornerRadius;
    double fortyFiveDegreeNorthAngleStemLengthBeforeTurn;
    double fortyFiveDegreeNorthAngleStemLengthAfterTurn;
    double fortyFiveDegreeNorthAngleCornerRadius;
    double exitStemLengthBeforeTurn;
    double exitStemLengthAfterTurn;
    double exitRoadNotTakenStemLength;
    double arrivalOuterCircleWidth;
    double arrivalGapBetweenCircles;
    double arrivalGapBetweenArrowAndCircles;
    char arrivalCutOutArrowInInnerCircle;
    double mergeRightStemLengthBeforeTurn;
    double mergeRightStemLengthAfterTurn;
    double mergeRightCornerRadius;
    char junctionsDrawEntryExitRightAngles;
    char junctionsDrawEntryExitFortyFiveDegreeAngles;
} CDStruct_0b3dd7f4;

typedef struct {
    struct CLLocationCoordinate2D center;
    struct {
        double latitudeDelta;
        double longitudeDelta;
    } span;
} CDStruct_b7cb895d;

// Ambiguous groups
typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

typedef struct {
    double x;
    double y;
} CDStruct_34734122;

typedef struct shared_ptr<md::DebugTreeNode> {
    struct DebugTreeNode *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_62bc874f;

typedef struct shared_ptr<md::DebugTreeProperty> {
    struct DebugTreeProperty *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_5dffbf50;

