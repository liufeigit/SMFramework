/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRImageControl;

__attribute__((visibility("hidden")))
@interface BRShimmerControl : BRControl {
@private
	BRControl *_base;	// 44 = 0x2c
	BRImageControl *_shimmer;	// 48 = 0x30
	float _offset;	// 52 = 0x34
}
@property(assign) float offset;	// G=0x34d34285; S=0x34d34235; converted property
+ (id)shimmerWithOffset:(float)offset;	// 0x34d34051
- (id)init;	// 0x34d3421d
- (id)initWithOffset:(float)offset;	// 0x34d340a9
- (id)_calculateKeyTimes;	// 0x34d345ad
- (id)_calculatePositionValues;	// 0x34d344e1
- (void)dealloc;	// 0x34d34295
- (void)layoutSubcontrols;	// 0x34d342ed
// converted property getter: - (float)offset;	// 0x34d34285
// converted property setter: - (void)setOffset:(float)offset;	// 0x34d34235
@end
