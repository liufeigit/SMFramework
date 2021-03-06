/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"

@class BRImageControl;

__attribute__((visibility("hidden")))
@interface ATVSedonaRateControl : BRControl {
@private
	float _initialRating;	// 44 = 0x2c
	float _curRating;	// 48 = 0x30
	float _actualRating;	// 52 = 0x34
	BRImageControl *_starImageControl;	// 56 = 0x38
}
@property(readonly, assign) float actualRating;	// G=0x34c67c75; converted property
+ (float)postSedonaRateDialogWithItem:(id)item;	// 0x34c6775d
+ (id)rateControlWithItem:(id)item;	// 0x34c677bd
- (id)initWithItem:(id)item;	// 0x34c677f1
- (id)_imageForKey:(id)key;	// 0x34c67f65
- (id)_starImageForRating:(float)rating predicted:(BOOL)predicted;	// 0x34c67fc9
- (id)accessibilityLabel;	// 0x34c68135
// converted property getter: - (float)actualRating;	// 0x34c67c75
- (BOOL)brEventAction:(id)action;	// 0x34c67c85
- (void)dealloc;	// 0x34c67c31
- (BOOL)isAccessibilityElement;	// 0x34c68131
@end

