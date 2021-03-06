/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVDictionaryFeedResource.h"
#import "AppleTV-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVPreferenceFeedResource : ATVDictionaryFeedResource {
@private
	NSString *_path;	// 12 = 0xc
	BOOL _dirty;	// 16 = 0x10
	unsigned _format;	// 20 = 0x14
	dispatch_queue_s *_prefsWriteQueue;	// 24 = 0x18
}
- (id)initWithPath:(id)path;	// 0x34c99f3d
- (void)_savePrefs;	// 0x34c9a275
- (void)clearFeedResources;	// 0x34c9a1bd
- (void)dealloc;	// 0x34c9a089
- (void)setFeedResource:(id)resource named:(id)named;	// 0x34c9a101
@end

