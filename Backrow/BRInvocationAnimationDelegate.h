/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <Foundation/Foundation.h> // Unknown library

@class NSInvocation;

@interface BRInvocationAnimationDelegate : NSObject {
@private
	NSInvocation *_startInvocation;	// 4 = 0x4
	NSInvocation *_endInvocation;	// 8 = 0x8
	id _endTarget;	// 12 = 0xc
}
@property(readonly, retain) NSInvocation *endInvocation;	// G=0x34dcb0f9; converted property
@property(readonly, retain) NSInvocation *startInvocation;	// G=0x34dcb0e9; converted property
+ (id)delegateWithEndInvocation:(id)endInvocation;	// 0x34dcaea9
+ (id)delegateWithStartInvocation:(id)startInvocation;	// 0x34dcaeed
+ (id)delegateWithStartInvocation:(id)startInvocation endInvocation:(id)invocation;	// 0x34dcaf31
+ (id)delegateWithTarget:(id)target endSelector:(SEL)selector;	// 0x34dcaf79
+ (id)delegateWithTarget:(id)target startSelector:(SEL)selector;	// 0x34dcafa9
+ (id)delegateWithTarget:(id)target startSelector:(SEL)selector endSelector:(SEL)selector3;	// 0x34dcafdd
- (id)initWithStartInvocation:(id)startInvocation endInvocation:(id)invocation;	// 0x34dcadb1
- (void)animationDidStart:(id)animation;	// 0x34dcb109
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x34dcb1b5
- (void)dealloc;	// 0x34dcae41
// converted property getter: - (id)endInvocation;	// 0x34dcb0f9
// converted property getter: - (id)startInvocation;	// 0x34dcb0e9
@end
