//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class EnvironmentInfo, NSButton, NSImageView, NSProgressIndicator, NSTextField;

__attribute__((visibility("hidden")))
@interface EnvironmentsTableCellView : NSTableCellView
{
    NSButton *_radioButton;
    NSTextField *_releaseTextField;
    NSProgressIndicator *_progressIndicator;
    NSImageView *_errorImageView;
    EnvironmentInfo *_environment;
}

@property(retain, nonatomic) EnvironmentInfo *environment; // @synthesize environment=_environment;
@property(retain) NSImageView *errorImageView; // @synthesize errorImageView=_errorImageView;
@property(retain) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain) NSTextField *releaseTextField; // @synthesize releaseTextField=_releaseTextField;
@property(retain) NSButton *radioButton; // @synthesize radioButton=_radioButton;
- (void).cxx_destruct;
- (void)makeActive:(id)arg1;

@end

