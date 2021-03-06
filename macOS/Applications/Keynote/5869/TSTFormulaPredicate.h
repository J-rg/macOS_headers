//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GSSPAutoEncodable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSDate, NSLock, NSString, TSTFormulaPredArg;

@interface TSTFormulaPredicate : NSObject <GSSPAutoEncodable, NSCopying>
{
    struct TSCEFormula mFormula;
    int mPredicateType;
    int mQualifier1;
    int mQualifier2;
    int mArgIndex0;
    int mArgIndex1;
    int mArgIndex2;
    BOOL mParamsAreDone;
    unsigned char mNodeTag0;
    unsigned char mNodeTag1;
    unsigned char mNodeTag2;
    double mNumberParam1;
    double mNumberParam2;
    NSString *mStringParam1;
    NSDate *mDateTimeParam1;
    NSDate *mDateTimeParam2;
    struct TSCENumberValue *mDurationParam1;
    struct TSCENumberValue *mDurationParam2;
    struct TSCECrossTableReference _crossTableRefParam0;
    struct TSCECrossTableReference _crossTableRefParam1;
    struct TSCECrossTableReference _crossTableRefParam2;
    TSTFormulaPredArg *mPredArg1;
    TSTFormulaPredArg *mPredArg2;
    NSLock *mPopulateMembersLock;
}

