/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <Foundation/Foundation.h> // Unknown library


__attribute__((visibility("hidden")))
@interface VideoData : NSObject {
@private
	int flags;	// 4 = 0x4
	int pid;	// 8 = 0x8
	int videoType;	// 12 = 0xc
	int width;	// 16 = 0x10
	int height;	// 20 = 0x14
	int parX;	// 24 = 0x18
	int parY;	// 28 = 0x1c
	long long averageFrameRate;	// 32 = 0x20
	int averageBitRate;	// 40 = 0x28
}
- (id)initWithBuffer:(id)buffer;	// 0x34de749c
- (int)getAverageBitRate;	// 0x34de7488
- (long long)getAverageFrameRate;	// 0x34de7470
- (int)getFlags;	// 0x34de73e4
- (int)getHeight;	// 0x34de7434
- (int)getPID;	// 0x34de73f8
- (int)getParX;	// 0x34de7448
- (int)getParY;	// 0x34de745c
- (int)getVideoType;	// 0x34de740c
- (int)getWidth;	// 0x34de7420
@end

