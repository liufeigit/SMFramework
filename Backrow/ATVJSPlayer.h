/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <Foundation/Foundation.h> // Unknown library

@class ATVJSContext;

__attribute__((visibility("hidden")))
@interface ATVJSPlayer : NSObject {
@private
	BOOL _isPlaying;	// 4 = 0x4
	ATVJSContext *context;	// 8 = 0x8
}
@property(retain) ATVJSContext *context;	// G=0x34cb8b31; S=0x34cb8b49; @synthesize
- (id)init;	// 0x34cb8635
- (BOOL)_isNotificationForMyMerchant:(id)myMerchant;	// 0x34cb87b5
- (void)_playerBufferSufficientToPlay:(id)play;	// 0x34cb89e1
- (void)_playerPlaybackError:(id)error;	// 0x34cb8a79
- (void)_playerStartedBuffering:(id)buffering;	// 0x34cb8921
- (void)_playerStateChanged:(id)changed;	// 0x34cb886d
// declared property getter: - (id)context;	// 0x34cb8b31
- (void)dealloc;	// 0x34cb8751
// declared property setter: - (void)setContext:(id)context;	// 0x34cb8b49
@end