+ (BOOL)isThresholdNeededForType:(int)arg1;
+ (id)defaultPredicateForType:(int)arg1 argumentCellReference:(id)arg2 hostCell:(struct TSUCellCoord)arg3;
+ (id)defaultPredicateForType:(int)arg1 argumentCellRef:(struct TSCECellRef)arg2 hostCell:(struct TSUCellCoord)arg3;
+ (id)validQualifiersForPredicate:(int)arg1;
+ (id)descriptionForQualifiers:(id)arg1 forPredicateType:(int)arg2;
+ (long long)viewTypeForPredicateType:(int)arg1;
+ (int)argTypeForPredicateType:(int)arg1;
+ (long long)categoryForPredicate:(int)arg1;
+ (id)predicateRulesInCategory:(long long)arg1 includingRelativePredicates:(BOOL)arg2;
+ (id)_descriptionForReferenceArg:(id)arg1 tableInfo:(id)arg2;
+ (id)descriptionForPredicateArg:(id)arg1 tableInfo:(id)arg2;
+ (BOOL)predicateArgIsReference:(id)arg1;
@property(retain, nonatomic) TSTFormulaPredArg *predArg2; // @synthesize predArg2=mPredArg2;
@property(retain, nonatomic) TSTFormulaPredArg *predArg1; // @synthesize predArg1=mPredArg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initFromArchive:(const struct FormulaPredicateArchive *)arg1;
- (void)encodeToArchive:(struct FormulaPredicateArchive *)arg1 archiver:(id)arg2;
- (void)upgradeTopAndBottom;
- (void)iterateFormulasWithContext:(id)arg1 shouldStop:(char *)arg2 block:(CDUnknownBlockType)arg3;
- (id)copyByRewritingWithContext:(id)arg1 rewriteBlock:(CDUnknownBlockType)arg2;
- (id)copyByClearingUids:(id)arg1 containingTableUID:(const UUIDData_5fbc143e *)arg2;
- (id)copyByUpdatingLinkedTable:(const UUIDData_5fbc143e *)arg1 hostCell:(struct TSUCellCoord)arg2;
- (id)copyByUpgradingToLinkedRefForTable:(const UUIDData_5fbc143e *)arg1 hostCell:(struct TSUCellCoord)arg2;
- (id)copyByOffsettingRelativeReferencesWithOffset:(struct TSUColumnRowOffset)arg1;
- (id)copyByRewritingWithSpec:(id)arg1 inOwner:(id)arg2 inCellCoordinate:(struct TSUCellCoord)arg3;
- (id)copyByConvertingChromeToBase:(id)arg1 inOwner:(id)arg2 inCellCoordinate:(struct TSUCellCoord)arg3;
- (id)copyByConvertingBaseToChrome:(id)arg1 inOwner:(id)arg2 inCellCoordinate:(struct TSUCellCoord)arg3;
- (id)copyByRemappingHostCellAgnosticOwnerUIDsWithMap:(const UUIDMap_b66c2694 *)arg1 calcEngine:(id)arg2 ownerUID:(const UUIDData_5fbc143e *)arg3 error:(char *)arg4;
- (id)copyByRemappingOwnerUIDsWithMap:(const UUIDMap_b66c2694 *)arg1 calcEngine:(id)arg2 error:(char *)arg3;
- (void)p_populateMembersFromFormula;
- (void)p_clearDerivedVariables;
- (id)description;
- (id)predicateArg2atBaseHostCoord:(struct TSUModelCellCoord)arg1 calcEngine:(id)arg2;
- (id)predicateArg1atBaseHostCoord:(struct TSUModelCellCoord)arg1 calcEngine:(id)arg2;
- (const struct TSCECrossTableReference *)crossTableRefParam2;
- (const struct TSCECrossTableReference *)crossTableRefParam1;
- (const struct TSCECrossTableReference *)crossTableRefParam0;
- (struct TSCENumberValue *)durationParam2;
- (struct TSCENumberValue *)durationParam1;
- (id)dateTimeParam2;
- (id)dateTimeParam1;
- (id)stringParam1;
- (double)numberParam2;
- (double)numberParam1;
- (unsigned char)nodeTag2;
- (unsigned char)nodeTag1;
- (unsigned char)nodeTag0;
- (void)p_setArgumentAt:(long long)arg1 nodeTag:(unsigned char)arg2 withCategoryRef:(const struct TSCECategoryRef *)arg3;
- (void)p_setArgumentAt:(long long)arg1 nodeTag:(unsigned char)arg2 withUIDRectRef:(id)arg3;
- (void)p_setArgumentAt:(long long)arg1 nodeTag:(unsigned char)arg2 withCrossTableRef:(struct TSCECrossTableReference)arg3;
- (void)p_setArgumentAt:(long long)arg1 nodeTag:(unsigned char)arg2 withDurationValue:(double)arg3 withUnit:(int)arg4;
- (void)p_setArgumentAt:(long long)arg1 nodeTag:(unsigned char)arg2 withDate:(id)arg3;
- (void)p_setArgumentAt:(long long)arg1 nodeTag:(unsigned char)arg2 withString:(id)arg3;
- (void)p_setArgumentAt:(long long)arg1 nodeTag:(unsigned char)arg2 withDouble:(double)arg3;
- (void)p_setParamIndex2:(int)arg1;
- (void)p_setParamIndex1:(int)arg1;
- (void)p_setParamIndex0:(int)arg1;
- (void)p_setQualifier2:(int)arg1;
- (void)p_setQualifier1:(int)arg1;
- (void)p_setPredicateType:(int)arg1;
- (int)qualifier2;
- (int)qualifier1;
- (int)predicateType;
- (void)setFormula:(const struct TSCEFormula *)arg1;
- (struct TSCEFormula *)formula;
- (BOOL)evaluateAtCellID:(struct TSUCellCoord)arg1 inFormulaOwner:(const UUIDData_5fbc143e *)arg2 calculationEngine:(id)arg3;
- (BOOL)p_testDataTypesForArg0:(int)arg1 arg1:(int)arg2 arg2:(int)arg3 predShouldReturn:(char *)arg4;
- (int)p_argTypeForNodeTag:(unsigned char)arg1 argNum:(unsigned long long)arg2 calculationEngine:(id)arg3 hostCell:(struct TSUCellCoord)arg4;
- (void)getPrecedents:(struct TSCEReferenceSet *)arg1 calcEngine:(id)arg2 hostOwnerUID:(const UUIDData_5fbc143e *)arg3 hostCellID:(const struct TSUCellCoord *)arg4;
- (BOOL)hasBadRefWithUidInfo;
- (BOOL)containsUidReferences;
- (void)setHostCell:(const UUIDData_5fbc143e *)arg1 hostColumnUID:(const UUIDData_5fbc143e *)arg2 hostRowUID:(const UUIDData_5fbc143e *)arg3;
- (id)copyToUidFormForConditionalStylesWithTableInfo:(id)arg1 containingCell:(struct TSUCellCoord)arg2 preserveHostCell:(BOOL)arg3;
- (id)copyToGeometricFormForHiddenRowsWithTableInfo:(id)arg1 containsBadRef:(char *)arg2;
- (id)copyToUidFormForHiddenRowsWithTableInfo:(id)arg1;
- (id)copyByRepairingBadReferences:(id)arg1;
- (id)copyToGeometricFormWithRewriteContext:(id)arg1;
- (id)copyToUidFormWithRewriteContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLiteralTextType:(int)arg1 string:(id)arg2 argumentCellRef:(struct TSCECellRef)arg3 hostCell:(struct TSUCellCoord)arg4;
- (id)initWithLiteralDurationType:(int)arg1 duration1:(double)arg2 durationUnits1:(int)arg3 duration2:(double)arg4 durationUnits2:(int)arg5 qualifier:(int)arg6 argumentCellRef:(struct TSCECellRef)arg7 hostCell:(struct TSUCellCoord)arg8;
- (id)initWithLiteralNumberType:(int)arg1 number1:(double)arg2 number2:(double)arg3 qualifier:(int)arg4 argumentCellRef:(struct TSCECellRef)arg5 hostCell:(struct TSUCellCoord)arg6;
- (id)initWithLiteralDateType:(int)arg1 date1:(id)arg2 date2:(id)arg3 number1:(double)arg4 number2:(double)arg5 qualifier1:(int)arg6 qualifier2:(int)arg7 argumentCellRef:(struct TSCECellRef)arg8 hostCell:(struct TSUCellCoord)arg9;
- (id)initWithLiteralDateType:(int)arg1 date1:(id)arg2 date2:(id)arg3 number1:(double)arg4 number2:(double)arg5 qualifier1:(int)arg6 qualifier2:(int)arg7 argumentCellRef:(struct TSCECellRef)arg8 hostCell:(struct TSUCellCoord)arg9 forConditionalStyle:(BOOL)arg10;
- (struct TSCEFormulaCreator)p_creatorForPeriodBoundaryWithScale:(int)arg1 direction:(int)arg2 offset:(id)arg3 argIndex:(unsigned int)arg4 earlierBound:(BOOL)arg5 isCalPers:(BOOL)arg6 hostCell:(const struct TSCECellRef *)arg7 calcEngine:(id)arg8;
- (id)initWithPredicateType:(int)arg1 arg1:(id)arg2 arg2:(id)arg3 qualifier1:(int)arg4 qualifier2:(int)arg5 argumentCellRef:(struct TSCECellRef)arg6 hostCell:(struct TSUCellCoord)arg7 calcEngine:(id)arg8;
- (id)initWithPredicateType:(int)arg1 arg1:(id)arg2 arg2:(id)arg3 qualifier1:(int)arg4 qualifier2:(int)arg5 argumentCellReference:(id)arg6 hostCell:(struct TSUCellCoord)arg7 calcEngine:(id)arg8 forConditionalStyle:(BOOL)arg9;
- (id)initWithPredicateType:(int)arg1 arg1:(id)arg2 arg2:(id)arg3 qualifier1:(int)arg4 qualifier2:(int)arg5 argumentCellRef:(struct TSCECellRef)arg6 hostCell:(struct TSUCellCoord)arg7 calcEngine:(id)arg8 forConditionalStyle:(BOOL)arg9;
- (BOOL)isEqualForInspector:(id)arg1 atHostCoordinate:(struct TSUCellCoord)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)p_isEqualForNonFormulaItems:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)init;
- (id)_explicitNaturalLanguageDescriptionWithSelection:(id)arg1 tableInfo:(id)arg2;
- (id)qualifierDescription;
- (id)_formatStringForPredicateType:(int)arg1;
- (id)naturalLanguageDescriptionWithSelection:(id)arg1 tableInfo:(id)arg2;
- (void)populateGSSPFormulaPredicate:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

@end

