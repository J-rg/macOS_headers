//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mondrian/MOMediaViewLayout.h>

@class NSMutableArray;

@interface MOMediaViewCondensedLayout : MOMediaViewLayout
{
    double _spacingRatio;
    double _spacing;
    unsigned long long _numberOfRows;
    NSMutableArray *_attributes;
    NSMutableArray *_attributesBySections;
    NSMutableArray *_sectionAttributes;
    double _largestWidth;
    struct CGSize _contentSize;
}

- (void).cxx_destruct;
- (id)debuggingLayoutOptionsDescriptions;
- (BOOL)supportStickiness;
- (BOOL)supportHeaders;
- (unsigned long long)orientation;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)prepareLayout;
- (void)invalidateLayout;
- (id)indexPathsForSupplementaryViewsInRect:(struct CGRect)arg1;
- (id)indexPathsForItemsInRect:(struct CGRect)arg1;
@property unsigned long long numberOfRows; // @synthesize numberOfRows=_numberOfRows;
@property double spacingRatio; // @synthesize spacingRatio=_spacingRatio;
- (id)init;

@end

