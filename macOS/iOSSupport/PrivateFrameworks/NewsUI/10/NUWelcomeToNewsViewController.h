//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <NewsUI/NUPageable-Protocol.h>

@class NSString, NUCanvas, NUViewNode;
@protocol NULoadingDelegate, NURouter;

@interface NUWelcomeToNewsViewController : UIViewController <NUPageable>
{
    id <NULoadingDelegate> _loadingDelegate;
    NUCanvas *_canvas;
    NUViewNode *_appIconImageViewNode;
    NUViewNode *_titleLabelNode;
    NUViewNode *_descriptionLabelNode;
    NUViewNode *_readMoreButtonNode;
    id <NURouter> _router;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <NURouter> router; // @synthesize router=_router;
@property(readonly, nonatomic) NUViewNode *readMoreButtonNode; // @synthesize readMoreButtonNode=_readMoreButtonNode;
@property(readonly, nonatomic) NUViewNode *descriptionLabelNode; // @synthesize descriptionLabelNode=_descriptionLabelNode;
@property(readonly, nonatomic) NUViewNode *titleLabelNode; // @synthesize titleLabelNode=_titleLabelNode;
@property(readonly, nonatomic) NUViewNode *appIconImageViewNode; // @synthesize appIconImageViewNode=_appIconImageViewNode;
@property(retain, nonatomic) NUCanvas *canvas; // @synthesize canvas=_canvas;
@property(nonatomic) __weak id <NULoadingDelegate> loadingDelegate; // @synthesize loadingDelegate=_loadingDelegate;
- (id)buildCanvas;
- (void)doReadMoreNews:(id)arg1;
@property(readonly, copy, nonatomic) NSString *pageIdentifier;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithRouter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

