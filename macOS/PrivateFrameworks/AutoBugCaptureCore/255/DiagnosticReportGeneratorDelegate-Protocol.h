//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DiagnosticReportGenerator, NSDictionary, NSError;

@protocol DiagnosticReportGeneratorDelegate <NSObject>

@optional
- (void)reportGeneratorEnded:(DiagnosticReportGenerator *)arg1 reportInfo:(NSDictionary *)arg2 error:(NSError *)arg3;
@end

