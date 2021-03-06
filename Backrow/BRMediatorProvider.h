/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRProvider.h"
#import "BRControlFactory.h"
#import <Foundation/Foundation.h> // Unknown library

@class NSMutableArray;

@interface BRMediatorProvider : NSObject <BRControlFactory, BRProvider> {
@private
	NSMutableArray *_activeMediators;	// 4 = 0x4
	NSMutableArray *_mediators;	// 8 = 0x8
}
@property(readonly, retain) NSMutableArray *mediators;	// G=0x34d86285; converted property
+ (id)provider;	// 0x34d85ec1
+ (id)providerWithControl:(id)control identifier:(id)identifier;	// 0x34d8600d
+ (id)providerWithControlArray:(id)controlArray;	// 0x34d861ad
+ (id)providerWithControls:(id)controls;	// 0x34d86105
+ (id)providerWithControlsAndIdentifiers:(id)controlsAndIdentifiers;	// 0x34d86055
+ (id)providerWithMediator:(id)mediator;	// 0x34d85f01
+ (id)providerWithMediatorArray:(id)mediatorArray;	// 0x34d85fc9
+ (id)providerWithMediators:(id)mediators;	// 0x34d85f45
- (id)init;	// 0x34d85e29
- (id)initWithMediators:(id)mediators;	// 0x34d85d09
- (long)_activeInsertIndexForMediator:(id)mediator;	// 0x34d867f9
- (void)_activeStateChanged:(id)changed;	// 0x34d86681
- (void)_controlChanged:(id)changed;	// 0x34d86789
- (void)_insertMediator:(id)mediator atIndex:(long)index;	// 0x34d8688d
- (void)_subscribeToNotificationsForMediator:(id)mediator;	// 0x34d8654d
- (void)_unsubscribeToNotificationsForMediator:(id)mediator;	// 0x34d865f9
- (void)addMediator:(id)mediator;	// 0x34d86295
- (id)controlFactory;	// 0x34d864c1
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x34d86535
- (id)dataAtIndex:(long)index;	// 0x34d864e5
- (long)dataCount;	// 0x34d864c5
- (void)dealloc;	// 0x34d85e41
- (id)hashForDataAtIndex:(long)index;	// 0x34d86505
- (void)insertMediator:(id)mediator after:(id)after;	// 0x34d863a5
- (void)insertMediator:(id)mediator before:(id)before;	// 0x34d86405
- (id)mediatorWithIdentifier:(id)identifier;	// 0x34d86449
// converted property getter: - (id)mediators;	// 0x34d86285
- (void)removeMediator:(id)mediator;	// 0x34d862cd
@end

