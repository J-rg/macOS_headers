//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TSKCOOperationTransformer, TSKLobbySession, TSKSelectionPath, TSKTransformationController, TSPDocumentRevision;
@protocol TSKCollaboratorCursorConverter;

@protocol TSKCollaboratorCursorControllerDelegate <NSObject>
@property(readonly, nonatomic) TSKSelectionPath *currentCollaboratorCursorSelectionPathToSend;
@property(readonly, nonatomic) id <TSKCollaboratorCursorConverter> collaboratorCursorConverter;
- (void)transformCollaboratorSelectionPathsWithLocalOperationTransformer:(TSKCOOperationTransformer *)arg1;
- (void)transformCollaboratorSelectionPathsWithTransformationController:(TSKTransformationController *)arg1 localOperationTransformer:(TSKCOOperationTransformer *)arg2 documentRevision:(TSPDocumentRevision *)arg3;
- (void)receiveCollaboratorCursorSelectionPath:(TSKSelectionPath *)arg1 forSession:(TSKLobbySession *)arg2 documentRevision:(TSPDocumentRevision *)arg3;
@end

