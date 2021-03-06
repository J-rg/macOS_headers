//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNContact, CNObservable, CNUIPRLikenessResolverOptions, NSArray, PRMonogramColor;

@protocol CNUIPRLikenessResolver <NSObject>
+ (id <CNKeyDescriptor>)descriptorForRequiredKeys;
- (id <CNUIPlaceholderProviderFactory>)placeholderProviderFactory;
- (CNObservable *)basicMonogramObservableFromString:(CNObservable *)arg1 color:(PRMonogramColor *)arg2;
- (CNObservable *)likenessesForContact:(CNContact *)arg1 options:(CNUIPRLikenessResolverOptions *)arg2 workScheduler:(id <CNScheduler>)arg3;
- (CNObservable *)likenessesForContact:(CNContact *)arg1 workScheduler:(id <CNScheduler>)arg2;
- (id <CNCancelable>)resolveLikenessesForContacts:(NSArray *)arg1 workScheduler:(id <CNScheduler>)arg2 withContentHandler:(void (^)(NSArray *))arg3;
@end

