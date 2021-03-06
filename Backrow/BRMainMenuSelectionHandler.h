/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSelectionHandler.h"
#import <Foundation/Foundation.h> // Unknown library


@interface BRMainMenuSelectionHandler : NSObject <BRSelectionHandler> {
@private
	id<BRSelectionHandler> _handler;	// 4 = 0x4
}
+ (id)handlerWithHandler:(id)handler;	// 0x34d893bd
- (id)initWithHandler:(id)handler;	// 0x34d893f1
- (void)dealloc;	// 0x34d8943d
- (BOOL)handlePlayForControl:(id)control;	// 0x34d895cd
- (BOOL)handleSelectionForControl:(id)control;	// 0x34d89481
@end

