//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKPaymentDataItem.h>

@class CNContact, PKPaymentApplication, PKRemoteDevice, PKRemotePaymentInstrument;

@interface PKPaymentRemotePaymentInstrumentDataItem : PKPaymentDataItem
{
}

+ (long long)dataType;
- (BOOL)isValidWithError:(id *)arg1;
- (unsigned long long)peerPaymentAccountState;
- (id)peerPaymentAccountBalance;
- (BOOL)hasAssociatedPeerPaymentAccount;
@property(readonly, nonatomic) BOOL requiresBillingAddress;
@property(readonly, nonatomic) CNContact *billingAddress;
@property(readonly, nonatomic) PKPaymentApplication *paymentApplication;
@property(readonly, nonatomic) PKRemotePaymentInstrument *remotePaymentInstrument;
@property(readonly, nonatomic) PKRemoteDevice *remoteDevice;
- (id)errors;

@end

