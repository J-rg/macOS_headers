//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PDFDocument.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface MUPDFDocument : PDFDocument
{
    NSString *_unlockedWithPassword;
}

- (void).cxx_destruct;
@property(copy) NSString *unlockedWithPassword; // @synthesize unlockedWithPassword=_unlockedWithPassword;
- (BOOL)unlockWithPassword:(id)arg1;

@end

