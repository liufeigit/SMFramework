/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVITunesTouchRemoteManager.h"
#import "BRSingleton.h"


@interface ATVITunesLibraryTouchRemoteAccess : BRSingleton <ATVITunesTouchRemoteManager> {
@private
	id<ATVITunesTouchRemoteManager> _delegate;	// 4 = 0x4
}
+ (void)setSingleton:(id)singleton;	// 0x34c42799
+ (id)singleton;	// 0x34c4278d
- (void)dealloc;	// 0x34c427a5
- (void)pairWithTouchRemote:(id)touchRemote withPIN:(id)pin;	// 0x34c42881
- (id)pairableTouchRemotes;	// 0x34c42861
- (id)pairedTouchRemotes;	// 0x34c42821
- (BOOL)removePairedTouchRemote:(id)remote;	// 0x34c42841
- (unsigned long)sendGeneralPurposeMessage:(id)message;	// 0x34c428a9
- (void)setITunesTouchRemoteManagerDelegate:(id)delegate;	// 0x34c427e9
@end
