//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableArray, NSMutableData, NSMutableIndexSet, NSString;

@interface SGHtmlParserDissectorTask : NSObject
{
    const char *_chunkStart;
    unsigned long long _chunkLength;
    NSMutableArray *_plainTextLines;
    unsigned long long _plainTextLinesTotalLength;
    NSMutableArray *_plainTextLineToHTMLOffset;
    BOOL _currentLineIsCollapsed;
    NSMutableData *_currentLineData;
    NSString *_currentLineString;
    struct _xmlParserCtxt {
        struct _xmlSAXHandler *_field1;
        void *_field2;
        struct _xmlDoc *_field3;
        int _field4;
        int _field5;
        char *_field6;
        char *_field7;
        int _field8;
        int _field9;
        struct _xmlParserInput *_field10;
        int _field11;
        int _field12;
        struct _xmlParserInput **_field13;
        struct _xmlNode *_field14;
        int _field15;
        int _field16;
        struct _xmlNode **_field17;
        int _field18;
        struct _xmlParserNodeInfoSeq {
            unsigned long long _field1;
            unsigned long long _field2;
            struct _xmlParserNodeInfo *_field3;
        } _field19;
        int _field20;
        int _field21;
        int _field22;
        int _field23;
        int _field24;
        int _field25;
        struct _xmlValidCtxt {
            void *_field1;
            CDUnknownFunctionPointerType _field2;
            CDUnknownFunctionPointerType _field3;
            struct _xmlNode *_field4;
            int _field5;
            int _field6;
            struct _xmlNode **_field7;
            unsigned int _field8;
            struct _xmlDoc *_field9;
            int _field10;
            struct _xmlValidState *_field11;
            int _field12;
            int _field13;
            struct _xmlValidState *_field14;
            struct _xmlAutomata *_field15;
            struct _xmlAutomataState *_field16;
        } _field26;
        int _field27;
        int _field28;
        char *_field29;
        char *_field30;
        int _field31;
        int _field32;
        char **_field33;
        long long _field34;
        long long _field35;
        int _field36;
        int _field37;
        int _field38;
        char *_field39;
        char *_field40;
        char *_field41;
        int *_field42;
        int _field43;
        int _field44;
        int *_field45;
        int _field46;
        struct _xmlParserInput *_field47;
        int _field48;
        int _field49;
        int _field50;
        int _field51;
        void *_field52;
        int _field53;
        int _field54;
        void *_field55;
        int _field56;
        int _field57;
        struct _xmlDict *_field58;
        char **_field59;
        int _field60;
        int _field61;
        char *_field62;
        char *_field63;
        char *_field64;
        int _field65;
        int _field66;
        int _field67;
        char **_field68;
        int *_field69;
        void **_field70;
        struct _xmlHashTable *_field71;
        struct _xmlHashTable *_field72;
        int _field73;
        int _field74;
        int _field75;
        int _field76;
        struct _xmlNode *_field77;
        int _field78;
        struct _xmlAttr *_field79;
        struct _xmlError {
            int _field1;
            int _field2;
            char *_field3;
            int _field4;
            char *_field5;
            int _field6;
            char *_field7;
            char *_field8;
            char *_field9;
            int _field10;
            int _field11;
            void *_field12;
            void *_field13;
        } _field80;
        int _field81;
        unsigned long long _field82;
        unsigned long long _field83;
        struct _xmlParserNodeInfo *_field84;
        int _field85;
        int _field86;
        struct _xmlParserNodeInfo *_field87;
        int _field88;
        unsigned long long _field89;
    } *_parserContext;
    BOOL _renderingSuspended;
    BOOL _preBlockDepth;
    NSMutableIndexSet *_quotedRegions;
    NSMutableIndexSet *_tabularRegions;
    NSMutableIndexSet *_sigHtmlBlockRegions;
    unsigned long long _bytesConsumedInPreviousPasses;
    unsigned long long _depth;
    NSMutableIndexSet *_depthsWithActiveRegions;
    NSHashTable *_activeRegions;
    NSMutableArray *_activeRegionStartPositionStack;
    NSMutableArray *_activeRegionIndexSetStack;
    unsigned long long _quoteToEndFromPosition;
}

- (void).cxx_destruct;
- (void)enterRegion:(id)arg1;
- (void)tagEnd;
- (void)tagStart;
- (void)startTable;
- (void)startSigHtmlBlock;
- (void)startQuotedRegion;
- (void)textContent:(const char *)arg1 len:(int)arg2;
- (void)endPreBlock;
- (void)startPreBlock;
- (void)resumeRendering;
- (void)suspendRendering;
- (void)uncollapseCurrentLine;
- (void)newBlock;
- (void)quoteToEnd;
- (void)processCurrentLineOfText;
- (void)process:(id)arg1;

@end

