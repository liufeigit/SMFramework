/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSelectionHandler.h"
#import "BREventDelegate.h"
#import <Foundation/Foundation.h> // Unknown library

@class BRMerchant, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVFeedItemEventDelegate : NSObject <BREventDelegate, BRSelectionHandler> {
@private
	NSDictionary *_eventDictionary;	// 4 = 0x4
	BRMerchant *_merchant;	// 8 = 0x8
}
@property(retain) BRMerchant *merchant;	// G=0x34c9adbd; S=0x34c9add5; @synthesize=_merchant
+ (id)feedItemDelegateWithEventHandlers:(id)eventHandlers;	// 0x34c9a9c5
- (id)_initWithEventDictionary:(id)eventDictionary;	// 0x34c9aa45
- (BOOL)brEventAction:(id)action withControl:(id)control;	// 0x34c9ab05
- (BOOL)brKeyEvent:(id)event withControl:(id)control;	// 0x34c9ad41
- (void)dealloc;	// 0x34c9aaad
- (BOOL)handlePlayForControl:(id)control;	// 0x34c9ad81
- (BOOL)handleSelectionForControl:(id)control;	// 0x34c9ad45
// declared property getter: - (id)merchant;	// 0x34c9adbd
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x34c9add5
@end
